#include "Kokosha_Class_Files.h"

/**
	@file		Kokosha_Class_Files.cpp
	@brief		Файл исходных кодов класса Файлы
	@copyright	ВоГУ
	@author		Кокоша Д.Р.
	@data		29-11-2023
	@version	1.0.0
/par Использует классы:
	@ref Kokosha_Class_Files.h
/par Содержит класс:
	@ref Kokosha_Class_Files
*/

Kokosha_Class_Files::Kokosha_Class_Files(string Name, string Size, string Date, string Appeals)
{
	File_Kokosha[Name]["Size"] = Size;
	File_Kokosha[Name]["Date"] = Date;
	File_Kokosha[Name]["Appeals"] = Appeals;
}

void Kokosha_Class_Files::AddFile_Kokosha(string Name, string Size, string Date, string Appeals)
{
	File_Kokosha[Name]["Size"] = Size;
	File_Kokosha[Name]["Date"] = Date;
	File_Kokosha[Name]["Appeals"] = Appeals;
}

void Kokosha_Class_Files::PrintAllFiles_Kokosha()
{
	for (auto& item : File_Kokosha)
	{
		cout << item.first << endl;
	}
}

void Kokosha_Class_Files::PrintFilesMoreSize_Kokosha(const int size)
{
	for (auto& item : File_Kokosha)
	{
		for (auto& item2 : item.second)
		{
			if (item2.first == "Size" && stoi(item2.second) > size)
			{
				cout << item.first << "\t" << " Size: " << item2.second << endl;
			}
		}
	}
	cout << endl;
}

void Kokosha_Class_Files::PrintFilesMoreAppeals_Kokosha(const int appeals)
{
	for (auto& item : File_Kokosha)
	{
		for (auto& item2 : item.second)
		{
			if (item2.first == "Appeals" && stoi(item2.second) > appeals)
			{
				cout << item.first << "\t" << " Appeals: " << item2.second << endl;
			}
		}
	}
	cout << endl;
}