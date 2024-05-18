#pragma once

#include "pch.h"
#include "MenuPrincipal.h"
#include "CrearValoracioUI.h"
#include "Sistema.h"
#include <vector>

using namespace StudyHub;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class StarRatingControl : public UserControl
{
private:
    String^ _grup = "";
    const int STAR_COUNT = 5;
    const int STAR_SIZE = 20;
    const int SPACING = 1;
    int rating = 0;
    bool isRating = false;
    List<PictureBox^>^ stars;
    FlowLayoutPanel^ panel = gcnew FlowLayoutPanel();

public:
    StarRatingControl()
    {
        InitializeComponent();
        // Inicializar el FlowLayoutPanel
        panel->Dock = DockStyle::Fill;
        panel->FlowDirection = FlowDirection::LeftToRight;
        panel->WrapContents = false;
        this->Controls->Add(panel);

        // Inicializar la lista de estrellas
        stars = gcnew List<PictureBox^>();

        // Configurar eventos del ratón para las estrellas
        for (int i = 0; i < STAR_COUNT; i++)
        {
            PictureBox^ star = gcnew PictureBox();
            star->SizeMode = PictureBoxSizeMode::StretchImage;
            star->Size = System::Drawing::Size(STAR_SIZE, STAR_SIZE);
            star->Image = Image::FromFile("estrella_vacia.png"); // Ruta de la imagen de estrella vacía
            star->Tag = i + 1; // Valor de la estrella
            star->MouseEnter += gcnew EventHandler(this, &StarRatingControl::Star_MouseEnter);
            star->MouseClick += gcnew MouseEventHandler(this, &StarRatingControl::Star_MouseClick);
            star->MouseLeave += gcnew EventHandler(this, &StarRatingControl::Star_MouseLeave);
            stars->Add(star);
            panel->Controls->Add(star); // Agregar estrella al FlowLayoutPanel
        }

        UpdateStars();
    }
    StarRatingControl(String^ Grup)
    {
        _grup = Grup;
        InitializeComponent();
        // Inicializar el FlowLayoutPanel
        panel->Dock = DockStyle::Fill;
        panel->FlowDirection = FlowDirection::LeftToRight;
        panel->WrapContents = false;
        this->Controls->Add(panel);

        // Inicializar la lista de estrellas
        stars = gcnew List<PictureBox^>();

        // Configurar eventos del ratón para las estrellas
        for (int i = 0; i < STAR_COUNT; i++)
        {
            PictureBox^ star = gcnew PictureBox();
            star->SizeMode = PictureBoxSizeMode::StretchImage;
            star->Size = System::Drawing::Size(STAR_SIZE, STAR_SIZE);
            star->Image = Image::FromFile("estrella_vacia.png"); // Ruta de la imagen de estrella vacía
            star->Tag = i + 1; // Valor de la estrella
            star->MouseEnter += gcnew EventHandler(this, &StarRatingControl::Star_MouseEnter);
            star->MouseClick += gcnew MouseEventHandler(this, &StarRatingControl::Star_MouseClick);
            star->MouseLeave += gcnew EventHandler(this, &StarRatingControl::Star_MouseLeave);
            stars->Add(star);
            panel->Controls->Add(star); // Agregar estrella al FlowLayoutPanel
        }

        UpdateStars();
    }

    // Evento al mover el ratón sobre una estrella
    void Star_MouseEnter(Object^ sender, EventArgs^ e)
    {
        PictureBox^ star = safe_cast<PictureBox^>(sender);
        int starValue = safe_cast<int>(star->Tag);
        if (!isRating)
        {
            rating = starValue;
            UpdateStars();
        }
    }

    // Evento al hacer clic en una estrella
    void Star_MouseClick(Object^ sender, MouseEventArgs^ e)
    {
        isRating = true;
        PictureBox^ star = safe_cast<PictureBox^>(sender);
        rating = safe_cast<int>(star->Tag);
        UpdateStars();
        Sistema^ sis = Sistema::getInstance();
        CrearValoracioUI^ NewForm = gcnew CrearValoracioUI(rating, sis->obteUsername(), _grup);
        MenuPrincipal^ Menu = Menu->getInstance();
        // Menu->AbrirSubFormularioEnPanelOriginal(NewForm);
        NewForm->Show();
        isRating = false;
    }

    // Evento al salir del área de una estrella
    void Star_MouseLeave(Object^ sender, EventArgs^ e)
    {
        if (!isRating)
        {
            rating = 0;
            UpdateStars();
        }
    }

    // Actualizar la visualización de las estrellas
    void UpdateStars()
    {
        for each (PictureBox ^ star in stars)
        {
            int starValue = safe_cast<int>(star->Tag);
            if (starValue <= rating)
            {
                star->Image = Image::FromFile("estrella_entera.png"); // Ruta de la imagen de estrella llena
            }
            else
            {
                star->Image = Image::FromFile("estrella_vacia.png"); // Ruta de la imagen de estrella vacía
            }
        }
    }

protected:
    ~StarRatingControl()
    {
        if (components)
        {
            delete components;
        }
    }

private:
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    void InitializeComponent(void)
    {
        this->components = gcnew System::ComponentModel::Container();
        this->Size = System::Drawing::Size((STAR_SIZE + SPACING) * (STAR_COUNT+1), STAR_SIZE+2);
    }
#pragma endregion
};
