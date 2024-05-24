#include "pch.h"
#include "GestionarPeticionsUI.h"
#include "Sistema.h"
#include "TxObtenirPeticionsPendents.h"

using namespace StudyHub;

System::Void GestionarPeticionsUI::GestionarPeticionsUI_Load(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sist = Sistema::getInstance();
	String^ nomCreador = sist->obteUsername();
	TxObtenirPeticionsPendents^ txPetPendents = gcnew TxObtenirPeticionsPendents(nomCreador);
	txPetPendents->executar();
	DataTable^ data = txPetPendents->obteResultat();
	this->dataGridViewPeticions->DataSource = data;
}