#pragma once
#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

public ref class StarRatingView : public UserControl
{
private:
    FlowLayoutPanel^ panelEstrellas;

public:
    StarRatingView()
    {
        InitializeComponent();
        carregarValoracio(5.0);
    }

    void carregarValoracio(double valoracion)
    {
        // Número de estrellas
        int numeroEstrellas = 5;

        // Rutas de las imágenes de estrellas
        String^ rutaEstrellaEntera = "estrella_entera.png";
        String^ rutaMediaEstrella = "media_estrella.png";
        String^ rutaMediaVacia = "estrella_vacia.png";

        // Limpiar el panel de estrellas existente
        panelEstrellas->Controls->Clear();

        // Mostrar las imágenes de las estrellas correspondientes a la valoración
        for (int i = 0; i < numeroEstrellas; i++)
        {
            PictureBox^ pictureBox = gcnew PictureBox();
            pictureBox->SizeMode = PictureBoxSizeMode::StretchImage; // Ajustar el tamaño de la imagen
            pictureBox->Size = System::Drawing::Size(20, 20);
            panelEstrellas->Controls->Add(pictureBox);

            if (valoracion >= 1)
            {
                // Estrella entera
                pictureBox->ImageLocation = rutaEstrellaEntera;
            }
            else if (valoracion > 0)
            {
                // Media estrella
                pictureBox->ImageLocation = rutaMediaEstrella;
            }
            else
            {
                // Sin estrella (opcionalmente, puedes agregar una imagen de estrella vacía)
                pictureBox->ImageLocation = rutaMediaVacia;
            }
            valoracion -= 1;
        }
    }

protected:
    ~StarRatingView()
    {
        if (components)
        {
            delete components;
        }
    }

private:
    System::ComponentModel::Container^ components;

    void InitializeComponent(void)
    {
        this->panelEstrellas = gcnew System::Windows::Forms::FlowLayoutPanel();
        this->SuspendLayout();
        // 
        // panelEstrellas
        // 
        this->panelEstrellas->AutoSize = true;
        this->panelEstrellas->Location = System::Drawing::Point(0, 0);
        this->panelEstrellas->Name = L"panelEstrellas";
        this->panelEstrellas->Size = System::Drawing::Size(120, 30);
        this->panelEstrellas->TabIndex = 0;
        // 
        // StarRatingView
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->Controls->Add(this->panelEstrellas);
        this->Name = L"StarRatingView";
        this->Size = System::Drawing::Size(140, 30);
        this->ResumeLayout(false);
        this->PerformLayout();
    }
};


