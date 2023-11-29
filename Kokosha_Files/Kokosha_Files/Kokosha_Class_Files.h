#pragma once

#include <iostream>
#include <string>
#include <map>

using namespace std;

/**
	@file		Kokosha_Class_Files.h
	@brief		Заголовочный файл класса Файлы
	@copyright	ВоГУ
	@author		Кокоша Д.Р.
	@data		29-11-2023
	@version	1.0.0
/par Использует классы:
	@ref Kokosha_Class_Files
/par Содержит класс:
	@ref Kokosha_Class_Files
*/

/// Класс описания Файлов
/** Содержит данные файлов и методы для работы с ними
*/

class Kokosha_Class_Files
{
private:
	map<string, map<string, string>> File_Kokosha; ///< Список, хранящий файлы и их свойства
public:
	/// Конструктор с заполнением полей класса
	/** Создает список файлов и инициализирует поля его первого файла
	\param Name имя создаваемого файла
	\param Size	размер создаваемого файла
	\param Date дата создания файла
	\param Appeals количество обращений к создаваемому файлу
	*/
	Kokosha_Class_Files(string Name, string Size, string Date, string Appeals);

	/// Добавляет новый файл
	/** Создает файл и инициализирует его поля
	\param Name имя создаваемого файла
	\param Size	размер создаваемого файла
	\param Date дата создания файла
	\param Appeals количество обращений к создаваемому файлу
	*/
	void AddFile_Kokosha(string Name, string Size, string Date, string Appeals);

	/// Показывает список файлов, упорядоченный в алфавитном порядке
	/** Выводит имена всех файлов, упорядоченных в алфавитном порядке
	*/
	void PrintAllFiles_Kokosha();

	/// Показывает список файлов, размер которых превышает заданный
	/** Выводит имена файлов, размер которых превышает заданный
	\param size	заданный размер
	*/
	void PrintFilesMoreSize_Kokosha(const int size);

	/// Показывает список файлов, число обращений к которым превышает заданное
	/** Выводит имена файлов, число обращений к которым превышает заданное
	\param appeals заданное число обращений
	*/
	void PrintFilesMoreAppeals_Kokosha(const int appeals);
};