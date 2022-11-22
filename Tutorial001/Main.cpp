#define _WIN32_WINNT 0x601 // ����� ������� � ������
#include <windows.h> // ���������� ���������� �� ������������ ������� Windows
#include <stdio.h> // ���������� ����������� ���� � ����� ���������� � ����� C

int main() {
    // �������� ����������� � �������
    HWND console_handle = GetConsoleWindow(); 
    HDC device_context = GetDC(console_handle);

    // ����� 5 �������� ������� ������� ����� ���������� � [0,0] �� [300,300]
    HPEN Line1 = CreatePen(PS_SOLID, 5, RGB(255, 0, 0)); // ���� �������� � RGB
    SelectObject(device_context, Line1); // ���������� ������ � �������
    LineTo(device_context, 300, 300); // ������������ ���������� X � Y �������

    // ����� 5 �������� ������� ������� ����� ���������� � [0,0] �� [300,300]
    HPEN Line2 = CreatePen(PS_SOLID, 5, RGB(255, 100, 100)); // ���� �������� � RGB
    SelectObject(device_context, Line2); // ���������� ������ � �������
    LineTo(device_context, 300, 800); // ������������ ���������� X � Y �������

    ReleaseDC(console_handle, device_context); // ����������� �������� �������

    getchar(); // ������� ����� ������������

    return 0;
}