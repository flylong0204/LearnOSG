/*
*	*������library01: ��EXE�ﵼ���������� 
*
*/

#ifndef LIBRARY_01_H
#define LIBRARY_01_H

#define EXE_LIBRARY

#ifdef EXE_LIBRARY
#define EXE_LIBRARY_API __declspec(dllexport)
#else
#define EXE_LIBRARY_API __declspec(dllimport)
#endif

EXE_LIBRARY_API int add(int a, int b);

#endif //LIBRARY_01_H