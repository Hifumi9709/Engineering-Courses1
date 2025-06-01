#ifdef DLLADD_EXPORTS
#define DLLADD_API __declspec(dllexport)
#else
#define DLLADD_API __declspec(dllimport)
#endif

DLLADD_API int add_func(int a, int b);
