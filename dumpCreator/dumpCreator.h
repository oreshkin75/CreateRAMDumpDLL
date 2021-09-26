#pragma once

#ifdef DUMPCREATOR_EXPORTS
#define DUMPCREATOR_API __declspec(dllexport)
#else
#define DUMPCREATOR_API __declspec(dllimport)
#endif

extern "C" DUMPCREATOR_API unsigned int DumpProcessImpl(DWORD processId, LPCTSTR fileName);
extern "C" DUMPCREATOR_API BOOL SetPrivilege(HANDLE hToken, LPCTSTR lpszPrivilege, BOOL bEnablePrivilege);