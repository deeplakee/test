#ifdef EXPORT_DLL
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif

//返回今天日期
EXPORT void printDate(void);