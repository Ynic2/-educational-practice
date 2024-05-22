#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <chrono>
#include <time.h>
#include "Sorts.h"

namespace ucPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ A1;
	protected:
	private: System::Windows::Forms::Button^ A2;
	private: System::Windows::Forms::Button^ A3;
	private: System::Windows::Forms::RadioButton^ bitwise;
	private: System::Windows::Forms::RadioButton^ inserts;
	private: System::Windows::Forms::RadioButton^ bubles;
	private: System::Windows::Forms::RadioButton^ shaker;
	private: System::Windows::Forms::RadioButton^ fast;
	private: System::Windows::Forms::TextBox^ inputMass;
	private: System::Windows::Forms::Button^ sort;
	private: System::Windows::Forms::Label^ time;

	private: System::Windows::Forms::TextBox^ outputMass;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ symbolicButton;

	private: System::Windows::Forms::RadioButton^ randomButton;
	private: System::Windows::Forms::Button^ button1;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->bitwise = (gcnew System::Windows::Forms::RadioButton());
			this->inserts = (gcnew System::Windows::Forms::RadioButton());
			this->bubles = (gcnew System::Windows::Forms::RadioButton());
			this->shaker = (gcnew System::Windows::Forms::RadioButton());
			this->fast = (gcnew System::Windows::Forms::RadioButton());
			this->inputMass = (gcnew System::Windows::Forms::TextBox());
			this->sort = (gcnew System::Windows::Forms::Button());
			this->time = (gcnew System::Windows::Forms::Label());
			this->outputMass = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->symbolicButton = (gcnew System::Windows::Forms::RadioButton());
			this->randomButton = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// A1
			// 
			this->A1->Location = System::Drawing::Point(95, 34);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(145, 48);
			this->A1->TabIndex = 0;
			this->A1->Text = L"Массив A1";
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::A1_Click);
			// 
			// A2
			// 
			this->A2->Location = System::Drawing::Point(353, 34);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(145, 48);
			this->A2->TabIndex = 1;
			this->A2->Text = L"Массив A2";
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::A2_Click);
			// 
			// A3
			// 
			this->A3->Location = System::Drawing::Point(601, 34);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(145, 48);
			this->A3->TabIndex = 2;
			this->A3->Text = L"Массив A3";
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::A3_Click);
			// 
			// bitwise
			// 
			this->bitwise->AutoSize = true;
			this->bitwise->Location = System::Drawing::Point(91, 118);
			this->bitwise->Name = L"bitwise";
			this->bitwise->Size = System::Drawing::Size(116, 20);
			this->bitwise->TabIndex = 3;
			this->bitwise->TabStop = true;
			this->bitwise->Text = L"Поразрядная";
			this->bitwise->UseVisualStyleBackColor = true;
			// 
			// inserts
			// 
			this->inserts->AutoSize = true;
			this->inserts->Location = System::Drawing::Point(247, 118);
			this->inserts->Name = L"inserts";
			this->inserts->Size = System::Drawing::Size(99, 20);
			this->inserts->TabIndex = 4;
			this->inserts->TabStop = true;
			this->inserts->Text = L"Вставками";
			this->inserts->UseVisualStyleBackColor = true;
			// 
			// bubles
			// 
			this->bubles->AutoSize = true;
			this->bubles->Location = System::Drawing::Point(388, 118);
			this->bubles->Name = L"bubles";
			this->bubles->Size = System::Drawing::Size(116, 20);
			this->bubles->TabIndex = 5;
			this->bubles->TabStop = true;
			this->bubles->Text = L"Пузырьковая";
			this->bubles->UseVisualStyleBackColor = true;
			// 
			// shaker
			// 
			this->shaker->AutoSize = true;
			this->shaker->Location = System::Drawing::Point(545, 118);
			this->shaker->Name = L"shaker";
			this->shaker->Size = System::Drawing::Size(86, 20);
			this->shaker->TabIndex = 6;
			this->shaker->TabStop = true;
			this->shaker->Text = L"Шейкера";
			this->shaker->UseVisualStyleBackColor = true;
			// 
			// fast
			// 
			this->fast->AutoSize = true;
			this->fast->Location = System::Drawing::Point(672, 118);
			this->fast->Name = L"fast";
			this->fast->Size = System::Drawing::Size(83, 20);
			this->fast->TabIndex = 7;
			this->fast->TabStop = true;
			this->fast->Text = L"Быстрая";
			this->fast->UseVisualStyleBackColor = true;
			// 
			// inputMass
			// 
			this->inputMass->Location = System::Drawing::Point(91, 165);
			this->inputMass->Multiline = true;
			this->inputMass->Name = L"inputMass";
			this->inputMass->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->inputMass->Size = System::Drawing::Size(329, 223);
			this->inputMass->TabIndex = 8;
			// 
			// sort
			// 
			this->sort->Location = System::Drawing::Point(40, 429);
			this->sort->Name = L"sort";
			this->sort->Size = System::Drawing::Size(167, 63);
			this->sort->TabIndex = 9;
			this->sort->Text = L"Сортировать";
			this->sort->UseVisualStyleBackColor = true;
			this->sort->Click += gcnew System::EventHandler(this, &MyForm::sort_Click);
			// 
			// time
			// 
			this->time->AutoSize = true;
			this->time->Location = System::Drawing::Point(279, 429);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(0, 16);
			this->time->TabIndex = 10;
			// 
			// outputMass
			// 
			this->outputMass->Location = System::Drawing::Point(468, 165);
			this->outputMass->Multiline = true;
			this->outputMass->Name = L"outputMass";
			this->outputMass->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outputMass->Size = System::Drawing::Size(329, 223);
			this->outputMass->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->symbolicButton);
			this->groupBox1->Controls->Add(this->randomButton);
			this->groupBox1->Location = System::Drawing::Point(602, 405);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 122);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// symbolicButton
			// 
			this->symbolicButton->AutoSize = true;
			this->symbolicButton->Location = System::Drawing::Point(6, 50);
			this->symbolicButton->Name = L"symbolicButton";
			this->symbolicButton->Size = System::Drawing::Size(160, 20);
			this->symbolicButton->TabIndex = 1;
			this->symbolicButton->TabStop = true;
			this->symbolicButton->Text = L"Символьный массив";
			this->symbolicButton->UseVisualStyleBackColor = true;
			// 
			// randomButton
			// 
			this->randomButton->AutoSize = true;
			this->randomButton->Location = System::Drawing::Point(6, 24);
			this->randomButton->Name = L"randomButton";
			this->randomButton->Size = System::Drawing::Size(152, 20);
			this->randomButton->TabIndex = 0;
			this->randomButton->TabStop = true;
			this->randomButton->Text = L"Случайный массив";
			this->randomButton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 40);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Очистить параметры";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 539);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->outputMass);
			this->Controls->Add(this->time);
			this->Controls->Add(this->sort);
			this->Controls->Add(this->inputMass);
			this->Controls->Add(this->fast);
			this->Controls->Add(this->shaker);
			this->Controls->Add(this->bubles);
			this->Controls->Add(this->inserts);
			this->Controls->Add(this->bitwise);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа \"Сортировки\"";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	std::vector<int> symbolicSplit(const std::string& s, char delimiter) {
		std::vector<int> mass;
		for (int i = 0; i < s.size(); i++) {
			if (s[i]!=delimiter) {
				mass.push_back(s[i]);
			}
		}
		return mass;
	}

	std::vector<int> split(const std::string& s, char delimiter) {
		std::vector<int> mass;
		std::string num = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				num += s[i];
			}
			else if (s[i] == delimiter) {
				if (num != "") {
					mass.push_back(stoi(num));
				}
				num = "";
			}
			else {
				return {};
			}
		}
		if (num != "") {
			mass.push_back(stoi(num));
		}
		return mass;
	}


	private: System::Void A1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputMass->Clear();
		std::string line;
		std::string fullFile="";
		std::ifstream in("A1.txt");
		if (in.is_open()) {
			while (std::getline(in, line)) {
				fullFile.append(line);
			}
		}
		String^ text = gcnew String(fullFile.c_str());
		in.close();
		this->inputMass->Text = text;
	}

	private: System::Void A2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputMass->Clear();
		std::string line;
		std::string fullFile = "";
		std::ifstream in("A2.txt");
		if (in.is_open()) {
			while (std::getline(in, line)) {
				fullFile.append(line);
			}
		}
		String^ text = gcnew String(fullFile.c_str());
		in.close();
		this->inputMass->Text = text;
	}

	private: System::Void A3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputMass->Clear();
		std::string line;
		std::string fullFile = "";
		std::ifstream in("A3.txt");
		if (in.is_open()) {
			while (std::getline(in, line)) {
				fullFile.append(line);
			}
		}
		String^ text = gcnew String(fullFile.c_str());
		in.close();
		this->inputMass->Text = text;
	}

	private: System::Void sort_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(::time(0));
		if (this->bitwise->Checked == true) {
			std::vector<int> mass;
			String^ text;
			std::string standartText;
			if (this->randomButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() != 1) {
					this->time->Text = "Нельзя сгенерировать массив\nпо двум числам!";
					return;
				}
				int size = mass[0];
				mass = {};
				for (int i = 0; i < size; i++) {
					mass.push_back(rand() % 10000);
				}
				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText.append(std::to_string(mass[i]) + " ");
				}
				standartText.append(std::to_string(mass[mass.size() - 1]));

				text = gcnew String(standartText.c_str());
				this->inputMass->Text = text;
			}
			if (this->symbolicButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = symbolicSplit(standartText, ' ');
				auto begin = std::chrono::steady_clock::now();
				radixSort(mass);
				auto end = std::chrono::steady_clock::now();
				auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText += (char)mass[i];
					standartText += " ";
				}
				standartText += (char)mass[mass.size() - 1];
				text = gcnew String(standartText.c_str());
				this->outputMass->Text = text;
				int timeOnSort = elapsed_ms.count();
				standartText = std::to_string(timeOnSort);
				text = gcnew String(standartText.c_str());
				this->time->Text = "Потраченное время " + text + " мс";
				return;
			}
			else{
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() == 0) {
					this->time->Text = "В числах присутсвовал иной символ";
					return;
				}
			}

			auto begin = std::chrono::steady_clock::now();
			radixSort(mass);
			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

			standartText = "";
			
			for (size_t i = 0; i < mass.size()-1; i++) {
				standartText.append(std::to_string(mass[i])+" ");
			}
			standartText.append(std::to_string(mass[mass.size() - 1]));

			text = gcnew String(standartText.c_str());
			this->outputMass->Text = text;
			int timeOnSort = elapsed_ms.count();
			standartText = std::to_string(timeOnSort);
			text = gcnew String(standartText.c_str());
			this->time->Text = "Потраченное время "+text+" мс";
		}
		else if(this->inserts->Checked == true) {
			std::vector<int> mass;
			String^ text;
			std::string standartText;
			if (this->randomButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() != 1) {
					this->time->Text = "Нельзя сгенерировать массив\nпо двум числам!";
					return;
				}
				int size = mass[0];
				mass = {};
				for (int i = 0; i < size; i++) {
					mass.push_back(rand() % 10000);
				}
				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText.append(std::to_string(mass[i]) + " ");
				}
				standartText.append(std::to_string(mass[mass.size() - 1]));

				text = gcnew String(standartText.c_str());
				this->inputMass->Text = text;
			}
			if (this->symbolicButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = symbolicSplit(standartText, ' ');
				auto begin = std::chrono::steady_clock::now();
				insertionSort(mass);
				auto end = std::chrono::steady_clock::now();
				auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText += (char)mass[i];
					standartText += " ";
				}
				standartText += (char)mass[mass.size() - 1];
				text = gcnew String(standartText.c_str());
				this->outputMass->Text = text;
				int timeOnSort = elapsed_ms.count();
				standartText = std::to_string(timeOnSort);
				text = gcnew String(standartText.c_str());
				this->time->Text = "Потраченное время " + text + " мс";
				return;
			}
			else {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() == 0) {
					this->time->Text = "В числах присутсвовал иной символ";
					return;
				}
			}

			auto begin = std::chrono::steady_clock::now();
			insertionSort(mass);
			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

			standartText = "";

			for (size_t i = 0; i < mass.size() - 1; i++) {
				standartText.append(std::to_string(mass[i]) + " ");
			}
			standartText.append(std::to_string(mass[mass.size() - 1]));

			text = gcnew String(standartText.c_str());
			this->outputMass->Text = text;
			int timeOnSort = elapsed_ms.count();
			standartText = std::to_string(timeOnSort);
			text = gcnew String(standartText.c_str());
			this->time->Text = "Потраченное время " + text + " мс";
		}
		else if (this->bubles->Checked == true) {
			std::vector<int> mass;
			String^ text;
			std::string standartText;
			if (this->randomButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() != 1) {
					this->time->Text = "Нельзя сгенерировать массив\nпо двум числам!";
					return;
				}
				int size = mass[0];
				mass = {};
				for (int i = 0; i < size; i++) {
					mass.push_back(rand() % 10000);
				}
				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText.append(std::to_string(mass[i]) + " ");
				}
				standartText.append(std::to_string(mass[mass.size() - 1]));

				text = gcnew String(standartText.c_str());
				this->inputMass->Text = text;
			}
			if (this->symbolicButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = symbolicSplit(standartText, ' ');
				auto begin = std::chrono::steady_clock::now();
				bubleSort(mass);
				auto end = std::chrono::steady_clock::now();
				auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText += (char)mass[i];
					standartText += " ";
				}
				standartText += (char)mass[mass.size() - 1];
				text = gcnew String(standartText.c_str());
				this->outputMass->Text = text;
				int timeOnSort = elapsed_ms.count();
				standartText = std::to_string(timeOnSort);
				text = gcnew String(standartText.c_str());
				this->time->Text = "Потраченное время " + text + " мс";
				return;
			}
			else {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() == 0) {
					this->time->Text = "В числах присутсвовал иной символ";
					return;
				}
			}

			auto begin = std::chrono::steady_clock::now();
			bubleSort(mass);
			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

			standartText = "";

			for (size_t i = 0; i < mass.size() - 1; i++) {
				standartText.append(std::to_string(mass[i]) + " ");
			}
			standartText.append(std::to_string(mass[mass.size() - 1]));

			text = gcnew String(standartText.c_str());
			this->outputMass->Text = text;
			int timeOnSort = elapsed_ms.count();
			standartText = std::to_string(timeOnSort);
			text = gcnew String(standartText.c_str());
			this->time->Text = "Потраченное время " + text + " мс";
		}
		else if (this->shaker->Checked == true) {
			std::vector<int> mass;
			String^ text;
			std::string standartText;
			if (this->randomButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() != 1) {
					this->time->Text = "Нельзя сгенерировать массив\nпо двум числам!";
					return;
				}
				int size = mass[0];
				mass = {};
				for (int i = 0; i < size; i++) {
					mass.push_back(rand() % 10000);
				}
				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText.append(std::to_string(mass[i]) + " ");
				}
				standartText.append(std::to_string(mass[mass.size() - 1]));

				text = gcnew String(standartText.c_str());
				this->inputMass->Text = text;
			}
			if (this->symbolicButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = symbolicSplit(standartText, ' ');
				auto begin = std::chrono::steady_clock::now();
				shakerSort(mass);
				auto end = std::chrono::steady_clock::now();
				auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText += (char)mass[i];
					standartText += " ";
				}
				standartText += (char)mass[mass.size() - 1];
				text = gcnew String(standartText.c_str());
				this->outputMass->Text = text;
				int timeOnSort = elapsed_ms.count();
				standartText = std::to_string(timeOnSort);
				text = gcnew String(standartText.c_str());
				this->time->Text = "Потраченное время " + text + " мс";
				return;
			}
			else {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() == 0) {
					this->time->Text = "В числах присутсвовал иной символ";
					return;
				}
			}

			auto begin = std::chrono::steady_clock::now();
			shakerSort(mass);
			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

			standartText = "";

			for (size_t i = 0; i < mass.size() - 1; i++) {
				standartText.append(std::to_string(mass[i]) + " ");
			}
			standartText.append(std::to_string(mass[mass.size() - 1]));

			text = gcnew String(standartText.c_str());
			this->outputMass->Text = text;
			int timeOnSort = elapsed_ms.count();
			standartText = std::to_string(timeOnSort);
			text = gcnew String(standartText.c_str());
			this->time->Text = "Потраченное время " + text + " мс";
		}
		else if (this->fast->Checked == true) {
			std::vector<int> mass;
			String^ text;
			std::string standartText;
			if (this->randomButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() != 1) {
					this->time->Text = "Нельзя сгенерировать массив\nпо двум числам!";
					return;
				}
				int size = mass[0];
				mass = {};
				for (int i = 0; i < size; i++) {
					mass.push_back(rand() % 10000);
				}
				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText.append(std::to_string(mass[i]) + " ");
				}
				standartText.append(std::to_string(mass[mass.size() - 1]));

				text = gcnew String(standartText.c_str());
				this->inputMass->Text = text;
			}
			if (this->symbolicButton->Checked == true) {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = symbolicSplit(standartText, ' ');
				auto begin = std::chrono::steady_clock::now();
				quickSort(mass);
				auto end = std::chrono::steady_clock::now();
				auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

				standartText = "";

				for (size_t i = 0; i < mass.size() - 1; i++) {
					standartText += (char)mass[i];
					standartText += " ";
				}
				standartText += (char)mass[mass.size() - 1];
				text = gcnew String(standartText.c_str());
				this->outputMass->Text = text;
				int timeOnSort = elapsed_ms.count();
				standartText = std::to_string(timeOnSort);
				text = gcnew String(standartText.c_str());
				this->time->Text = "Потраченное время " + text + " мс";
				return;
			}
			else {
				text = this->inputMass->Text;
				standartText = msclr::interop::marshal_as<std::string>(text);
				mass = split(standartText, ' ');
				if (mass.size() == 0) {
					this->time->Text = "В числах присутсвовал иной символ";
					return;
				}
			}

			auto begin = std::chrono::steady_clock::now();
			quickSort(mass);
			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

			standartText = "";

			for (size_t i = 0; i < mass.size() - 1; i++) {
				standartText.append(std::to_string(mass[i]) + " ");
			}
			standartText.append(std::to_string(mass[mass.size() - 1]));

			text = gcnew String(standartText.c_str());
			this->outputMass->Text = text;
			int timeOnSort = elapsed_ms.count();
			standartText = std::to_string(timeOnSort);
			text = gcnew String(standartText.c_str());
			this->time->Text = "Потраченное время " + text + " мс";
		}
		else {
			this->time->Text = "Не выбрана сортировка";
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->randomButton->Checked = false;
	this->symbolicButton->Checked = false;
}
};
}
