
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00628ff8;
  if (PTR___gmon_start___00628ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400b00(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00629010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00629018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00629020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00629028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00629030)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00629038)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00629040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00629048)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00629050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00629058)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00629060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00629068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00629070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00629078)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00629080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00629088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00629090)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00629098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006290a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_006290a8)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_006290b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006290b8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006290c0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006290c8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_006290d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006290d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006290e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006290e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_006290f0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006290f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00629100)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00628ff8)();
  return;
}


void _start(undefined8 uParm1,undefined8 uParm2,undefined8 uParm3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,uParm3,
                    auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00400d47) */
/* WARNING: Removing unreachable block (ram,0x00400d51) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400d84) */
/* WARNING: Removing unreachable block (ram,0x00400d8e) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_6355 == 0) {
    deregister_tm_clones();
    completed_6355 = 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400dd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(undefined4 uParm1,undefined8 uParm2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = uParm1;
  globalArgv = uParm2;
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_02_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_02_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_18_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_18_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_14_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_14_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_11_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_11_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_12_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_12_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_02_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_02_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_09_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_09_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_06_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_06_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_03_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_03_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_13_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_13_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_18_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_18_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_04_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_04_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_10_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_10_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_16_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_16_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_03_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_03_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_13_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_13_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_15_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_15_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_18_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_18_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_05_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_05_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_02_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_02_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_10_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_10_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_03_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_03_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_07_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_07_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_13_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_13_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_05_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_05_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_07_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_07_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_01_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_01_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_01_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_01_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_16_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_16_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_04_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_04_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_02_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_02_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_08_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_08_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_12_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_12_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_16_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_16_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_03_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_03_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_18_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_18_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_10_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_10_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_11_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_11_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_09_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_09_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_15_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_15_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_11_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_11_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_12_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_12_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_09_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_09_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_08_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_08_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_14_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_14_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_15_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_15_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_10_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_10_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_17_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_17_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_11_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_11_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_14_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_14_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_02_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_02_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_05_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_05_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_08_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_08_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_18_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_18_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_07_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_07_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_11_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_11_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_08_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_08_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_15_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_15_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_16_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_16_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_04_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_04_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_15_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_15_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_16_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_16_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_06_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_06_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_17_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_17_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_17_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_17_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_17_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_17_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_13_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_13_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_04_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_04_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_06_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_06_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_06_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_06_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_14_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_14_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_14_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_14_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_05_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_05_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_07_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_07_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_12_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_12_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_05_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_05_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_12_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_12_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_01_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_01_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_13_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_13_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_04_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_04_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_07_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_07_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_01_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_01_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_06_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_06_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_09_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_09_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_09_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_09_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_03_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_03_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_10_good();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_10_good();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_02_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_02_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_18_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_18_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_14_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_14_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_11_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_11_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_12_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_12_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_02_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_02_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_09_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_09_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_06_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_06_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_03_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_03_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_13_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_13_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_18_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_18_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_04_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_04_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_10_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_10_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_16_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_16_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_03_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_03_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_13_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_13_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_15_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_15_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_18_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_18_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_05_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_05_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_02_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_02_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_10_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_10_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_03_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_03_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_07_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_07_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_13_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_13_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_05_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_05_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_07_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_07_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_01_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_01_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_01_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_01_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_16_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_16_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_04_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_04_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_02_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_02_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_08_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_08_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_12_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_12_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_16_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_16_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_03_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_03_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_18_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_18_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_10_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_10_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_11_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_11_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_09_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_09_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_15_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_15_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_11_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_11_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_12_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_12_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_09_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_09_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_08_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_08_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_14_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_14_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_15_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_15_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_10_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_10_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_17_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_17_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_11_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_11_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_14_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_14_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_02_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_02_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_05_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_05_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_08_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_08_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_18_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_18_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_07_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_07_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_11_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_11_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_08_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_08_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_15_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_15_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_16_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_16_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_04_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_04_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_15_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_15_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_16_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_16_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_06_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_06_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_17_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_17_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_17_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_17_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_17_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_17_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_13_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_13_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_04_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_04_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_06_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_06_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_06_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_06_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_14_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_14_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_14_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_14_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_05_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_05_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_07_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_07_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_12_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_12_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_05_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_05_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_12_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_12_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_01_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_01_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_13_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_13_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_04_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_04_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_07_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_07_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_01_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_01_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_06_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_06_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_09_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_09_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_09_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_09_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_03_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_03_bad();
  printLine(
           "Calling CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_10_bad();"
           );
  CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_10_bad();
  return 0;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_16_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402784) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004049bf) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_10 != -1) && (iVar1 = bind(local_14,(sockaddr *)&local_48,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_14,5), iVar1 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_17_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_18_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_10 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (iVar1 = bind(local_14,(sockaddr *)&local_48,0x10), iVar1 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_17_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405ad4) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_06_good(void)

{
  good1();
  good2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406c0f) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_16_good(void)

{
  good1();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408c31) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_18_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409b42) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a0f2) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_01_good(void)

{
  good1();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_18_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = listen(local_14,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_14,(sockaddr *)&local_68,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_12_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (iVar1 = bind(local_14,(sockaddr *)&local_68,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_12_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_14,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_12_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = listen(local_14,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_14,(sockaddr *)&local_68,0x10), iVar1 != -1)) &&
         (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_12_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_14,(sockaddr *)&local_68,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_14,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_e8;
  undefined8 local_e0 [13];
  sa_family_t local_78;
  uint16_t local_76;
  undefined4 local_74;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char *local_50;
  int local_44;
  size_t local_40;
  int local_34;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_34 = 0xffffffff;
    local_10 = -1;
    local_40 = strlen((char *)&local_e8);
    local_34 = socket(2,1,6);
    if (local_34 != -1) {
      memset(&local_78,0,0x10);
      local_78 = 2;
      local_74 = 0;
      local_76 = htons(0x6987);
      iVar1 = bind(local_34,(sockaddr *)&local_78,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_34,5), iVar1 != -1)) &&
         (local_10 = accept(local_34,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_e8 + local_40),(long)(99 - (int)local_40),0);
        local_44 = (int)sVar2;
        if ((local_44 != -1) && (local_44 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_44) = 0;
          local_50 = strchr((char *)&local_e8,0xd);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
          local_50 = strchr((char *)&local_e8,10);
          if (local_50 != (char *)0x0) {
            *local_50 = 0;
          }
        }
      }
    }
    if (local_34 != -1) {
      close(local_34);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_e8);
  }
  else {
    local_e8 = 0;
    lVar3 = 0xb;
    puVar4 = local_e0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_c = -1;
    local_20 = strlen((char *)&local_e8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_c = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_e8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_e8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_e8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_e8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_e8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_12_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_16_good(void)

{
  good1();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410938) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410ee8) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_18_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) &&
          (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) &&
         (iVar1 = listen(local_14,5), iVar1 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_17_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = listen(local_14,5);
      if (((iVar1 != -1) &&
          (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) &&
         (iVar1 = bind(local_14,(sockaddr *)&local_48,0x10), iVar1 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_17_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = listen(local_14,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_14,(sockaddr *)&local_48,0x10), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_b8 = 0;
    lVar3 = 0xb;
    puVar4 = local_b0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_14 = 0xffffffff;
    local_10 = -1;
    local_20 = strlen((char *)&local_b8);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)&local_b8 + local_20),(long)(99 - (int)local_20),0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)&local_b8 + (long)local_24) = 0;
          local_30 = strchr((char *)&local_b8,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)&local_b8,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    printLine(&local_b8);
    local_c = local_c + 1;
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_17_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_16_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_16_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_10_good(void)

{
  good1();
  good2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_01_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = listen(local_10,5);
    if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_01_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_01_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_01_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) &&
        (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_18_good(void)

{
  good1();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_listen_bind_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_accept_bind_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = listen(local_10,5);
      if (((iVar1 != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  bVar5 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__listen_bind_accept_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) &&
          (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalFalse == 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (globalTrue != 0) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__bind_accept_listen_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
      if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
         (iVar1 = listen(local_10,5), iVar1 != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (staticFive == 5) {
    local_a8 = 0;
    lVar3 = 0xb;
    puVar4 = local_a0;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = 0;
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen((char *)&local_a8);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
          local_28 = strchr((char *)&local_a8,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr((char *)&local_a8,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
    printLine(&local_a8);
  }
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0);
    if (((local_c != -1) && (iVar1 = bind(local_10,(sockaddr *)&local_38,0x10), iVar1 != -1)) &&
       (iVar1 = listen(local_10,5), iVar1 != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f7bc) */

void good1(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void good2(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_a8 = 0;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)&local_a8);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)&local_a8 + local_18),(long)(99 - (int)local_18),0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)&local_a8 + (long)local_1c) = 0;
        local_28 = strchr((char *)&local_a8,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)&local_a8,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  printLine(&local_a8);
  return;
}


void CWE666_Operation_on_Resource_in_Wrong_Phase_of_Lifetime__accept_bind_listen_04_good(void)

{
  good1();
  good2();
  return;
}


void printLine(char *pcParm1)

{
  if (pcParm1 != (char *)0x0) {
    puts(pcParm1);
  }
  return;
}


void printWLine(long lParm1)

{
  if (lParm1 != 0) {
    wprintf(L"%ls\n",lParm1);
  }
  return;
}


void printIntLine(uint uParm1)

{
  printf("%d\n",(ulong)uParm1);
  return;
}


void printShortLine(short sParm1)

{
  printf("%hd\n",(ulong)(uint)(int)sParm1);
  return;
}


void printFloatLine(float fParm1)

{
  printf((char *)(double)fParm1,&DAT_00424aa5);
  return;
}


void printLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printLongLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printSizeTLine(undefined8 uParm1)

{
  printf("%zu\n",uParm1);
  return;
}


void printHexCharLine(char cParm1)

{
  printf("%02x\n",(ulong)(uint)(int)cParm1);
  return;
}


void printWcharLine(undefined4 uParm1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = uParm1;
  printf("%ls\n",&local_18);
  return;
}


void printUnsignedLine(uint uParm1)

{
  printf("%u\n",(ulong)uParm1);
  return;
}


void printHexUnsignedCharLine(byte bParm1)

{
  printf("%02x\n",(ulong)bParm1);
  return;
}


void printDoubleLine(char *pcParm1)

{
  printf(pcParm1,&DAT_00424ac2);
  return;
}


void printStructLine(uint *puParm1)

{
  printf("%d -- %d\n",(ulong)*puParm1,(ulong)puParm1[1]);
  return;
}


void printBytesLine(long lParm1,ulong uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < uParm2) {
    printf("%02x",(ulong)*(byte *)(local_10 + lParm1));
    local_10 = local_10 + 1;
  }
  puts("");
  return;
}


ulong decodeHexChars(long lParm1,ulong uParm2,long lParm3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + lParm3;
    __isoc99_sscanf(lVar1,&DAT_00424ad0,&local_14,lVar1);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


ulong decodeHexWChars(long lParm1,ulong uParm2,long lParm3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00424ad8,&local_14);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


undefined8 globalReturnsTrue(void)

{
  return 1;
}


undefined8 globalReturnsFalse(void)

{
  return 0;
}


ulong globalReturnsTrueOrFalse(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rand();
  uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1f;
  return (ulong)((iVar1 + uVar2 & 1) - uVar2);
}


void good1(void)

{
  return;
}


void good2(void)

{
  return;
}


void good3(void)

{
  return;
}


void good4(void)

{
  return;
}


void good5(void)

{
  return;
}


void good6(void)

{
  return;
}


void good7(void)

{
  return;
}


void good8(void)

{
  return;
}


void good9(void)

{
  return;
}


void bad1(void)

{
  return;
}


void bad2(void)

{
  return;
}


void bad3(void)

{
  return;
}


void bad4(void)

{
  return;
}


void bad5(void)

{
  return;
}


void bad6(void)

{
  return;
}


void bad7(void)

{
  return;
}


void bad8(void)

{
  return;
}


void bad9(void)

{
  return;
}


void internal_start(long lParm1,undefined8 uParm2)

{
  (**(code **)(lParm1 + 8))(*(undefined8 *)(lParm1 + 0x10),uParm2,*(undefined8 *)(lParm1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


undefined8 stdThreadCreate(pthread_t pParm1,pthread_t pParm2,pthread_t **pppParm3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *pppParm3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = pParm1;
    local_10[2] = pParm2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *pppParm3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}


ulong stdThreadJoin(pthread_t *ppParm1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*ppParm1,&local_10);
  return (ulong)(iVar1 == 0);
}


undefined8 stdThreadDestroy(void *pvParm1)

{
  free(pvParm1);
  return 1;
}


undefined8 stdThreadLockCreate(pthread_mutex_t **ppabParm1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *ppabParm1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *ppabParm1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(ppabParm1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


void stdThreadLockAcquire(pthread_mutex_t *pabParm1)

{
  pthread_mutex_lock(pabParm1);
  return;
}


void stdThreadLockRelease(pthread_mutex_t *pabParm1)

{
  pthread_mutex_unlock(pabParm1);
  return;
}


void stdThreadLockDestroy(pthread_mutex_t *pabParm1)

{
  pthread_mutex_destroy(pabParm1);
  free(pabParm1);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *pEParm1,undefined8 uParm2,undefined8 uParm3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(pEParm1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)pEParm1 & 0xffffffff,uParm2,uParm3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}

