#include "pch.h"
#include "CrearValoracioUI.h"
#include "TxCrearValoracio.h"
#include "StarRatingView.h"

using namespace StudyHub;

System::Void CrearValoracioUI::ButtonEnviar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ comentari = this->CaixaComentari->Text;
	Int64^ val = gcnew Int64(_valoracio);
	TxCrearValoracio^ novaValoracio = gcnew TxCrearValoracio(_estudiant, _grup, val, comentari);
	novaValoracio->executar();
	this->Close();
}

System::Void CrearValoracioUI::Load_inicial() {
	this->NomUsuari->Text = _estudiant;
	this->nomGrup->Text = _grup;
	//------------------------------------------------
	// Cargar y redimensionar la imagen
	Image^ originalImage = Image::FromFile("cancel.png");
	Image^ resizedImage = ResizeImage(originalImage, 10, 10);
	this->buttonClose->Image = resizedImage;
	//------------------------------------------------
	StarRatingView^ valoracioActual = gcnew StarRatingView(float(_valoracio));
	this->ValoracioLayout->Controls->Add(valoracioActual);
}