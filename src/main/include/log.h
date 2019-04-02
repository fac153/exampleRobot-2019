#ifndef LOG_H
#define LOG_H

#define ENTER printf("%s:%d - enter\n", __FUNCTION__, __LINE__);
#define EXIT printf("%s:%d - exit\n", __FUNCTION__, __LINE__);
#define TRACE printf("%s:%d\n", __FUNCTION__, __LINE__);
#define TRACE_S1(str) printf("%s:%d - %s\n", __FUNCTION__, __LINE__, str);
#define TRACE_D1(str,n) printf("%s:%d - %s %d\n", __FUNCTION__, __LINE__, str, n);
#define TRACE_U1(str,n) printf("%s:%d - %s %u\n", __FUNCTION__, __LINE__, str, n);

#endif // LOG_H