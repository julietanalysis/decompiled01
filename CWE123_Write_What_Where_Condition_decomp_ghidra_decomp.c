
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0061bff8;
  if (PTR___gmon_start___0061bff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400bb0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0061c010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0061c018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0061c020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0061c028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0061c030)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0061c038)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0061c040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0061c048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0061c050)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0061c058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0061c060)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0061c068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0061c070)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0061c078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0061c080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0061c088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_0061c090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0061c098)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0061c0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0061c0a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0061c0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0061c0b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0061c0c0)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0061c0c8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0061c0d0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0061c0d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0061c0e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0061c0e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0061c0f0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_0061c0f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0061c100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0061c108)();
  return tVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
  in_addr_t iVar1;
  
  iVar1 = (*(code *)PTR_inet_addr_0061c110)();
  return iVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0061bff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400e17) */
/* WARNING: Removing unreachable block (ram,0x00400e21) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400e54) */
/* WARNING: Removing unreachable block (ram,0x00400e5e) */

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


/* WARNING: Removing unreachable block (ram,0x00400ea4) */
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
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_09_good();");
  CWE123_Write_What_Where_Condition__listen_socket_09_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_06_good();");
  CWE123_Write_What_Where_Condition__connect_socket_06_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_22_good();");
  CWE123_Write_What_Where_Condition__fgets_22_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_18_good();");
  CWE123_Write_What_Where_Condition__connect_socket_18_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_01_good();");
  CWE123_Write_What_Where_Condition__fgets_01_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_65_good();");
  CWE123_Write_What_Where_Condition__fgets_65_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_68_good();");
  CWE123_Write_What_Where_Condition__listen_socket_68_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_21_good();");
  CWE123_Write_What_Where_Condition__connect_socket_21_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_18_good();");
  CWE123_Write_What_Where_Condition__fgets_18_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_15_good();");
  CWE123_Write_What_Where_Condition__fgets_15_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_04_good();");
  CWE123_Write_What_Where_Condition__listen_socket_04_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_44_good();");
  CWE123_Write_What_Where_Condition__listen_socket_44_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_42_good();");
  CWE123_Write_What_Where_Condition__connect_socket_42_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_65_good();");
  CWE123_Write_What_Where_Condition__listen_socket_65_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_54_good();");
  CWE123_Write_What_Where_Condition__fgets_54_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_03_good();");
  CWE123_Write_What_Where_Condition__fgets_03_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_53_good();");
  CWE123_Write_What_Where_Condition__fgets_53_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_07_good();");
  CWE123_Write_What_Where_Condition__fgets_07_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_04_good();");
  CWE123_Write_What_Where_Condition__connect_socket_04_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_05_good();");
  CWE123_Write_What_Where_Condition__fgets_05_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_52_good();");
  CWE123_Write_What_Where_Condition__connect_socket_52_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_41_good();");
  CWE123_Write_What_Where_Condition__listen_socket_41_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_17_good();");
  CWE123_Write_What_Where_Condition__connect_socket_17_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_12_good();");
  CWE123_Write_What_Where_Condition__connect_socket_12_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_09_good();");
  CWE123_Write_What_Where_Condition__connect_socket_09_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_22_good();");
  CWE123_Write_What_Where_Condition__listen_socket_22_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_52_good();");
  CWE123_Write_What_Where_Condition__listen_socket_52_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_10_good();");
  CWE123_Write_What_Where_Condition__connect_socket_10_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_64_good();");
  CWE123_Write_What_Where_Condition__listen_socket_64_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_21_good();");
  CWE123_Write_What_Where_Condition__fgets_21_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_68_good();");
  CWE123_Write_What_Where_Condition__fgets_68_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_03_good();");
  CWE123_Write_What_Where_Condition__connect_socket_03_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_42_good();");
  CWE123_Write_What_Where_Condition__listen_socket_42_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_13_good();");
  CWE123_Write_What_Where_Condition__listen_socket_13_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_66_good();");
  CWE123_Write_What_Where_Condition__fgets_66_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_31_good();");
  CWE123_Write_What_Where_Condition__fgets_31_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_07_good();");
  CWE123_Write_What_Where_Condition__listen_socket_07_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_67_good();");
  CWE123_Write_What_Where_Condition__fgets_67_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_63_good();");
  CWE123_Write_What_Where_Condition__listen_socket_63_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_16_good();");
  CWE123_Write_What_Where_Condition__listen_socket_16_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_65_good();");
  CWE123_Write_What_Where_Condition__connect_socket_65_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_51_good();");
  CWE123_Write_What_Where_Condition__listen_socket_51_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_10_good();");
  CWE123_Write_What_Where_Condition__fgets_10_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_06_good();");
  CWE123_Write_What_Where_Condition__fgets_06_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_05_good();");
  CWE123_Write_What_Where_Condition__listen_socket_05_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_67_good();");
  CWE123_Write_What_Where_Condition__connect_socket_67_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_09_good();");
  CWE123_Write_What_Where_Condition__fgets_09_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_12_good();");
  CWE123_Write_What_Where_Condition__fgets_12_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_05_good();");
  CWE123_Write_What_Where_Condition__connect_socket_05_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_01_good();");
  CWE123_Write_What_Where_Condition__connect_socket_01_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_03_good();");
  CWE123_Write_What_Where_Condition__listen_socket_03_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_66_good();");
  CWE123_Write_What_Where_Condition__listen_socket_66_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_15_good();");
  CWE123_Write_What_Where_Condition__listen_socket_15_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_61_good();");
  CWE123_Write_What_Where_Condition__listen_socket_61_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_44_good();");
  CWE123_Write_What_Where_Condition__fgets_44_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_64_good();");
  CWE123_Write_What_Where_Condition__connect_socket_64_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_08_good();");
  CWE123_Write_What_Where_Condition__connect_socket_08_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_10_good();");
  CWE123_Write_What_Where_Condition__listen_socket_10_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_63_good();");
  CWE123_Write_What_Where_Condition__connect_socket_63_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_34_good();");
  CWE123_Write_What_Where_Condition__listen_socket_34_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_52_good();");
  CWE123_Write_What_Where_Condition__fgets_52_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_45_good();");
  CWE123_Write_What_Where_Condition__listen_socket_45_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_11_good();");
  CWE123_Write_What_Where_Condition__connect_socket_11_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_02_good();");
  CWE123_Write_What_Where_Condition__fgets_02_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_67_good();");
  CWE123_Write_What_Where_Condition__listen_socket_67_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_53_good();");
  CWE123_Write_What_Where_Condition__listen_socket_53_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_53_good();");
  CWE123_Write_What_Where_Condition__connect_socket_53_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_12_good();");
  CWE123_Write_What_Where_Condition__listen_socket_12_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_66_good();");
  CWE123_Write_What_Where_Condition__connect_socket_66_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_18_good();");
  CWE123_Write_What_Where_Condition__listen_socket_18_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_08_good();");
  CWE123_Write_What_Where_Condition__listen_socket_08_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_01_good();");
  CWE123_Write_What_Where_Condition__listen_socket_01_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_31_good();");
  CWE123_Write_What_Where_Condition__listen_socket_31_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_61_good();");
  CWE123_Write_What_Where_Condition__fgets_61_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_11_good();");
  CWE123_Write_What_Where_Condition__fgets_11_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_44_good();");
  CWE123_Write_What_Where_Condition__connect_socket_44_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_04_good();");
  CWE123_Write_What_Where_Condition__fgets_04_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_63_good();");
  CWE123_Write_What_Where_Condition__fgets_63_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_45_good();");
  CWE123_Write_What_Where_Condition__fgets_45_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_16_good();");
  CWE123_Write_What_Where_Condition__fgets_16_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_64_good();");
  CWE123_Write_What_Where_Condition__fgets_64_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_13_good();");
  CWE123_Write_What_Where_Condition__connect_socket_13_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_02_good();");
  CWE123_Write_What_Where_Condition__connect_socket_02_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_32_good();");
  CWE123_Write_What_Where_Condition__listen_socket_32_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_08_good();");
  CWE123_Write_What_Where_Condition__fgets_08_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_32_good();");
  CWE123_Write_What_Where_Condition__connect_socket_32_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_31_good();");
  CWE123_Write_What_Where_Condition__connect_socket_31_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_02_good();");
  CWE123_Write_What_Where_Condition__listen_socket_02_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_32_good();");
  CWE123_Write_What_Where_Condition__fgets_32_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_22_good();");
  CWE123_Write_What_Where_Condition__connect_socket_22_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_51_good();");
  CWE123_Write_What_Where_Condition__fgets_51_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_42_good();");
  CWE123_Write_What_Where_Condition__fgets_42_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_51_good();");
  CWE123_Write_What_Where_Condition__connect_socket_51_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_45_good();");
  CWE123_Write_What_Where_Condition__connect_socket_45_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_21_good();");
  CWE123_Write_What_Where_Condition__listen_socket_21_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_68_good();");
  CWE123_Write_What_Where_Condition__connect_socket_68_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_54_good();");
  CWE123_Write_What_Where_Condition__listen_socket_54_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_41_good();");
  CWE123_Write_What_Where_Condition__fgets_41_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_13_good();");
  CWE123_Write_What_Where_Condition__fgets_13_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_11_good();");
  CWE123_Write_What_Where_Condition__listen_socket_11_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_15_good();");
  CWE123_Write_What_Where_Condition__connect_socket_15_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_06_good();");
  CWE123_Write_What_Where_Condition__listen_socket_06_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_14_good();");
  CWE123_Write_What_Where_Condition__listen_socket_14_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_07_good();");
  CWE123_Write_What_Where_Condition__connect_socket_07_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_54_good();");
  CWE123_Write_What_Where_Condition__connect_socket_54_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_17_good();");
  CWE123_Write_What_Where_Condition__listen_socket_17_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_61_good();");
  CWE123_Write_What_Where_Condition__connect_socket_61_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_34_good();");
  CWE123_Write_What_Where_Condition__connect_socket_34_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_17_good();");
  CWE123_Write_What_Where_Condition__fgets_17_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_14_good();");
  CWE123_Write_What_Where_Condition__connect_socket_14_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_14_good();");
  CWE123_Write_What_Where_Condition__fgets_14_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_41_good();");
  CWE123_Write_What_Where_Condition__connect_socket_41_good();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_34_good();");
  CWE123_Write_What_Where_Condition__fgets_34_good();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_16_good();");
  CWE123_Write_What_Where_Condition__connect_socket_16_good();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_09_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_09_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_06_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_06_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_22_bad();");
  CWE123_Write_What_Where_Condition__fgets_22_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_18_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_18_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_01_bad();");
  CWE123_Write_What_Where_Condition__fgets_01_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_65_bad();");
  CWE123_Write_What_Where_Condition__fgets_65_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_68_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_68_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_21_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_21_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_18_bad();");
  CWE123_Write_What_Where_Condition__fgets_18_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_15_bad();");
  CWE123_Write_What_Where_Condition__fgets_15_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_04_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_04_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_44_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_44_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_42_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_42_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_65_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_65_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_54_bad();");
  CWE123_Write_What_Where_Condition__fgets_54_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_03_bad();");
  CWE123_Write_What_Where_Condition__fgets_03_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_53_bad();");
  CWE123_Write_What_Where_Condition__fgets_53_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_07_bad();");
  CWE123_Write_What_Where_Condition__fgets_07_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_04_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_04_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_05_bad();");
  CWE123_Write_What_Where_Condition__fgets_05_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_52_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_52_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_41_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_41_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_17_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_17_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_12_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_12_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_09_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_09_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_22_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_22_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_52_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_52_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_10_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_10_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_64_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_64_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_21_bad();");
  CWE123_Write_What_Where_Condition__fgets_21_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_68_bad();");
  CWE123_Write_What_Where_Condition__fgets_68_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_03_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_03_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_42_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_42_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_13_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_13_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_66_bad();");
  CWE123_Write_What_Where_Condition__fgets_66_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_31_bad();");
  CWE123_Write_What_Where_Condition__fgets_31_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_07_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_07_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_67_bad();");
  CWE123_Write_What_Where_Condition__fgets_67_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_63_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_63_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_16_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_16_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_65_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_65_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_51_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_51_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_10_bad();");
  CWE123_Write_What_Where_Condition__fgets_10_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_06_bad();");
  CWE123_Write_What_Where_Condition__fgets_06_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_05_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_05_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_67_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_67_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_09_bad();");
  CWE123_Write_What_Where_Condition__fgets_09_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_12_bad();");
  CWE123_Write_What_Where_Condition__fgets_12_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_05_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_05_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_01_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_01_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_03_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_03_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_66_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_66_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_15_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_15_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_61_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_61_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_44_bad();");
  CWE123_Write_What_Where_Condition__fgets_44_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_64_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_64_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_08_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_08_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_10_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_10_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_63_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_63_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_34_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_34_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_52_bad();");
  CWE123_Write_What_Where_Condition__fgets_52_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_45_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_45_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_11_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_11_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_02_bad();");
  CWE123_Write_What_Where_Condition__fgets_02_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_67_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_67_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_53_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_53_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_53_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_53_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_12_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_12_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_66_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_66_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_18_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_18_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_08_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_08_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_01_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_01_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_31_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_31_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_61_bad();");
  CWE123_Write_What_Where_Condition__fgets_61_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_11_bad();");
  CWE123_Write_What_Where_Condition__fgets_11_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_44_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_44_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_04_bad();");
  CWE123_Write_What_Where_Condition__fgets_04_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_63_bad();");
  CWE123_Write_What_Where_Condition__fgets_63_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_45_bad();");
  CWE123_Write_What_Where_Condition__fgets_45_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_16_bad();");
  CWE123_Write_What_Where_Condition__fgets_16_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_64_bad();");
  CWE123_Write_What_Where_Condition__fgets_64_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_13_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_13_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_02_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_02_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_32_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_32_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_08_bad();");
  CWE123_Write_What_Where_Condition__fgets_08_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_32_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_32_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_31_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_31_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_02_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_02_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_32_bad();");
  CWE123_Write_What_Where_Condition__fgets_32_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_22_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_22_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_51_bad();");
  CWE123_Write_What_Where_Condition__fgets_51_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_42_bad();");
  CWE123_Write_What_Where_Condition__fgets_42_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_51_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_51_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_45_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_45_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_21_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_21_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_68_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_68_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_54_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_54_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_41_bad();");
  CWE123_Write_What_Where_Condition__fgets_41_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_13_bad();");
  CWE123_Write_What_Where_Condition__fgets_13_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_11_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_11_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_15_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_15_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_06_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_06_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_14_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_14_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_07_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_07_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_54_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_54_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__listen_socket_17_bad();");
  CWE123_Write_What_Where_Condition__listen_socket_17_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_61_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_61_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_34_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_34_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_17_bad();");
  CWE123_Write_What_Where_Condition__fgets_17_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_14_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_14_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_14_bad();");
  CWE123_Write_What_Where_Condition__fgets_14_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_41_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_41_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__fgets_34_bad();");
  CWE123_Write_What_Where_Condition__fgets_34_bad();
  printLine("Calling CWE123_Write_What_Where_Condition__connect_socket_16_bad();");
  CWE123_Write_What_Where_Condition__connect_socket_16_bad();
  return 0;
}


void CWE123_Write_What_Where_Condition__listen_socket_67b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_67b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_16_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_16_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_14_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFive == 5) {
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_52c_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_52c_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE123_Write_What_Where_Condition__fgets_32_bad(void)

{
  char *pcVar1;
  undefined8 ****local_48;
  undefined8 ****local_40;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  undefined8 ***local_18;
  undefined8 ****local_10;
  
  local_10 = (undefined8 ****)&local_28;
  local_18 = &local_28;
  local_48 = &local_38;
  local_40 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_28 = local_48;
  local_20 = local_40;
  pcVar1 = fgets((char *)&local_48,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *(undefined8 *****)local_10 = local_48;
  *(undefined8 *****)(local_10 + 1) = local_40;
  linkedListPrev = (undefined8 ***)local_18[1];
  linkedListNext = (undefined8 ***)*local_18;
  *(undefined8 ****)linkedListPrev = linkedListNext;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long local_38 [6];
  
  linkedListPrev = local_38;
  linkedListNext = (long)local_38;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_32_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_01_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  globalReturnsTrue();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_68_badData._0_8_ = local_28;
  CWE123_Write_What_Where_Condition__listen_socket_68_badData._8_8_ = local_20;
  CWE123_Write_What_Where_Condition__listen_socket_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._0_8_ = &local_28;
  CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._8_8_ = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  local_18 = CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._0_8_;
  local_10 = CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._8_8_;
  CWE123_Write_What_Where_Condition__listen_socket_68b_goodG2BSink();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_68_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_48;
  local_20 = &local_48;
  local_48 = &local_28;
  local_40 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_58,0,0x10);
    local_58 = 2;
    local_54 = 0;
    local_56 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_58,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_38 [48];
  
  linkedListPrev = local_38;
  linkedListNext = local_38;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_34_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_51b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_51b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_66b_badSink(long lParm1)

{
  linkedListPrev = *(long **)(lParm1 + 0x28);
  linkedListNext = *(long *)(lParm1 + 0x20);
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_66b_goodG2BSink(long lParm1)

{
  linkedListPrev = *(long **)(lParm1 + 0x28);
  linkedListNext = *(long *)(lParm1 + 0x20);
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_67b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_67b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_54b_badSink(local_18,local_10,local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_54b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_52b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_52c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_52b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_52c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


undefined  [16]
CWE123_Write_What_Where_Condition__connect_socket_61b_badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  undefined4 local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_38 = uParm1;
  local_30 = uParm2;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_38,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return CONCAT88(local_30,local_38);
}


undefined  [16]
CWE123_Write_What_Where_Condition__connect_socket_61b_goodG2BSource
          (undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void CWE123_Write_What_Where_Condition__connect_socket_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (globalTrue != 0) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_64_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_64b_goodG2BSink(&local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_64_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_67_bad(void)

{
  char *pcVar1;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_38;
  local_10 = &local_38;
  local_38 = &local_18;
  local_30 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_28 = local_18;
  local_20 = local_10;
  CWE123_Write_What_Where_Condition__fgets_67b_badSink(local_18,local_10,local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_18;
  local_30 = &local_18;
  local_18 = local_28;
  local_10 = local_20;
  CWE123_Write_What_Where_Condition__fgets_67b_goodG2BSink(local_28,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_67_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54c_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_54d_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54c_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_54d_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_64b_badSink(&local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_64b_goodG2BSink(&local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_64_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_04_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 != (char *)0x0) {
    linkedListPrev = local_10;
    linkedListNext = local_18;
    *(undefined8 ****)local_10 = local_18;
    *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
    return;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0040405d) */

void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53d_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53d_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53d_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53d_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_65b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_65b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_51b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_51b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_51_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54c_badSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_54d_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54c_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_54d_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_18_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_65b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_65b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54e_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54e_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_98;
  uint16_t local_96;
  undefined4 local_94;
  undefined8 ***local_88;
  undefined8 ***local_80;
  undefined local_78 [32];
  undefined8 ***local_58;
  undefined8 ***local_50;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_88;
  local_20 = &local_88;
  local_88 = &local_28;
  local_80 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_98,0,0x10);
    local_98 = 2;
    local_94 = 0;
    local_96 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_98,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_58 = local_28;
  local_50 = local_20;
  CWE123_Write_What_Where_Condition__listen_socket_66b_badSink(local_78);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined local_68 [32];
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_48 = &local_78;
  local_40 = &local_78;
  local_78 = &local_18;
  local_70 = &local_18;
  local_18 = local_48;
  local_10 = local_40;
  CWE123_Write_What_Where_Condition__listen_socket_66b_goodG2BSink(local_68);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_66_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_61_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = CWE123_Write_What_Where_Condition__connect_socket_61b_badSource
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = CWE123_Write_What_Where_Condition__connect_socket_61b_goodG2BSource
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_61_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53c_badSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_53d_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53c_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_53d_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_31_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__connect_socket_45_badData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__connect_socket_45_badData._0_8_;
  *CWE123_Write_What_Where_Condition__connect_socket_45_badData._8_8_ =
       CWE123_Write_What_Where_Condition__connect_socket_45_badData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_45_badData._0_8_ = local_28;
  CWE123_Write_What_Where_Condition__connect_socket_45_badData._8_8_ = local_20;
  badSink();
  return;
}


void goodG2BSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._0_8_;
  *CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._8_8_ =
       CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._0_8_ = &local_28;
  CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._8_8_ = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  local_18 = CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._0_8_;
  local_10 = CWE123_Write_What_Where_Condition__connect_socket_45_goodG2BData._8_8_;
  goodG2BSink();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_45_good(void)

{
  goodG2B();
  return;
}


undefined  [16]
CWE123_Write_What_Where_Condition__fgets_22_badSource(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = uParm1;
  local_10 = uParm2;
  if (CWE123_Write_What_Where_Condition__fgets_22_badGlobal != 0) {
    local_18 = uParm1;
    local_10 = uParm2;
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return CONCAT88(local_10,local_18);
}


undefined  [16]
CWE123_Write_What_Where_Condition__fgets_22_goodG2B1Source(undefined8 uParm1,undefined8 uParm2)

{
  if (CWE123_Write_What_Where_Condition__fgets_22_goodG2B1Global != 0) {
    printLine("Benign, fixed string");
  }
  return CONCAT88(uParm2,uParm1);
}


undefined  [16]
CWE123_Write_What_Where_Condition__fgets_22_goodG2B2Source(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void badSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__fgets_45_badData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__fgets_45_badData._0_8_;
  *CWE123_Write_What_Where_Condition__fgets_45_badData._8_8_ =
       CWE123_Write_What_Where_Condition__fgets_45_badData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_45_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_45_badData._0_8_ = local_18;
  CWE123_Write_What_Where_Condition__fgets_45_badData._8_8_ = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._0_8_;
  *CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._8_8_ =
       CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._0_8_ = &local_28;
  CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._8_8_ = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  local_18 = CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._0_8_;
  local_10 = CWE123_Write_What_Where_Condition__fgets_45_goodG2BData._8_8_;
  goodG2BSink();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_45_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  globalReturnsTrueOrFalse();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_12_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (staticFive == 5) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_65_bad(void)

{
  char *pcVar1;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = CWE123_Write_What_Where_Condition__fgets_65b_badSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  pcVar1 = fgets((char *)&local_28,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  (*local_10)(local_28,local_20,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = CWE123_Write_What_Where_Condition__fgets_65b_goodG2BSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  CWE123_Write_What_Where_Condition__fgets_65b_goodG2BSink(local_28,local_20,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_65_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_15_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,&local_28,0x10,0);
        local_18 = (undefined4)sVar2;
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
    local_c = local_c + 1;
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_38 [44];
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  linkedListPrev = local_38;
  linkedListNext = local_38;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_17_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__listen_socket_45_badData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__listen_socket_45_badData._0_8_;
  *CWE123_Write_What_Where_Condition__listen_socket_45_badData._8_8_ =
       CWE123_Write_What_Where_Condition__listen_socket_45_badData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_45_badData._0_8_ = local_28;
  CWE123_Write_What_Where_Condition__listen_socket_45_badData._8_8_ = local_20;
  badSink();
  return;
}


void goodG2BSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._0_8_;
  *CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._8_8_ =
       CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._0_8_ = &local_28;
  CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._8_8_ = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  local_18 = CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._0_8_;
  local_10 = CWE123_Write_What_Where_Condition__listen_socket_45_goodG2BData._8_8_;
  goodG2BSink();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_45_good(void)

{
  goodG2B();
  return;
}


undefined  [16] badSource(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = uParm1;
  local_10 = uParm2;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return CONCAT88(local_10,local_18);
}


void CWE123_Write_What_Where_Condition__fgets_42_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void goodG2B(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = goodG2BSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_42_good(void)

{
  goodG2B();
  return;
}


void badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  undefined8 ****local_48;
  undefined8 ****local_40;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined4 local_20;
  int local_1c;
  code *local_18;
  int local_c;
  
  local_18 = badSink;
  local_38 = &local_48;
  local_30 = &local_48;
  local_48 = &local_38;
  local_40 = &local_38;
  local_1c = 0xffffffff;
  local_c = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_58,0,0x10);
    local_58 = 2;
    local_54 = 0;
    local_56 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_58,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_38,0x10,0);
      local_20 = (undefined4)sVar2;
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  (*local_18)(local_38,local_30,local_30,local_38);
  return;
}


void goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  goodG2BSink(local_28,local_20,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_44_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  globalReturnsTrue();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_54c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_54c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_51b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_51b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_64b_badSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_64b_goodG2BSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_52b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_52b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_52_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_16_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54c_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_54d_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54c_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_54d_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


undefined  [16]
CWE123_Write_What_Where_Condition__listen_socket_61b_badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_38 = uParm1;
  local_30 = uParm2;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_38,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return CONCAT88(local_30,local_38);
}


undefined  [16]
CWE123_Write_What_Where_Condition__listen_socket_61b_goodG2BSource
          (undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void CWE123_Write_What_Where_Condition__listen_socket_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (globalTrue != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54d_badSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_54e_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54d_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_54e_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (globalFive == 5) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE123_Write_What_Where_Condition__connect_socket_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_68;
  uint16_t local_66;
  in_addr_t local_64;
  undefined8 ****local_58;
  undefined8 ****local_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined4 local_20;
  int local_1c;
  undefined8 ***local_18;
  undefined8 ****local_10;
  
  local_10 = (undefined8 ****)&local_38;
  local_18 = &local_38;
  local_58 = &local_48;
  local_50 = &local_48;
  local_48 = &local_38;
  local_40 = &local_38;
  local_1c = 0xffffffff;
  local_38 = local_58;
  local_30 = local_50;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_68,0,0x10);
    local_68 = 2;
    local_64 = inet_addr("127.0.0.1");
    local_66 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_68,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,&local_58,0x10,0);
      local_20 = (undefined4)sVar2;
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  *(undefined8 *****)local_10 = local_58;
  *(undefined8 *****)(local_10 + 1) = local_50;
  linkedListPrev = (undefined8 ***)local_18[1];
  linkedListNext = (undefined8 ***)*local_18;
  *(undefined8 ****)linkedListPrev = linkedListNext;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long local_38 [6];
  
  linkedListPrev = local_38;
  linkedListNext = (long)local_38;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_32_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_05_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticTrue != 0) {
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_41_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_41_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_41_badSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_41_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_41_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_41_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_53c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_53c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_22_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_22_badGlobal = 1;
  auVar1 = CWE123_Write_What_Where_Condition__fgets_22_badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_22_goodG2B1Global = 0;
  auVar1 = CWE123_Write_What_Where_Condition__fgets_22_goodG2B1Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B2(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_22_goodG2B2Global = 1;
  auVar1 = CWE123_Write_What_Where_Condition__fgets_22_goodG2B2Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_01_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_13_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FIVE == 5) {
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_52c_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_52c_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53d_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53d_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_63b_badSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_63b_goodG2BSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_34_bad(void)

{
  char *pcVar1;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_38;
  local_10 = &local_38;
  local_38 = &local_18;
  local_30 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_38 [48];
  
  linkedListPrev = local_38;
  linkedListNext = local_38;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_34_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_51b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_51b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_51_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_68_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_68_badData._0_8_ = local_18;
  CWE123_Write_What_Where_Condition__fgets_68_badData._8_8_ = local_10;
  CWE123_Write_What_Where_Condition__fgets_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._0_8_ = &local_28;
  CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._8_8_ = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  local_18 = CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._0_8_;
  local_10 = CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._8_8_;
  CWE123_Write_What_Where_Condition__fgets_68b_goodG2BSink();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_68_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_53b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_53b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_66b_badSink(long lParm1)

{
  linkedListPrev = *(long **)(lParm1 + 0x28);
  linkedListNext = *(long *)(lParm1 + 0x20);
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_66b_goodG2BSink(long lParm1)

{
  linkedListPrev = *(long **)(lParm1 + 0x28);
  linkedListNext = *(long *)(lParm1 + 0x20);
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408ab1) */

void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_31_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54d_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_54e_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54d_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_54e_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_68b_badSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__connect_socket_68_badData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__connect_socket_68_badData._0_8_;
  *CWE123_Write_What_Where_Condition__connect_socket_68_badData._8_8_ =
       CWE123_Write_What_Where_Condition__connect_socket_68_badData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_68b_goodG2BSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._0_8_;
  *CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._8_8_ =
       CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_54b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_54b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_06_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 != (char *)0x0) {
    linkedListPrev = local_10;
    linkedListNext = local_18;
    *(undefined8 ****)local_10 = local_18;
    *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
    return;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004090e4) */

void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_65b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_65b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409403) */

void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined  [16] badSource(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = uParm1;
  local_10 = uParm2;
  if (badStatic != 0) {
    local_18 = uParm1;
    local_10 = uParm2;
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return CONCAT88(local_10,local_18);
}


void CWE123_Write_What_Where_Condition__fgets_21_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  badStatic = 1;
  auVar1 = badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2B1Source(undefined8 uParm1,undefined8 uParm2)

{
  if (goodG2B1Static != 0) {
    printLine("Benign, fixed string");
  }
  return CONCAT88(uParm2,uParm1);
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  goodG2B1Static = 0;
  auVar1 = goodG2B1Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2B2Source(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void goodG2B2(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  goodG2B2Static = 1;
  auVar1 = goodG2B2Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_03_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_63_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_63b_goodG2BSink(&local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_63_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_58;
  uint16_t local_56;
  in_addr_t local_54;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_48;
  local_20 = &local_48;
  local_48 = &local_28;
  local_40 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_58,0,0x10);
    local_58 = 2;
    local_54 = inet_addr("127.0.0.1");
    local_56 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_58,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_38 = local_28;
  local_30 = local_20;
  CWE123_Write_What_Where_Condition__connect_socket_67b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_18;
  local_30 = &local_18;
  local_18 = local_28;
  local_10 = local_20;
  CWE123_Write_What_Where_Condition__connect_socket_67b_goodG2BSink(local_28,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_67_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_18_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_18_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_67b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_67b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_66_bad(void)

{
  char *pcVar1;
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined local_68 [32];
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_78;
  local_10 = &local_78;
  local_78 = &local_18;
  local_70 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_48 = local_18;
  local_40 = local_10;
  CWE123_Write_What_Where_Condition__fgets_66b_badSink(local_68);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined local_68 [32];
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_48 = &local_78;
  local_40 = &local_78;
  local_78 = &local_18;
  local_70 = &local_18;
  local_18 = local_48;
  local_10 = local_40;
  CWE123_Write_What_Where_Condition__fgets_66b_goodG2BSink(local_68);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_66_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54e_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54e_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  undefined4 local_18;
  int local_14;
  code *local_10;
  
  local_10 = CWE123_Write_What_Where_Condition__connect_socket_65b_badSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_14 = 0xffffffff;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,&local_28,0x10,0);
      local_18 = (undefined4)sVar2;
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  (*local_10)(local_28,local_20,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = CWE123_Write_What_Where_Condition__connect_socket_65b_goodG2BSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  CWE123_Write_What_Where_Condition__connect_socket_65b_goodG2BSink
            (local_28,local_20,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_65_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_54c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_54b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_54c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    pcVar2 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  globalReturnsTrueOrFalse();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_12_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_16_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_52b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_52c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_52b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_52c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_64b_badSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_64b_goodG2BSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  undefined4 local_18;
  int local_14;
  code *local_10;
  
  local_10 = badSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_14 = 0xffffffff;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,&local_28,0x10,0);
      local_18 = (undefined4)sVar2;
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  (*local_10)(local_28,local_20,local_20,local_28);
  return;
}


void goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  goodG2BSink(local_28,local_20,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_44_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined  [16] badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  undefined4 local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_38 = uParm1;
  local_30 = uParm2;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_38,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return CONCAT88(local_30,local_38);
}


void CWE123_Write_What_Where_Condition__connect_socket_42_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void goodG2B(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = goodG2BSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_42_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (globalFive == 5) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_64b_badSink(&local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_64b_goodG2BSink(&local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_64_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE123_Write_What_Where_Condition__listen_socket_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  undefined8 ****local_58;
  undefined8 ****local_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined4 local_28;
  int local_24;
  undefined8 ***local_20;
  undefined8 ****local_18;
  int local_c;
  
  local_18 = (undefined8 ****)&local_38;
  local_20 = &local_38;
  local_58 = &local_48;
  local_50 = &local_48;
  local_48 = &local_38;
  local_40 = &local_38;
  local_24 = 0xffffffff;
  local_c = -1;
  local_38 = local_58;
  local_30 = local_50;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_68,0,0x10);
    local_68 = 2;
    local_64 = 0;
    local_66 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_68,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_c = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_58,0x10,0);
      local_28 = (undefined4)sVar2;
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_c != -1) {
    close(local_c);
  }
  *(undefined8 *****)local_18 = local_58;
  *(undefined8 *****)(local_18 + 1) = local_50;
  linkedListPrev = (undefined8 ***)local_20[1];
  linkedListNext = (undefined8 ***)*local_20;
  *(undefined8 ****)linkedListPrev = linkedListNext;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long local_38 [6];
  
  linkedListPrev = local_38;
  linkedListNext = (long)local_38;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_32_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_22_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_22_badGlobal = 1;
  auVar1 = CWE123_Write_What_Where_Condition__connect_socket_22_badSource
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B1Global = 0;
  auVar1 = CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B1Source
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B2(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B2Global = 1;
  auVar1 = CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B2Source
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_17_bad(void)

{
  char *pcVar1;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      linkedListPrev = local_20;
      linkedListNext = local_28;
      *(undefined8 ****)local_20 = local_28;
      *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
      return;
    }
    pcVar1 = fgets((char *)&local_28,0x10,stdin);
    if (pcVar1 == (char *)0x0) break;
    local_c = local_c + 1;
  }
  printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  undefined local_38 [44];
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  linkedListPrev = local_38;
  linkedListNext = local_38;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_17_good(void)

{
  goodG2B();
  return;
}


void badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_44_bad(void)

{
  char *pcVar1;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = badSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  pcVar1 = fgets((char *)&local_28,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  (*local_10)(local_28,local_20,local_20,local_28);
  return;
}


void goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  goodG2BSink(local_28,local_20,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_44_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_11_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    pcVar2 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  globalReturnsTrue();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_02_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_52_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_52b_badSink(local_18,local_10,local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_52b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_52_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_63b_badSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_63b_goodG2BSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_51b_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_51b_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_53b_badSink(local_18,local_10,local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_53b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_53_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (staticTrue != 0) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_41_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_41_badSink(local_28,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_41_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_41_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_41_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_53c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_53c_goodG2BSink(uParm1,uParm2,uParm1);
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


void CWE123_Write_What_Where_Condition__connect_socket_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  staticReturnsTrue();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined  [16]
CWE123_Write_What_Where_Condition__fgets_61b_badSource(undefined8 uParm1,undefined8 uParm2)

{
  char *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = uParm1;
  local_10 = uParm2;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return CONCAT88(local_10,local_18);
}


undefined  [16]
CWE123_Write_What_Where_Condition__fgets_61b_goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void CWE123_Write_What_Where_Condition__fgets_10_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalTrue != 0) {
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cb5d) */

void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_52c_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_52c_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_68b_badSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__fgets_68_badData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__fgets_68_badData._0_8_;
  *CWE123_Write_What_Where_Condition__fgets_68_badData._8_8_ =
       CWE123_Write_What_Where_Condition__fgets_68_badData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_68b_goodG2BSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._0_8_;
  *CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._8_8_ =
       CWE123_Write_What_Where_Condition__fgets_68_goodG2BData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_63b_badSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_63b_goodG2BSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_61_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = CWE123_Write_What_Where_Condition__listen_socket_61b_badSource
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = CWE123_Write_What_Where_Condition__listen_socket_61b_goodG2BSource
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_61_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_68_badData._0_8_ = local_28;
  CWE123_Write_What_Where_Condition__connect_socket_68_badData._8_8_ = local_20;
  CWE123_Write_What_Where_Condition__connect_socket_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._0_8_ = &local_28;
  CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._8_8_ = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  local_18 = CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._0_8_;
  local_10 = CWE123_Write_What_Where_Condition__connect_socket_68_goodG2BData._8_8_;
  CWE123_Write_What_Where_Condition__connect_socket_68b_goodG2BSink();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_68_good(void)

{
  goodG2B();
  return;
}


undefined  [16] badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_38 = uParm1;
  local_30 = uParm2;
  if (badStatic != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_38 = uParm1;
    local_30 = uParm2;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_38,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return CONCAT88(local_30,local_38);
}


void CWE123_Write_What_Where_Condition__listen_socket_21_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  badStatic = 1;
  auVar1 = badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2B1Source(undefined8 uParm1,undefined8 uParm2)

{
  if (goodG2B1Static != 0) {
    printLine("Benign, fixed string");
  }
  return CONCAT88(uParm2,uParm1);
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  goodG2B1Static = 0;
  auVar1 = goodG2B1Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2B2Source(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void goodG2B2(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  goodG2B2Static = 1;
  auVar1 = goodG2B2Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_58;
  uint16_t local_56;
  in_addr_t local_54;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_48;
  local_20 = &local_48;
  local_48 = &local_28;
  local_40 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_58,0,0x10);
    local_58 = 2;
    local_54 = inet_addr("127.0.0.1");
    local_56 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_58,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_38 [48];
  
  linkedListPrev = local_38;
  linkedListNext = local_38;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_34_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_01_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_01_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_66b_badSink(long lParm1)

{
  linkedListPrev = *(long **)(lParm1 + 0x28);
  linkedListNext = *(long *)(lParm1 + 0x20);
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_66b_goodG2BSink(long lParm1)

{
  linkedListPrev = *(long **)(lParm1 + 0x28);
  linkedListNext = *(long *)(lParm1 + 0x20);
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_48;
  local_20 = &local_48;
  local_48 = &local_28;
  local_40 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_58,0,0x10);
    local_58 = 2;
    local_54 = 0;
    local_56 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_58,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_38 = local_28;
  local_30 = local_20;
  CWE123_Write_What_Where_Condition__listen_socket_67b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_18;
  local_30 = &local_18;
  local_18 = local_28;
  local_10 = local_20;
  CWE123_Write_What_Where_Condition__listen_socket_67b_goodG2BSink(local_28,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_67_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_51_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  CWE123_Write_What_Where_Condition__fgets_51b_badSink(local_18,local_10,local_18);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__fgets_51b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_51_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53c_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_53d_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53c_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_53d_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


undefined  [16]
CWE123_Write_What_Where_Condition__connect_socket_22_badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  undefined4 local_10;
  int local_c;
  
  local_38 = uParm1;
  local_30 = uParm2;
  if (CWE123_Write_What_Where_Condition__connect_socket_22_badGlobal != 0) {
    local_c = 0xffffffff;
    local_38 = uParm1;
    local_30 = uParm2;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_38,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return CONCAT88(local_30,local_38);
}


undefined  [16]
CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B1Source
          (undefined8 uParm1,undefined8 uParm2)

{
  if (CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B1Global != 0) {
    printLine("Benign, fixed string");
  }
  return CONCAT88(uParm2,uParm1);
}


undefined  [16]
CWE123_Write_What_Where_Condition__connect_socket_22_goodG2B2Source
          (undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


undefined  [16]
CWE123_Write_What_Where_Condition__listen_socket_22_badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_38 = uParm1;
  local_30 = uParm2;
  if (CWE123_Write_What_Where_Condition__listen_socket_22_badGlobal != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_38 = uParm1;
    local_30 = uParm2;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_38,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return CONCAT88(local_30,local_38);
}


undefined  [16]
CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B1Source
          (undefined8 uParm1,undefined8 uParm2)

{
  if (CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B1Global != 0) {
    printLine("Benign, fixed string");
  }
  return CONCAT88(uParm2,uParm1);
}


undefined  [16]
CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B2Source
          (undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void CWE123_Write_What_Where_Condition__fgets_61_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = CWE123_Write_What_Where_Condition__fgets_61b_badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = CWE123_Write_What_Where_Condition__fgets_61b_goodG2BSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_61_good(void)

{
  goodG2B();
  return;
}


undefined  [16] badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  undefined4 local_10;
  int local_c;
  
  local_38 = uParm1;
  local_30 = uParm2;
  if (badStatic != 0) {
    local_c = 0xffffffff;
    local_38 = uParm1;
    local_30 = uParm2;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_38,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return CONCAT88(local_30,local_38);
}


void CWE123_Write_What_Where_Condition__connect_socket_21_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  badStatic = 1;
  auVar1 = badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2B1Source(undefined8 uParm1,undefined8 uParm2)

{
  if (goodG2B1Static != 0) {
    printLine("Benign, fixed string");
  }
  return CONCAT88(uParm2,uParm1);
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  goodG2B1Static = 0;
  auVar1 = goodG2B1Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2B2Source(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void goodG2B2(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  goodG2B2Static = 1;
  auVar1 = goodG2B2Source(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_63b_badSink(&local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_63b_goodG2BSink(&local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_63_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_52b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_52b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_52_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  undefined8 ****local_48;
  undefined8 ****local_40;
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined4 local_20;
  int local_1c;
  code *local_18;
  int local_c;
  
  local_18 = CWE123_Write_What_Where_Condition__listen_socket_65b_badSink;
  local_38 = &local_48;
  local_30 = &local_48;
  local_48 = &local_38;
  local_40 = &local_38;
  local_1c = 0xffffffff;
  local_c = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_58,0,0x10);
    local_58 = 2;
    local_54 = 0;
    local_56 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_58,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_c = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_38,0x10,0);
      local_20 = (undefined4)sVar2;
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_c != -1) {
    close(local_c);
  }
  (*local_18)(local_38,local_30,local_30,local_38);
  return;
}


void goodG2B(void)

{
  undefined8 ****local_38;
  undefined8 ****local_30;
  undefined8 ****local_28;
  undefined8 ****local_20;
  code *local_10;
  
  local_10 = CWE123_Write_What_Where_Condition__listen_socket_65b_goodG2BSink;
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  CWE123_Write_What_Where_Condition__listen_socket_65b_goodG2BSink
            (local_28,local_20,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_65_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_52b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_52c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_52b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_52c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_07_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFive == 5) {
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_18_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54e_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54e_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_09_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_TRUE != 0) {
    pcVar1 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined  [16] badSource(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 local_38;
  undefined8 local_30;
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_38 = uParm1;
  local_30 = uParm2;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_38,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return CONCAT88(local_30,local_38);
}


void CWE123_Write_What_Where_Condition__listen_socket_42_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = badSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


undefined  [16] goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  return CONCAT88(uParm2,uParm1);
}


void goodG2B(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  auVar1 = goodG2BSource(local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_42_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53c_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_53d_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_53c_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_53d_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f6d7) */

void goodG2B1(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void goodG2B2(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_53b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_53b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_22_bad(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_22_badGlobal = 1;
  auVar1 = CWE123_Write_What_Where_Condition__listen_socket_22_badSource(local_18,local_10,local_18)
  ;
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B1(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B1Global = 0;
  auVar1 = CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B1Source
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void goodG2B2(void)

{
  undefined auVar1 [16];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B2Global = 1;
  auVar1 = CWE123_Write_What_Where_Condition__listen_socket_22_goodG2B2Source
                     (local_18,local_10,local_18);
  *SUB168(auVar1 >> 0x40,0) = SUB168(auVar1,0);
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  *(undefined8 *)(linkedListNext + 8) = linkedListPrev;
  linkedListPrev = SUB168(auVar1 >> 0x40,0);
  linkedListNext = SUB168(auVar1,0);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_22_good(void)

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


void CWE123_Write_What_Where_Condition__listen_socket_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_c = -1;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
         (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  staticReturnsTrue();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_98;
  uint16_t local_96;
  in_addr_t local_94;
  undefined8 ***local_88;
  undefined8 ***local_80;
  undefined local_78 [32];
  undefined8 ***local_58;
  undefined8 ***local_50;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_88;
  local_20 = &local_88;
  local_88 = &local_28;
  local_80 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_98,0,0x10);
    local_98 = 2;
    local_94 = inet_addr("127.0.0.1");
    local_96 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  local_58 = local_28;
  local_50 = local_20;
  CWE123_Write_What_Where_Condition__connect_socket_66b_badSink(local_78);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined local_68 [32];
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_48 = &local_78;
  local_40 = &local_78;
  local_78 = &local_18;
  local_70 = &local_18;
  local_18 = local_48;
  local_10 = local_40;
  CWE123_Write_What_Where_Condition__connect_socket_66b_goodG2BSink(local_68);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_66_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,&local_28,0x10,0);
        local_10 = (undefined4)sVar2;
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  globalReturnsTrueOrFalse();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_12_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_68b_badSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__listen_socket_68_badData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__listen_socket_68_badData._0_8_;
  *CWE123_Write_What_Where_Condition__listen_socket_68_badData._8_8_ =
       CWE123_Write_What_Where_Condition__listen_socket_68_badData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_68b_goodG2BSink(void)

{
  linkedListPrev = CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._8_8_;
  linkedListNext = CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._0_8_;
  *CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._8_8_ =
       CWE123_Write_What_Where_Condition__listen_socket_68_goodG2BData._0_8_;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_63b_badSink(&local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_63b_goodG2BSink(&local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_63_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54b_badSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_54c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_54b_goodG2BSink(undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__fgets_54c_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__fgets_64b_badSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_64b_goodG2BSink(long *plParm1)

{
  linkedListPrev = (long *)plParm1[1];
  linkedListNext = *plParm1;
  *linkedListPrev = linkedListNext;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = inet_addr("127.0.0.1");
    local_46 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_10 = (undefined4)sVar2;
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__connect_socket_54b_badSink(local_28,local_20,local_28);
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__connect_socket_54b_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__fgets_31_bad(void)

{
  char *pcVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  pcVar1 = fgets((char *)&local_18,0x10,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_28 [32];
  
  linkedListPrev = local_28;
  linkedListNext = local_28;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_31_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54d_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_54e_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_54d_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__connect_socket_54e_goodG2BSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_41_badSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,&local_28,0x10,0);
      local_14 = (undefined4)sVar2;
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE123_Write_What_Where_Condition__listen_socket_41_badSink(local_28,local_20,local_28);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_41_goodG2BSink(long lParm1,long *plParm2)

{
  linkedListPrev = plParm2;
  linkedListNext = lParm1;
  *plParm2 = lParm1;
  *(long **)(linkedListNext + 8) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  CWE123_Write_What_Where_Condition__listen_socket_41_goodG2BSink(local_18,local_10,local_18);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_41_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_48;
  uint16_t local_46;
  in_addr_t local_44;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_28 = &local_38;
  local_20 = &local_38;
  local_38 = &local_28;
  local_30 = &local_28;
  local_c = 0;
  while (local_c < 1) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = inet_addr("127.0.0.1");
      local_46 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_48,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,&local_28,0x10,0);
        local_14 = (undefined4)sVar2;
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
    local_c = local_c + 1;
  }
  linkedListPrev = local_20;
  linkedListNext = local_28;
  *(undefined8 ****)local_20 = local_28;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B(void)

{
  undefined local_38 [44];
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  linkedListPrev = local_38;
  linkedListNext = local_38;
  return;
}


void CWE123_Write_What_Where_Condition__connect_socket_17_good(void)

{
  goodG2B();
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53b_badSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_53c_badSink(uParm1,uParm2,uParm1);
  return;
}


void CWE123_Write_What_Where_Condition__listen_socket_53b_goodG2BSink
               (undefined8 uParm1,undefined8 uParm2)

{
  CWE123_Write_What_Where_Condition__listen_socket_53c_goodG2BSink(uParm1,uParm2,uParm1);
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


void CWE123_Write_What_Where_Condition__fgets_08_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    pcVar2 = fgets((char *)&local_18,0x10,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets failed!");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void goodG2B2(void)

{
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  undefined8 ***local_10;
  
  local_18 = &local_28;
  local_10 = &local_28;
  local_28 = &local_18;
  local_20 = &local_18;
  staticReturnsTrue();
  linkedListPrev = local_10;
  linkedListNext = local_18;
  *(undefined8 ****)local_10 = local_18;
  *(undefined8 ****)(linkedListNext + 1) = linkedListPrev;
  return;
}


void CWE123_Write_What_Where_Condition__fgets_08_good(void)

{
  goodG2B1();
  goodG2B2();
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
  printf((char *)(double)fParm1,&DAT_0041593d);
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
  printf(pcParm1,&DAT_0041595a);
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
    __isoc99_sscanf(lVar1,&DAT_00415968,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00415970,&local_14);
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

