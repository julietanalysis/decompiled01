
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0062fff8;
  if (PTR___gmon_start___0062fff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400d00(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00630010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00630018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00630020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00630028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_00630030)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00630038)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00630040)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00630048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00630050)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00630058)();
  return pFVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00630060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00630068)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00630070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00630078)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00630080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00630088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00630090)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00630098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_006300a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_006300a8)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_006300b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006300b8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_006300c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int putenv(char *__string)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putenv_006300c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_006300d0)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_006300d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_006300e0)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006300e8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006300f0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006300f8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00630100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00630108)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00630110)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00630118)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00630120)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00630128)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00630130)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00630138)();
  return tVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
  in_addr_t iVar1;
  
  iVar1 = (*(code *)PTR_inet_addr_00630140)();
  return iVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0062fff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400fc7) */
/* WARNING: Removing unreachable block (ram,0x00400fd1) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401004) */
/* WARNING: Removing unreachable block (ram,0x0040100e) */

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


/* WARNING: Removing unreachable block (ram,0x00401054) */
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
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_45_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_45_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_12_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_12_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_18_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_18_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_09_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_09_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_41_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_41_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_51_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_51_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_03_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_03_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_64_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_64_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_21_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_21_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_05_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_05_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_67_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_67_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_22_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_22_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_18_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_18_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_41_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_41_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_02_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_02_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_52_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_52_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_66_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_66_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_54_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_54_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_45_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_45_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_05_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_05_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_11_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_11_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_21_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_21_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_45_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_45_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_06_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_06_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_16_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_16_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_01_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_01_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_21_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_21_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_02_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_02_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_64_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_64_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_17_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_17_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_52_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_52_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_41_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_41_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_01_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_01_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_18_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_18_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_10_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_10_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_13_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_13_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_09_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_09_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_68_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_68_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_32_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_32_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_04_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_04_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_06_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_06_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_05_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_05_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_14_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_14_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_67_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_67_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_03_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_03_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_08_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_08_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_53_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_53_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_10_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_10_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_04_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_04_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_61_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_61_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_03_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_03_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_68_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_68_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_07_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_07_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_42_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_42_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_04_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_04_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_32_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_32_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_11_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_11_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_17_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_17_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_10_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_10_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_63_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_63_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_53_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_16_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_16_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_17_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_17_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_13_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_13_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_15_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_15_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_08_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_08_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_12_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_12_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_22_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_22_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_42_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_42_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_10_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_10_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_12_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_12_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_04_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_04_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_02_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_02_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_66_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_66_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_09_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_09_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_66_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_66_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_05_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_05_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_18_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_18_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_13_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_13_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_53_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_53_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_51_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_51_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_08_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_08_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_06_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_06_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_14_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_14_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_15_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_15_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_10_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_10_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_04_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_04_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_03_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_03_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_01_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_01_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_42_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_42_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_31_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_31_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_06_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_06_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_14_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_14_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_63_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_63_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_31_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_31_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_65_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_65_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_44_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_44_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_34_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_34_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_01_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_01_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_67_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_67_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_12_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_12_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_32_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_32_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_31_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_31_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_14_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_14_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_63_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_63_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_09_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_09_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_02_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_02_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_54_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_21_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_21_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_32_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_32_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_07_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_07_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_07_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_07_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_31_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_31_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_15_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_15_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_17_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_17_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_44_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_44_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_34_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_34_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_42_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_42_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_08_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_08_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_02_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_02_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_14_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_14_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_68_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_68_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_13_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_13_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_16_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_16_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_34_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_34_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_42_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_42_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_16_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_16_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_11_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_11_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_31_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_31_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_03_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_03_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_01_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_01_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_09_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_09_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_15_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_15_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_07_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_07_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_44_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_44_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_22_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_22_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_15_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_15_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_65_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_65_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_32_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_32_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_64_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_64_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_65_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_65_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_52_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_52_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_51_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_51_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_17_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_17_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_05_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_05_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_16_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_16_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_11_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_11_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_12_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_12_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_44_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_44_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_54_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_54_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_08_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_08_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_61_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_61_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_21_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_21_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_07_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_07_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_11_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_11_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_44_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_44_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_18_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_18_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_34_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_34_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_61_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_61_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_06_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_06_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_13_good();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_13_good();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_45_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_45_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_12_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_12_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_18_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_18_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_09_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_09_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_41_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_41_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_51_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_51_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_03_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_03_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_64_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_64_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_21_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_21_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_05_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_05_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_67_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_67_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_22_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_22_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_18_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_18_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_41_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_41_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_02_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_02_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_52_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_52_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_66_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_66_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_54_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_54_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_45_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_45_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_05_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_05_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_11_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_11_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_21_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_21_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_45_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_45_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_06_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_06_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_16_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_16_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_01_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_01_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_21_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_21_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_02_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_02_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_64_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_64_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_17_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_17_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_52_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_52_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_41_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_41_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_01_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_01_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_18_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_18_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_10_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_10_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_13_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_13_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_09_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_09_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_68_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_68_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_32_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_32_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_04_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_04_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_06_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_06_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_05_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_05_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_14_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_14_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_67_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_67_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_03_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_03_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_08_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_08_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_53_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_53_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_10_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_10_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_04_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_04_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_61_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_61_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_03_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_03_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_68_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_68_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_07_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_07_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_42_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_42_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_04_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_04_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_32_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_32_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_11_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_11_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_17_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_17_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_10_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_10_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_63_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_63_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_53_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_16_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_16_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_17_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_17_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_13_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_13_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_15_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_15_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_08_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_08_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_12_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_12_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_22_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_22_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_42_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_42_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_10_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_10_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_12_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_12_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_04_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_04_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_02_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_02_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_66_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_66_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_09_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_09_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_66_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_66_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_05_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_05_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_18_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_18_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_13_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_13_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_53_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_53_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_51_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_51_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_08_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_08_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_06_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_06_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_14_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_14_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_15_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_15_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_10_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_10_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_04_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_04_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_03_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_03_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_01_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_01_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_42_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_42_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_31_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_31_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_06_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_06_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_14_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_14_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_63_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_63_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_31_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_31_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_65_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_65_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_44_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_44_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_34_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_34_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_01_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_01_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_67_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_67_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_12_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_12_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_32_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_32_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_31_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_31_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_14_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_14_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_63_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_63_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_09_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_09_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_02_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_02_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_54_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_21_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_21_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_32_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_32_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_07_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_07_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_07_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_07_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_31_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_31_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_15_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_15_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_17_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_17_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_44_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_44_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_34_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_34_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_42_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_42_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_08_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_08_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_02_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_02_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_14_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_14_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_68_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_68_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_13_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_13_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_16_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_16_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_34_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_34_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_42_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_42_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_16_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_16_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_11_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_11_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_31_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_31_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_03_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_03_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_01_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_01_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_09_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_09_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_15_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_15_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_07_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_07_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_44_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_44_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_22_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_22_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_15_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_15_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_65_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_65_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_32_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_32_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_64_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_64_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_65_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_65_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_52_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_52_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_51_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_51_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_17_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_17_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_05_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_05_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_16_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_16_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_11_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_11_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_12_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_12_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_44_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_44_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_54_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_54_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_08_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_08_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_61_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_61_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_21_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_21_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_07_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_07_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_11_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_11_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_environment_44_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_environment_44_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_file_18_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_file_18_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_34_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_34_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_console_61_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_console_61_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_06_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_06_bad();
  printLine("Calling CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_13_bad();");
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_13_bad();
  return 0;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_65b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_65b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_badData = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x403109;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_goodG2BData;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68b_goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_54c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_54c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66b_badSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66b_goodG2BSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52c_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52c_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x403424;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_16_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40355e;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4037db;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_68_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_68_badData = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_console_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_console_68_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_console_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_console_68_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x403986;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_console_68_goodG2BData;
  CWE427_Uncontrolled_Search_Path_Element__char_console_68b_goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_68_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_52_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x403b1f;
  CWE427_Uncontrolled_Search_Path_Element__char_console_52b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_52_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_console_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_console_22_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B1Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B2Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_16_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x403e26;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_16_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4040a1;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_51_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  undefined8 *local_28;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_28 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_console_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40424a;
  local_10 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_console_67b_goodG2BSink(local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_67_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54e_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54e_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_console_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_console_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 0xfa - sVar1) {
      pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      else {
        sVar1 = strlen(pcParm1);
        if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
          pcParm1[sVar1 - 1] = 0;
        }
      }
    }
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_console_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_178;
  uint16_t local_176;
  undefined4 local_174;
  undefined8 local_168;
  undefined8 local_160 [31];
  undefined local_68 [16];
  undefined8 *local_58;
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_168 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_160;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_168;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_178,0,0x10);
    local_178 = 2;
    local_174 = 0;
    local_176 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_178,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_58 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66b_badSink(local_68);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack320 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack320)[~uVar3 + 0xb] = 0;
  uStack320 = 0x40467b;
  local_10 = local_28;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66b_goodG2BSink(local_38);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_66_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_07_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x4047f9;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x40483a;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x4048ce;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_128 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_120;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_128;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_12_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x404d1f;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_45_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_file_65b_badSink;
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_128;
  local_20 = strlen((char *)local_18);
  if (1 < 0xfa - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),0xfa - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_file_65b_goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x404ea8;
  CWE427_Uncontrolled_Search_Path_Element__char_file_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_65_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_65b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_65b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004050e6) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x405131;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4051c4;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40544b;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_65_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_environment_65b_badSink;
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_18 = &local_128;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,0xf9 - local_20);
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_environment_65b_goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x405597;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_65_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61b_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61b_goodG2BSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4058da;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x405964;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_53d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_53d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_18_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x405b1b;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_18_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_42_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_64b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_64b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53d_goodG2BSink(uParm1);
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


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_console_65b_badSink;
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_128;
  local_20 = strlen((char *)local_18);
  if (1 < 0xfa - local_20) {
    pcVar1 = fgets((char *)(local_20 + (long)local_18),0xfa - (int)local_20,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_20 + (long)local_18) = 0;
    }
    else {
      local_20 = strlen((char *)local_18);
      if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
      }
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_console_65b_goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4062ca;
  CWE427_Uncontrolled_Search_Path_Element__char_console_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_65_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_67_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [31];
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  local_28 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x406414;
  local_10 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_67b_goodG2BSink(local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_67_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_15_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4065b1;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40663b;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_18 = &local_128;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    local_28 = getenv("ADD");
    if (local_28 != (char *)0x0) {
      strncat((char *)((long)local_18 + local_20),local_28,0xf9 - local_20);
    }
    local_c = local_c + 1;
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  int local_c;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack288 = 0x4067a5;
      putenv(local_18);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
    local_c = local_c + 1;
  } while( true );
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_17_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_badData = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4069e8;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_goodG2BData;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68b_goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_44_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_18 = &local_128;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,0xf9 - local_20);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x406b68;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_44_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x406de5;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_54c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_54c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_03_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x406fb2;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40703b;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 0xfa - sVar1) {
    pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      pcParm1[sVar1] = 0;
    }
    else {
      sVar1 = strlen(pcParm1);
      if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
        pcParm1[sVar1 - 1] = 0;
      }
    }
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_42_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x407432;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x407473;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x407506;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x407785;
  local_10 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67b_goodG2BSink(local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_68b_badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_file_68_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_68b_goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_file_68_goodG2BData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_environment_61b_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_environment_61b_goodG2BSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_61_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_17_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_128;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    if (1 < 0xfa - local_20) {
      local_28 = fopen("/tmp/file.txt","r");
      if (local_28 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_18 + local_20),0xfa - (int)local_20,local_28);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_20 + (long)local_18) = 0;
        }
        fclose(local_28);
      }
    }
    local_c = local_c + 1;
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  int local_c;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack288 = 0x407a47;
      putenv(local_18);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
    local_c = local_c + 1;
  } while( true );
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_17_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_environment_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,0xf9 - sVar1);
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_environment_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x407bfe;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x407c3f;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x407cd2;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_128;
  local_20 = strlen((char *)local_18);
  if (1 < 0xfa - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),0xfa - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x407e99;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_44_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x407fb4;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x407ff5;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x408089;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_120;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_128;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_02_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x408482;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40850b;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  in_addr_t local_154;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined8 *local_48;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_148;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = inet_addr("127.0.0.1");
    local_156 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_158,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  local_38 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x40879a;
  local_18 = local_28;
  local_10 = local_28;
  putenv(local_28);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_34_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66b_badSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66b_goodG2BSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_05_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x408962;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x4089a3;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x408a36;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x408b7a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_01_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_41_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_41_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_41_badSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_41_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x408d47;
  CWE427_Uncontrolled_Search_Path_Element__char_console_41_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_41_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53d_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53d_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_09_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x408f09;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x408f4a;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x408fdd;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_file_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 0xfa - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_file_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_10_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x40921c;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x40925d;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x4092f0;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_52c_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_52c_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_68b_badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_console_68_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_68b_goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_console_68_goodG2BData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4095a1;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_41_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_41_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_41_badSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_41_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40970f;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_41_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_41_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_54d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_54d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  bVar8 = 0;
  local_128 = 0x3d48544150;
  lVar5 = 0x1e;
  puVar7 = local_120;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_10 = &local_128;
  iVar2 = globalReturnsTrueOrFalse(puVar7,uParm2,(undefined2 *)((long)puVar7 + 2));
  if (iVar2 == 0) {
    uVar6 = 0xffffffffffffffff;
    puVar7 = local_10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar8 * -2 + 1);
    } while (cVar1 != 0);
    puVar4 = (undefined4 *)((long)local_10 + (~uVar6 - 1));
    *puVar4 = 0x6e69622f;
    *(undefined *)(puVar4 + 1) = 0;
  }
  else {
    local_18 = strlen((char *)local_10);
    if ((1 < 0xfa - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
      pcVar3 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_12_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 local_140 [32];
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  code *local_18;
  int local_c;
  
  local_18 = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65b_badSink;
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &local_148;
  local_24 = 0xffffffff;
  local_c = -1;
  local_30 = strlen((char *)local_20);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = 0;
    local_156 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_158,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_c = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_20 + local_30),0xf9 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_c != -1) {
    close(local_c);
  }
  (*local_18)(local_20);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65b_goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x409bd5;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_65_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_66b_badSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_66b_goodG2BSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x409d98;
  CWE427_Uncontrolled_Search_Path_Element__char_file_54b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x409fac;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x409fed;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x40a080;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40a309;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40a393;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x40a4b6;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x40a4f7;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x40a58a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54e_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54e_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_168;
  uint16_t local_166;
  in_addr_t local_164;
  undefined8 local_158;
  undefined8 local_150 [31];
  undefined local_58 [16];
  undefined8 *local_48;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_158 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_150;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_158;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_168,0,0x10);
    local_168 = 2;
    local_164 = inet_addr("127.0.0.1");
    local_166 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_168,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66b_badSink(local_58);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack320 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack320)[~uVar3 + 0xb] = 0;
  uStack320 = 0x40a809;
  local_10 = local_28;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66b_goodG2BSink(local_38);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_66_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen(pcParm1);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
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
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_42_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_file_61b_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_file_61b_goodG2BSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_61_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68b_badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68b_goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_68_goodG2BData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_07_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x40ad65;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x40ada6;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x40ae3a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54e_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54e_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_64b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_64b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  undefined8 *local_18;
  size_t local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_118;
  local_10 = strlen((char *)local_18);
  if (1 < 0xfa - local_10) {
    pcVar1 = fgets((char *)(local_10 + (long)local_18),0xfa - (int)local_10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_10 + (long)local_18) = 0;
    }
    else {
      local_10 = strlen((char *)local_18);
      if ((local_10 != 0) && (*(char *)((long)local_18 + (local_10 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_10 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40b09e;
  CWE427_Uncontrolled_Search_Path_Element__char_console_64b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_64_good(void)

{
  goodG2B();
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


void CWE427_Uncontrolled_Search_Path_Element__char_file_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_120;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_128;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  if (staticTrue != 0) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x40b558;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x40b599;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x40b62c;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_badSink(local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40b8e7;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_41_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_52b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_52c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_52b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_52c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52c_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_52c_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54d_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54e_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54d_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54e_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_52b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_52c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_52b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_52c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54e_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54e_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined local_48 [16];
  undefined8 *local_38;
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_148 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_140;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_148;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_file_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack320 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack320)[~uVar3 + 0xb] = 0;
  uStack320 = 0x40bba6;
  local_10 = local_28;
  CWE427_Uncontrolled_Search_Path_Element__char_file_66b_goodG2BSink(local_38);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_66_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  if (globalFive == 5) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x40be08;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x40be49;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x40bedd;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_168;
  uint16_t local_166;
  undefined4 local_164;
  undefined8 local_158;
  undefined8 local_150 [31];
  undefined8 *local_58;
  undefined8 *local_50;
  char *local_48;
  int local_3c;
  size_t local_38;
  int local_2c;
  undefined8 *local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  int local_c;
  
  local_18 = &local_58;
  local_20 = &local_58;
  local_158 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_150;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_58 = &local_158;
  local_2c = 0xffffffff;
  local_c = -1;
  local_28 = local_58;
  local_38 = strlen((char *)local_58);
  local_2c = socket(2,1,6);
  if (local_2c != -1) {
    memset(&local_168,0,0x10);
    local_168 = 2;
    local_164 = 0;
    local_166 = htons(0x6987);
    iVar1 = bind(local_2c,(sockaddr *)&local_168,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_2c,5), iVar1 != -1)) &&
       (local_c = accept(local_2c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_28 + local_38),0xf9 - local_38,0);
      local_3c = (int)sVar2;
      if ((local_3c != -1) && (local_3c != 0)) {
        *(undefined *)((long)local_28 + (long)local_3c + local_38) = 0;
        local_48 = strchr((char *)local_28,0xd);
        if (local_48 != (char *)0x0) {
          *local_48 = 0;
        }
        local_48 = strchr((char *)local_28,10);
        if (local_48 != (char *)0x0) {
          *local_48 = 0;
        }
      }
    }
  }
  if (local_2c != -1) {
    close(local_2c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  *local_18 = local_28;
  local_50 = *local_20;
  putenv((char *)local_50);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack313;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack313._1_8_ = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack313 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x6e69622f;
  *(undefined *)((long)&Stack313 + ~uVar3 + 4) = 0;
  local_28 = local_30;
  local_20 = local_30;
  putenv((char *)local_30);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_32_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B1Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B2Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c43f) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40c48a;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40c51d;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_52b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_52c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_52b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_52c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B1Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B2Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54d_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54e_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54d_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54e_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_52_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40c877;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_52b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_52_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE427_Uncontrolled_Search_Path_Element__char_file_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_148;
  undefined8 local_140 [32];
  undefined8 *local_40;
  undefined8 *local_38;
  FILE *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_148 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_140;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_40 = &local_148;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
  if (1 < 0xfa - local_28) {
    local_30 = fopen("/tmp/file.txt","r");
    if (local_30 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_28),0xfa - (int)local_28,local_30);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_28 + (long)local_20) = 0;
      }
      fclose(local_30);
    }
  }
  *local_10 = local_20;
  local_38 = *local_18;
  putenv((char *)local_38);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack313;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack313._1_8_ = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack313 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x6e69622f;
  *(undefined *)((long)&Stack313 + ~uVar3 + 4) = 0;
  local_28 = local_30;
  local_20 = local_30;
  putenv((char *)local_30);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_32_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_51b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_51b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40cbc0;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_16_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ce14) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40ce5f;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40cef1;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined8 *local_48;
  undefined8 *local_40;
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_148;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = 0;
    local_156 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_158,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_40 = local_18;
  local_48 = local_18;
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x40d198;
  local_18 = local_20;
  local_10 = local_20;
  putenv(local_20);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_31_good(void)

{
  goodG2B();
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


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_52_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40d66f;
  CWE427_Uncontrolled_Search_Path_Element__char_file_52b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_52_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40d8a0;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_52_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_51b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_51b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40da6d;
  CWE427_Uncontrolled_Search_Path_Element__char_console_53b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61b_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_16_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40dd6c;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_16_good(void)

{
  goodG2B();
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


void CWE427_Uncontrolled_Search_Path_Element__char_environment_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined2 *)((long)puVar3 + 2));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE427_Uncontrolled_Search_Path_Element__char_console_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined8 *local_38;
  undefined8 *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_38 = &local_138;
  local_20 = local_38;
  local_28 = strlen((char *)local_38);
  if (1 < 0xfa - local_28) {
    pcVar1 = fgets((char *)(local_28 + (long)local_20),0xfa - (int)local_28,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_28 + (long)local_20) = 0;
    }
    else {
      local_28 = strlen((char *)local_20);
      if ((local_28 != 0) && (*(char *)((long)local_20 + (local_28 - 1)) == '\n')) {
        *(undefined *)((long)local_20 + (local_28 - 1)) = 0;
      }
    }
  }
  *local_10 = local_20;
  local_30 = *local_18;
  putenv((char *)local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack313;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack313._1_8_ = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack313 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x6e69622f;
  *(undefined *)((long)&Stack313 + ~uVar3 + 4) = 0;
  local_28 = local_30;
  local_20 = local_30;
  putenv((char *)local_30);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_32_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_51_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40e2ba;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_51b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_51_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badGlobal != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen(pcParm1);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
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
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40ea93;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40eb1c;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = &local_138;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40ed56;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_63_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  if (badStatic != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_18 = strlen(pcParm1);
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
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
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_21_good(void)

{
  goodG2B1();
  goodG2B2();
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


void CWE427_Uncontrolled_Search_Path_Element__char_console_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_110;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_118;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar2 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = staticReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40f5b4;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_18_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_51_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40f72b;
  CWE427_Uncontrolled_Search_Path_Element__char_file_51b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_51_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_badSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_goodG2BSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 0xfa - sVar1) {
      pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      else {
        sVar1 = strlen(pcParm1);
        if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
          pcParm1[sVar1 - 1] = 0;
        }
      }
    }
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined local_48 [16];
  undefined8 *local_38;
  size_t local_18;
  undefined8 *local_10;
  
  local_148 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_140;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_148;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_38 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_console_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack320 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack320)[~uVar3 + 0xb] = 0;
  uStack320 = 0x40fbfa;
  local_10 = local_28;
  CWE427_Uncontrolled_Search_Path_Element__char_console_66b_goodG2BSink(local_38);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_66_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B1Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_goodG2B2Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  undefined8 *local_18;
  size_t local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_118;
  local_10 = strlen((char *)local_18);
  if (1 < 0xfa - local_10) {
    pcVar1 = fgets((char *)(local_10 + (long)local_18),0xfa - (int)local_10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_10 + (long)local_18) = 0;
    }
    else {
      local_10 = strlen((char *)local_18);
      if ((local_10 != 0) && (*(char *)((long)local_18 + (local_10 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_10 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x40fefc;
  CWE427_Uncontrolled_Search_Path_Element__char_console_63b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_63_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  bVar8 = 0;
  local_138 = 0x3d48544150;
  lVar5 = 0x1e;
  puVar7 = local_130;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_10 = &local_138;
  iVar2 = globalReturnsTrueOrFalse(puVar7,uParm2,(undefined2 *)((long)puVar7 + 2));
  if (iVar2 == 0) {
    uVar6 = 0xffffffffffffffff;
    puVar7 = local_10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar8 * -2 + 1);
    } while (cVar1 != 0);
    puVar4 = (undefined4 *)((long)local_10 + (~uVar6 - 1));
    *puVar4 = 0x6e69622f;
    *(undefined *)(puVar4 + 1) = 0;
  }
  else {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar2 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar3;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_12_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_file_45_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_45_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_file_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_file_45_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_file_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE427_Uncontrolled_Search_Path_Element__char_file_45_goodG2BData + (~uVar3 - 1))
       = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x410384;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_file_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_45_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_18_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41051f;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_18_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54d_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54e_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54d_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54e_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  bVar8 = 0;
  local_138 = 0x3d48544150;
  lVar5 = 0x1e;
  puVar7 = local_130;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_18 = &local_138;
  iVar2 = globalReturnsTrueOrFalse(puVar7,uParm2,(undefined2 *)((long)puVar7 + 2));
  if (iVar2 == 0) {
    uVar6 = 0xffffffffffffffff;
    puVar7 = local_18;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar8 * -2 + 1);
    } while (cVar1 != 0);
    puVar4 = (undefined4 *)((long)local_18 + (~uVar6 - 1));
    *puVar4 = 0x6e69622f;
    *(undefined *)(puVar4 + 1) = 0;
  }
  else {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar2 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar2 != -1) && (iVar2 = listen(local_1c,5), iVar2 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar3 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar3;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_12_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_1c,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    local_c = local_c + 1;
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  int local_c;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack288 = 0x410aba;
      putenv(local_18);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
    local_c = local_c + 1;
  } while( true );
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_17_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  bVar8 = 0;
  local_118 = 0x3d48544150;
  lVar5 = 0x1e;
  puVar7 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrueOrFalse(puVar7,uParm2,(undefined2 *)((long)puVar7 + 2));
  if (iVar2 == 0) {
    uVar6 = 0xffffffffffffffff;
    puVar7 = local_10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *(char *)puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar8 * -2 + 1);
    } while (cVar1 != 0);
    puVar4 = (undefined4 *)((long)local_10 + (~uVar6 - 1));
    *puVar4 = 0x6e69622f;
    *(undefined *)(puVar4 + 1) = 0;
  }
  else {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar3 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_12_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x410f56;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_44_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  if (GLOBAL_CONST_TRUE != 0) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x4111b6;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x4111f7;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41128a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x4113f9;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41143a;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x4114ce;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = &local_138;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)local_30);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
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
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x411a52;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE427_Uncontrolled_Search_Path_Element__char_environment_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_148;
  undefined8 local_140 [32];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_148 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_140;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_40 = &local_148;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
  local_30 = getenv("ADD");
  if (local_30 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_28),local_30,0xf9 - local_28);
  }
  *local_10 = local_20;
  local_38 = *local_18;
  putenv((char *)local_38);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack313;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack313._1_8_ = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack313 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x6e69622f;
  *(undefined *)((long)&Stack313 + ~uVar3 + 4) = 0;
  local_28 = local_30;
  local_20 = local_30;
  putenv((char *)local_30);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_32_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x411e04;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x411e45;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x411ed9;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_17_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_128;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    if (1 < 0xfa - local_20) {
      pcVar1 = fgets((char *)(local_20 + (long)local_18),0xfa - (int)local_20,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      else {
        local_20 = strlen((char *)local_18);
        if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
          *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
        }
      }
    }
    local_c = local_c + 1;
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  int local_c;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack288 = 0x4120a9;
      putenv(local_18);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
    local_c = local_c + 1;
  } while( true );
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_17_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_67b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_67b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x412301;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x412342;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x4123d5;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x412519;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4125a2;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_18 = &local_128;
  local_20 = strlen((char *)local_18);
  if (1 < 0xfa - local_20) {
    pcVar1 = fgets((char *)(local_20 + (long)local_18),0xfa - (int)local_20,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_20 + (long)local_18) = 0;
    }
    else {
      local_20 = strlen((char *)local_18);
      if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
      }
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41278b;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_44_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_14_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x4128e7;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x412928;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x4129bc;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_64_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_20 = &local_128;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,0xf9 - local_10);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_64b_badSink(&local_20);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x412aff;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_64b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_64_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_110;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_118;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar2 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_02_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x412efe;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x412f87;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53d_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53d_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x413276;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4132ff;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41353a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_01_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = &local_138;
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen((char *)local_30);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
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
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4137b6;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_63_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53d_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_53d_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004138f7) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x413942;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4139d4;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_67b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_67b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_console_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 0xfa - sVar1) {
    pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      pcParm1[sVar1] = 0;
    }
    else {
      sVar1 = strlen(pcParm1);
      if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
        pcParm1[sVar1 - 1] = 0;
      }
    }
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_console_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_10_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x413c9b;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x413cdc;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x413d6f;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x413ff8;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_18_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_51b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_51b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  undefined8 *local_20;
  FILE *local_18;
  size_t local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_20 = &local_128;
  local_10 = strlen((char *)local_20);
  if (1 < 0xfa - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),0xfa - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_64b_badSink(&local_20);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4141a2;
  CWE427_Uncontrolled_Search_Path_Element__char_file_64b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_64_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61b_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61b_goodG2BSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_61_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_01_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x414417;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_01_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_04_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if ((1 < 0xfa - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414565) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4145b0;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x414642;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_138;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_138;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  local_30 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x4147e3;
  local_18 = local_20;
  local_10 = local_20;
  putenv(local_20);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_31_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53d_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53d_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined8 *local_48;
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_148;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = 0;
    local_156 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_158,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_48 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x414aa4;
  local_10 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67b_goodG2BSink(local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_environment_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,0xf9 - sVar1);
    }
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_environment_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x414dc7;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x414e08;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x414e9c;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  undefined8 *local_28;
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_file_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41502d;
  local_10 = local_18;
  CWE427_Uncontrolled_Search_Path_Element__char_file_67b_goodG2BSink(local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_67_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_10;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_10 = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    local_c = local_c + 1;
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  int local_c;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack288 = 0x4152d7;
      putenv(local_18);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
    local_c = local_c + 1;
  } while( true );
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_17_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_file_22_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_file_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 0xfa - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 local_140 [32];
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  code *local_18;
  int local_c;
  
  local_18 = badSink;
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &local_148;
  local_24 = 0xffffffff;
  local_c = -1;
  local_30 = strlen((char *)local_20);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = 0;
    local_156 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_158,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_c = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_20 + local_30),0xf9 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_c != -1) {
    close(local_c);
  }
  (*local_18)(local_20);
  return;
}


void goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4156e8;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_44_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_09_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x415864;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x4158a5;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x415938;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_54d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_54d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined2 *)((long)puVar4 + 2));
  if (iVar1 != 0) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x415f3d;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x415fc6;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54c_goodG2BSink(uParm1);
  return;
}


void badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_badData = local_18;
  badSink();
  return;
}


void goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4162d5;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_45_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61b_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_18 = strlen(pcParm1);
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
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
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_06_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if ((1 < 0xfa - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004165f7) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x416642;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4166d5;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_53d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_53d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68b_badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68b_goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_68_goodG2BData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  if (globalTrue != 0) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x4169e9;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x416a2a;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x416abd;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x416d44;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_01_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53d_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_53d_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x416fa9;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_54_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_51_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x417142;
  CWE427_Uncontrolled_Search_Path_Element__char_console_51b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_51_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_63b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_63b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54d_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_54e_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_54d_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_54e_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_console_61b_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_console_61b_goodG2BSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_61_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_13_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x4173f8;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x417439;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x4174cd;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_54d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_28 = local_10;
  local_20 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x4176c4;
  local_18 = local_28;
  local_10 = local_28;
  putenv(local_28);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_34_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_13_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x417842;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x417883;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x417917;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  if (staticFive == 5) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x417b83;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x417bc4;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x417c58;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,0xf9 - sVar1);
    }
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418013;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41809c;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_138;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_130;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_138;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  local_28 = local_10;
  local_30 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x418200;
  local_18 = local_20;
  local_10 = local_20;
  putenv(local_20);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_31_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_63_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_20 = &local_128;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,0xf9 - local_10);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_63b_badSink(&local_20);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418339;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_63b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_63_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418475;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_18_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 0xfa - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_21_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_03_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4188a4;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41892d;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65b_badSink;
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [31];
  char *local_18;
  code *local_10;
  
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65b_goodG2BSink;
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418b7a;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65b_goodG2BSink
            (local_18,uParm2,local_18);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_65_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_54c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  undefined8 *local_20;
  FILE *local_18;
  size_t local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_20 = &local_128;
  local_10 = strlen((char *)local_20);
  if (1 < 0xfa - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),0xfa - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_63b_badSink(&local_20);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418d24;
  CWE427_Uncontrolled_Search_Path_Element__char_file_63b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_63_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418e60;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x418eea;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_console_45_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_45_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_console_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_console_45_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_console_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_console_45_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4190e1;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_console_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_45_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_65b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_65b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_01_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41928c;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_01_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_06_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004193fe) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x419449;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4194dc;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,0xf9 - sVar1);
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_42_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_63b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_63b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_68b_badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_environment_68_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_68b_goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_environment_68_goodG2BData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53c_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53d_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53c_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53d_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_15_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x419927;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x4199b1;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_22_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_file_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_file_22_badSource
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B1Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE427_Uncontrolled_Search_Path_Element__char_file_22_goodG2B2Source
                       (local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x419da4;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_16_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54d_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_54e_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54d_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_54e_goodG2BSink(uParm1);
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 0xfa - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,0xfa - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
  (pcParm1 + (~uVar2 - 1))[1] = 0;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_110;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_118;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined2 *)((long)puVar2 + 2));
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_42_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = inet_addr("127.0.0.1");
      local_146 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x41a1a5;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41a1e6;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41a27a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_64b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_64b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41a50f;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41a598;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_168;
  uint16_t local_166;
  in_addr_t local_164;
  undefined8 local_158;
  undefined8 local_150 [32];
  undefined8 *local_50;
  undefined8 *local_48;
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_50;
  local_18 = &local_50;
  local_158 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_150;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_50 = &local_158;
  local_24 = 0xffffffff;
  local_20 = local_50;
  local_30 = strlen((char *)local_50);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_168,0,0x10);
    local_168 = 2;
    local_164 = inet_addr("127.0.0.1");
    local_166 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_168,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,(void *)((long)local_20 + local_30),0xf9 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_10 = local_20;
  local_48 = *local_18;
  putenv((char *)local_48);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack313;
  undefined8 local_130 [32];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack313._1_8_ = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack313 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x6e69622f;
  *(undefined *)((long)&Stack313 + ~uVar3 + 4) = 0;
  local_28 = local_30;
  local_20 = local_30;
  putenv((char *)local_30);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_32_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x41a94e;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41a98f;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41aa22;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_52c_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_52c_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_67b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_52c_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_52c_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41ad89;
  CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_51_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_console_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41af22;
  CWE427_Uncontrolled_Search_Path_Element__char_console_54b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_54_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = &local_138;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),0xf9 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack288 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41b152;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64b_goodG2BSink(&local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_64_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_14_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x41b2d0;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41b311;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41b3a5;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_68_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_68_badData = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_68_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_environment_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_environment_68_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41b4fb;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_environment_68_goodG2BData;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_68b_goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_68_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_53c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_file_53c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined8 *local_38;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_130;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_138;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  local_38 = local_10;
  local_28 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x41b689;
  local_18 = local_28;
  local_10 = local_28;
  putenv(local_28);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_34_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b891) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41b8dc;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41b96e;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined2 *)((long)puVar3 + 2));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsFalse(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  putenv((char *)local_10);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_118;
  undefined8 local_110 [32];
  undefined8 *local_10;
  
  bVar7 = 0;
  local_118 = 0x3d48544150;
  lVar4 = 0x1e;
  puVar6 = local_110;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_10 = &local_118;
  iVar2 = globalReturnsTrue(puVar6,uParm2,(undefined2 *)((long)puVar6 + 2));
  if (iVar2 != 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    puVar3 = (undefined4 *)((long)local_10 + (~uVar5 - 1));
    *puVar3 = 0x6e69622f;
    *(undefined *)(puVar3 + 1) = 0;
  }
  putenv((char *)local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x41bc96;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41bcd7;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41bd6b;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_05_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 0xfa - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  putenv((char *)local_10);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x41becf;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41bf10;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41bfa3;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_41_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_41_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_41_badSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_41_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41c158;
  CWE427_Uncontrolled_Search_Path_Element__char_file_41_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_41_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  in_addr_t local_154;
  undefined8 local_148;
  undefined8 local_140 [32];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_148;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = inet_addr("127.0.0.1");
    local_156 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_158,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  local_40 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x41c3a9;
  local_18 = local_20;
  local_10 = local_20;
  putenv(local_20);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_31_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_67b_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_67b_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_63b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_63b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = 0;
    local_146 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  putenv((char *)local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c68d) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41c6d8;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41c76b;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41c8af;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_53b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_53_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_68_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_68_badData = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_file_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_file_68_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_file_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE427_Uncontrolled_Search_Path_Element__char_file_68_goodG2BData + (~uVar3 - 1))
       = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41ca38;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_file_68_goodG2BData;
  CWE427_Uncontrolled_Search_Path_Element__char_file_68b_goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_68_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined8 *local_38;
  undefined8 *local_28;
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_138;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  local_28 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x41cbcf;
  local_18 = local_28;
  local_10 = local_28;
  putenv(local_28);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_34_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_66b_badSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_66b_goodG2BSink(long lParm1)

{
  putenv(*(char **)(lParm1 + 0x10));
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53b_badSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_53c_badSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_53b_goodG2BSink(undefined8 uParm1)

{
  CWE427_Uncontrolled_Search_Path_Element__char_console_53c_goodG2BSink(uParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_158;
  uint16_t local_156;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined8 *local_48;
  undefined8 *local_40;
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_148 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_140;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_148;
  local_1c = 0xffffffff;
  local_c = -1;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_158,0,0x10);
    local_158 = 2;
    local_154 = 0;
    local_156 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_158,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_48 = local_18;
  local_40 = local_18;
  putenv((char *)local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [31];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x41ceec;
  local_18 = local_28;
  local_10 = local_28;
  putenv(local_28);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_34_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  undefined4 local_144;
  undefined8 local_138;
  undefined8 local_130 [31];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_18 = &local_138;
  if (GLOBAL_CONST_FIVE == 5) {
    local_1c = 0xffffffff;
    local_c = -1;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_148,0,0x10);
      local_148 = 2;
      local_144 = 0;
      local_146 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_148,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,(void *)((long)local_18 + local_28),0xf9 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  putenv((char *)local_18);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  else {
    uStack288 = 0x41d14e;
    printLine("Benign, fixed string",uParm2,(undefined2 *)((long)puVar4 + 2));
  }
  uStack288 = 0x41d18f;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
    (&uStack288)[~uVar3 + 0xb] = 0;
  }
  uStack288 = 0x41d223;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_04_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 local_110 [31];
  size_t local_18;
  undefined8 *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_118;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  putenv((char *)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d39d) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41d3e8;
  putenv(local_10);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41d47a;
  putenv(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [31];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),0xfa - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_20 = local_10;
  local_28 = local_10;
  putenv((char *)local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_20 = &uStack304 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack304)[~uVar3 + 0xb] = 0;
  uStack304 = 0x41d63d;
  local_18 = local_20;
  local_10 = local_20;
  putenv(local_20);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_console_31_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_environment_45_badData);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_45_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_128;
  undefined8 local_120 [32];
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_120;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_environment_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  putenv(CWE427_Uncontrolled_Search_Path_Element__char_environment_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_45_goodG2BData = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE427_Uncontrolled_Search_Path_Element__char_environment_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE427_Uncontrolled_Search_Path_Element__char_environment_45_goodG2BData + (~uVar3 - 1)) =
       0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41d7cb;
  local_10 = CWE427_Uncontrolled_Search_Path_Element__char_environment_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_45_good(void)

{
  goodG2B();
  return;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_badGlobal != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,0xf9 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x6e69622f;
    (pcParm1 + (~uVar2 - 1))[1] = 0;
  }
  return pcParm1;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54e_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_54e_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_66_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_148;
  undefined8 local_140 [31];
  undefined local_48 [16];
  undefined8 *local_38;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_148 = 0x3d48544150;
  lVar1 = 0x1e;
  puVar2 = local_140;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_10 = &local_148;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,0xf9 - local_18);
  }
  local_38 = local_10;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack320;
  undefined8 local_138;
  undefined8 local_130 [31];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_138 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_130;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_28 = &uStack320 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack320)[~uVar3 + 0xb] = 0;
  uStack320 = 0x41db42;
  local_10 = local_28;
  CWE427_Uncontrolled_Search_Path_Element__char_environment_66b_goodG2BSink(local_38);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_environment_66_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 local_120 [32];
  FILE *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_128 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar3 = local_120;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  local_10 = &local_128;
  local_18 = strlen((char *)local_10);
  if (1 < 0xfa - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),0xfa - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE427_Uncontrolled_Search_Path_Element__char_file_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41dcb9;
  CWE427_Uncontrolled_Search_Path_Element__char_file_53b_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_file_53_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_badSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_148;
  uint16_t local_146;
  in_addr_t local_144;
  undefined8 local_138;
  undefined8 local_130 [32];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_138 = 0x3d48544150;
  lVar3 = 0x1e;
  puVar4 = local_130;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &local_138;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_148,0,0x10);
    local_148 = 2;
    local_144 = inet_addr("127.0.0.1");
    local_146 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_148,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),0xf9 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_badSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_goodG2BSink(char *pcParm1)

{
  putenv(pcParm1);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 local_110 [32];
  char *local_10;
  
  local_118 = 0x3d48544150;
  lVar2 = 0x1e;
  puVar4 = local_110;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_10 = &uStack288 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x6e69622f;
  (&uStack288)[~uVar3 + 0xb] = 0;
  uStack288 = 0x41df1e;
  CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_goodG2BSink(local_10);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_connect_socket_41_good(void)

{
  goodG2B();
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64b_badSink(char **ppcParm1)

{
  putenv(*ppcParm1);
  return;
}


void CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_64b_goodG2BSink(char **ppcParm1)

{
  putenv(*ppcParm1);
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
  printf((char *)(double)fParm1,&DAT_00426819);
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
  printf(pcParm1,&DAT_00426836);
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
    __isoc99_sscanf(lVar1,&DAT_00426844,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0042684c,&local_14);
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

