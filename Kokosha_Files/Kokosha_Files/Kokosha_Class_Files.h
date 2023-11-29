#pragma once

#include <iostream>
#include <string>
#include <map>

using namespace std;

/**
	@file		Kokosha_Class_Files.h
	@brief		������������ ���� ������ �����
	@copyright	����
	@author		������ �.�.
	@data		29-11-2023
	@version	1.0.0
/par ���������� ������:
	@ref Kokosha_Class_Files
/par �������� �����:
	@ref Kokosha_Class_Files
*/

/// ����� �������� ������
/** �������� ������ ������ � ������ ��� ������ � ����
*/

class Kokosha_Class_Files
{
private:
	map<string, map<string, string>> File_Kokosha; ///< ������, �������� ����� � �� ��������
public:
	/// ����������� � ����������� ����� ������
	/** ������� ������ ������ � �������������� ���� ��� ������� �����
	\param Name ��� ������������ �����
	\param Size	������ ������������ �����
	\param Date ���� �������� �����
	\param Appeals ���������� ��������� � ������������ �����
	*/
	Kokosha_Class_Files(string Name, string Size, string Date, string Appeals);

	/// ��������� ����� ����
	/** ������� ���� � �������������� ��� ����
	\param Name ��� ������������ �����
	\param Size	������ ������������ �����
	\param Date ���� �������� �����
	\param Appeals ���������� ��������� � ������������ �����
	*/
	void AddFile_Kokosha(string Name, string Size, string Date, string Appeals);

	/// ���������� ������ ������, ������������� � ���������� �������
	/** ������� ����� ���� ������, ������������� � ���������� �������
	*/
	void PrintAllFiles_Kokosha();

	/// ���������� ������ ������, ������ ������� ��������� ��������
	/** ������� ����� ������, ������ ������� ��������� ��������
	\param size	�������� ������
	*/
	void PrintFilesMoreSize_Kokosha(const int size);

	/// ���������� ������ ������, ����� ��������� � ������� ��������� ��������
	/** ������� ����� ������, ����� ��������� � ������� ��������� ��������
	\param appeals �������� ����� ���������
	*/
	void PrintFilesMoreAppeals_Kokosha(const int appeals);
};