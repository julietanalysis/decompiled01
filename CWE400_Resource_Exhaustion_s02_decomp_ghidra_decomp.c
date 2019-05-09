
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00632ff8;
  if (PTR___gmon_start___00632ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400bd0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00633010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00633018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00633020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00633028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00633030)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00633038)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00633040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00633048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00633050)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00633058)();
  return pFVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00633060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00633068)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00633070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00633078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00633080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00633088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00633090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00633098)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_006330a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_006330a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006330b0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_006330b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_006330c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006330c8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006330d0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006330d8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_006330e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_006330e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_006330f0)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006330f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00633100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00633108)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00633110)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00633118)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00633120)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00632ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400e57) */
/* WARNING: Removing unreachable block (ram,0x00400e61) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400e94) */
/* WARNING: Removing unreachable block (ram,0x00400e9e) */

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


/* WARNING: Removing unreachable block (ram,0x00400ee4) */
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
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_05_good();");
  CWE400_Resource_Exhaustion__rand_sleep_05_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_41_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_41_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_16_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_16_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_45_good();");
  CWE400_Resource_Exhaustion__rand_sleep_45_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_41_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_41_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_64_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_64_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_65_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_65_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_02_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_02_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_04_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_04_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_03_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_03_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_66_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_66_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_04_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_04_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_45_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_45_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_51_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_51_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_21_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_21_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_03_good();");
  CWE400_Resource_Exhaustion__rand_sleep_03_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_34_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_34_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_66_good();");
  CWE400_Resource_Exhaustion__rand_sleep_66_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_16_good();");
  CWE400_Resource_Exhaustion__rand_sleep_16_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_21_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_21_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_12_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_12_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_07_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_07_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_18_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_18_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_68_good();");
  CWE400_Resource_Exhaustion__rand_sleep_68_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_05_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_05_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_12_good();");
  CWE400_Resource_Exhaustion__rand_sleep_12_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_14_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_14_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_09_good();");
  CWE400_Resource_Exhaustion__rand_sleep_09_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_22_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_22_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_34_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_34_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_42_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_42_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_03_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_03_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_08_good();");
  CWE400_Resource_Exhaustion__rand_sleep_08_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_63_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_63_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_53_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_53_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_61_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_61_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_61_good();");
  CWE400_Resource_Exhaustion__rand_sleep_61_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_01_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_01_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_51_good();");
  CWE400_Resource_Exhaustion__rand_sleep_51_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_09_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_09_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_21_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_21_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_44_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_44_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_03_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_03_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_02_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_02_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_51_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_51_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_11_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_11_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_12_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_12_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_04_good();");
  CWE400_Resource_Exhaustion__rand_sleep_04_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_15_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_15_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_10_good();");
  CWE400_Resource_Exhaustion__rand_sleep_10_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_07_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_07_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_07_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_07_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_14_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_14_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_06_good();");
  CWE400_Resource_Exhaustion__rand_sleep_06_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_15_good();");
  CWE400_Resource_Exhaustion__rand_sleep_15_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_54_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_54_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_53_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_53_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_52_good();");
  CWE400_Resource_Exhaustion__rand_sleep_52_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_13_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_13_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_07_good();");
  CWE400_Resource_Exhaustion__rand_sleep_07_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_13_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_13_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_22_good();");
  CWE400_Resource_Exhaustion__rand_sleep_22_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_15_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_15_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_10_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_10_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_54_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_54_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_61_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_61_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_67_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_67_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_42_good();");
  CWE400_Resource_Exhaustion__rand_sleep_42_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_17_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_17_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_65_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_65_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_34_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_34_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_63_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_63_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_53_good();");
  CWE400_Resource_Exhaustion__rand_sleep_53_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_54_good();");
  CWE400_Resource_Exhaustion__rand_sleep_54_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_42_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_42_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_32_good();");
  CWE400_Resource_Exhaustion__rand_sleep_32_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_11_good();");
  CWE400_Resource_Exhaustion__rand_sleep_11_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_02_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_02_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_22_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_22_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_22_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_68_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_68_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_05_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_05_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_16_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_16_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_66_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_66_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_42_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_42_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_65_good();");
  CWE400_Resource_Exhaustion__rand_sleep_65_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_45_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_45_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_15_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_15_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_41_good();");
  CWE400_Resource_Exhaustion__rand_sleep_41_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_10_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_10_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_31_good();");
  CWE400_Resource_Exhaustion__rand_sleep_31_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_16_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_16_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_08_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_08_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_08_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_08_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_18_good();");
  CWE400_Resource_Exhaustion__rand_sleep_18_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_31_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_31_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_64_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_64_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_31_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_31_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_34_good();");
  CWE400_Resource_Exhaustion__rand_sleep_34_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_67_good();");
  CWE400_Resource_Exhaustion__rand_sleep_67_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_06_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_06_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_09_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_09_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_32_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_32_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_45_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_45_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_66_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_66_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_53_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_53_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_13_good();");
  CWE400_Resource_Exhaustion__rand_sleep_13_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_67_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_67_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_44_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_44_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_61_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_61_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_52_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_52_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_64_good();");
  CWE400_Resource_Exhaustion__rand_sleep_64_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_21_good();");
  CWE400_Resource_Exhaustion__rand_sleep_21_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_01_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_01_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_17_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_17_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_52_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_52_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_10_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_10_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_31_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_31_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_32_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_32_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_63_good();");
  CWE400_Resource_Exhaustion__rand_sleep_63_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_08_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_08_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_18_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_18_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_06_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_06_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_11_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_11_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_05_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_05_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_52_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_52_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_14_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_14_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_01_good();");
  CWE400_Resource_Exhaustion__rand_sleep_01_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_54_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_54_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_17_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_17_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_14_good();");
  CWE400_Resource_Exhaustion__rand_sleep_14_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_63_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_63_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_41_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_41_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_68_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_68_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_09_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_09_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_02_good();");
  CWE400_Resource_Exhaustion__rand_sleep_02_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_68_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_68_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_17_good();");
  CWE400_Resource_Exhaustion__rand_sleep_17_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_64_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_64_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_65_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_65_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_04_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_04_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_32_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_32_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_01_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_01_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_18_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_18_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_11_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_11_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_44_good();");
  CWE400_Resource_Exhaustion__rand_sleep_44_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_44_good();");
  CWE400_Resource_Exhaustion__rand_fwrite_44_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_51_good();");
  CWE400_Resource_Exhaustion__rand_for_loop_51_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_67_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_67_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_12_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_12_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_06_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_06_good();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_13_good();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_13_good();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_05_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_05_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_41_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_41_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_16_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_16_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_45_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_45_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_41_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_41_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_64_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_64_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_65_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_65_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_02_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_02_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_04_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_04_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_03_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_03_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_66_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_66_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_04_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_04_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_45_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_45_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_51_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_51_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_21_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_21_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_03_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_03_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_34_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_34_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_66_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_66_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_16_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_16_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_21_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_21_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_12_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_12_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_07_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_07_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_18_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_18_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_68_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_68_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_05_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_05_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_12_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_12_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_14_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_14_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_09_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_09_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_22_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_22_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_34_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_34_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_42_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_42_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_03_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_03_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_08_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_08_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_63_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_63_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_53_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_53_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_61_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_61_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_61_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_61_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_01_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_01_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_51_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_51_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_09_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_09_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_21_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_21_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_44_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_44_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_03_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_03_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_02_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_02_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_51_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_51_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_11_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_11_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_12_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_12_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_04_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_04_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_15_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_15_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_10_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_10_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_07_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_07_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_07_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_07_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_14_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_14_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_06_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_06_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_15_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_15_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_54_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_54_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_53_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_53_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_52_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_52_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_13_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_13_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_07_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_07_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_13_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_13_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_22_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_22_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_15_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_15_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_10_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_10_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_54_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_54_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_61_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_61_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_67_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_67_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_42_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_42_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_17_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_17_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_65_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_65_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_34_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_34_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_63_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_63_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_53_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_53_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_54_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_54_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_42_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_42_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_32_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_32_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_11_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_11_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_02_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_02_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_22_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_22_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_22_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_68_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_68_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_05_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_05_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_16_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_16_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_66_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_66_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_42_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_42_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_65_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_65_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_45_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_45_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_15_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_15_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_41_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_41_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_10_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_10_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_31_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_31_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_16_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_16_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_08_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_08_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_08_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_08_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_18_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_18_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_31_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_31_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_64_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_64_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_31_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_31_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_34_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_34_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_67_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_67_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_06_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_06_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_09_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_09_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_32_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_32_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_45_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_45_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_66_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_66_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_53_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_53_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_13_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_13_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_67_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_67_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_44_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_44_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_61_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_61_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_52_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_52_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_64_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_64_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_21_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_21_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_01_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_01_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_17_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_17_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_52_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_52_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_10_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_10_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_31_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_31_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_32_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_32_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_63_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_63_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_08_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_08_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_18_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_18_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_06_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_06_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_11_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_11_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_05_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_05_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_52_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_52_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_14_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_14_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_01_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_01_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_54_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_54_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_17_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_17_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_14_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_14_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_63_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_63_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_41_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_41_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_68_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_68_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_09_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_09_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_02_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_02_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_68_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_68_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_17_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_17_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_64_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_64_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_65_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_65_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_04_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_04_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_32_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_32_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_01_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_01_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_18_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_18_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_11_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_11_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_sleep_44_bad();");
  CWE400_Resource_Exhaustion__rand_sleep_44_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_fwrite_44_bad();");
  CWE400_Resource_Exhaustion__rand_fwrite_44_bad();
  printLine("Calling CWE400_Resource_Exhaustion__rand_for_loop_51_bad();");
  CWE400_Resource_Exhaustion__rand_for_loop_51_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_67_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_67_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_12_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_12_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_06_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_06_bad();
  printLine("Calling CWE400_Resource_Exhaustion__listen_socket_sleep_13_bad();");
  CWE400_Resource_Exhaustion__listen_socket_sleep_13_bad();
  return 0;
}


void CWE400_Resource_Exhaustion__rand_fwrite_65b_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_65b_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_65b_goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (((iVar1 != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    usleep(local_24);
    printLine();
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (((int)local_24 < 1) || (2000 < (int)local_24)) {
      printLine();
    }
    else {
      usleep(local_24);
      printLine();
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  __useconds_t local_14;
  int local_10;
  int local_c;
  
  local_14 = 0xffffffff;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x14;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    usleep(local_14);
    printLine();
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((globalTrue != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  if (globalTrue != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_51b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_68_badData = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_68_badData =
         CWE400_Resource_Exhaustion__rand_fwrite_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_68_goodG2BData = 0x14;
  CWE400_Resource_Exhaustion__rand_fwrite_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf)
    ;
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData =
         CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_68b_goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_68_good(void)

{
  goodG2B();
  goodB2G();
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


void CWE400_Resource_Exhaustion__rand_sleep_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (GLOBAL_CONST_TRUE != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (staticTrue != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE400_Resource_Exhaustion__rand_sleep_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE400_Resource_Exhaustion__rand_sleep_61b_goodG2BSource(void)

{
  return 0x14;
}


ulong CWE400_Resource_Exhaustion__rand_sleep_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE400_Resource_Exhaustion__rand_sleep_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (globalTrue != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53d_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_53d_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_53d_goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_45_badData;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_45_badData = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_45_badData =
         CWE400_Resource_Exhaustion__rand_for_loop_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_45_goodG2BData;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_45_goodG2BData = 0x14;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData;
  if ((0 < CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData) &&
     (CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData =
         CWE400_Resource_Exhaustion__rand_for_loop_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_65b_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_65b_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_65b_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_28 = 0;
  while (local_28 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_28 = local_28 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004051dc) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004052ec) */

void goodG2B1(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 0x14) {
    printLine("Hello");
    local_18 = local_18 + 1;
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 0x14) {
    printLine("Hello");
    local_18 = local_18 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE400_Resource_Exhaustion__listen_socket_sleep_65b_badSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_65b_goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = CWE400_Resource_Exhaustion__listen_socket_sleep_65b_goodB2GSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_61_bad(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_61b_badSource(0xffffffff);
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_61b_goodG2BSource(0xffffffff);
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_61b_goodB2GSource(0xffffffff);
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((staticFive == 5) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  if (staticFive == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53d_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53d_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53d_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_53d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54d_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54e_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54d_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54d_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54e_goodB2GSink((ulong)uParm1);
  return;
}


ulong badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_42_bad(void)

{
  __useconds_t __useconds;
  
  __useconds = badSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


undefined8 goodG2BSource(void)

{
  return 0x14;
}


void goodG2B(void)

{
  __useconds_t __useconds;
  
  __useconds = goodG2BSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


ulong goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void goodB2G(void)

{
  __useconds_t __useconds;
  
  __useconds = goodB2GSource();
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_61_bad(void)

{
  __useconds_t __useconds;
  
  __useconds = CWE400_Resource_Exhaustion__rand_sleep_61b_badSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  __useconds_t __useconds;
  
  __useconds = CWE400_Resource_Exhaustion__rand_sleep_61b_goodG2BSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  __useconds_t __useconds;
  
  __useconds = CWE400_Resource_Exhaustion__rand_sleep_61b_goodB2GSource();
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_68b_badSink(void)

{
  usleep(CWE400_Resource_Exhaustion__listen_socket_sleep_68_badData);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_68b_goodG2BSink(void)

{
  usleep(CWE400_Resource_Exhaustion__listen_socket_sleep_68_goodG2BData);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_68b_goodB2GSink(void)

{
  if (((int)CWE400_Resource_Exhaustion__listen_socket_sleep_68_goodB2GData < 1) ||
     (2000 < (int)CWE400_Resource_Exhaustion__listen_socket_sleep_68_goodB2GData)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(CWE400_Resource_Exhaustion__listen_socket_sleep_68_goodB2GData);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (staticFive == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_64b_badSink(int *piParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *piParm1;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_64b_goodG2BSink(int *piParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *piParm1;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_64b_goodB2GSink(int *piParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *piParm1;
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_67b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (staticTrue != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE400_Resource_Exhaustion__rand_for_loop_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_28;
  ulong local_20;
  
  local_28 = &local_3c;
  local_30 = &local_3c;
  local_3c = 0xffffffff;
  local_34 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_34 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_34 = rand();
    local_34 = local_34 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_28 = local_34;
  local_38 = *local_30;
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)local_38) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  ulong local_10;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0xffffffff;
  local_24 = 0x14;
  local_28 = 0x14;
  local_10 = 0;
  while (local_10 < (ulong)(long)local_28) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_28;
  ulong local_20;
  
  local_28 = &local_3c;
  local_30 = &local_3c;
  local_3c = 0xffffffff;
  local_34 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_34 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_34 = rand();
    local_34 = local_34 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_28 = local_34;
  local_38 = *local_30;
  if ((0 < (int)local_38) && ((int)local_38 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)local_38) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  goodG2BSink(0x14);
  return;
}


void goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52c_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52c_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52c_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_67b_badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_67b_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_67b_goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_68_badData = local_c;
  CWE400_Resource_Exhaustion__listen_socket_sleep_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_68_goodG2BData = 0x14;
  CWE400_Resource_Exhaustion__listen_socket_sleep_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_68_goodB2GData = local_c;
  CWE400_Resource_Exhaustion__listen_socket_sleep_68b_goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__rand_for_loop_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_64b_goodB2GSink(local_1c);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_66b_badSink(long lParm1)

{
  usleep(*(__useconds_t *)(lParm1 + 8));
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_66b_goodG2BSink(long lParm1)

{
  usleep(*(__useconds_t *)(lParm1 + 8));
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_66b_goodB2GSink(long lParm1)

{
  __useconds_t __useconds;
  
  __useconds = *(__useconds_t *)(lParm1 + 8);
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_65b_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_65b_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_65b_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_28 = 0;
  while (local_28 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_28 = local_28 + 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004084ac) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004085b9) */

void goodG2B1(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 0x14) {
    printLine("Hello");
    local_18 = local_18 + 1;
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 0x14) {
    printLine("Hello");
    local_18 = local_18 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_53b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53_good(void)

{
  goodG2B();
  goodB2G();
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


void CWE400_Resource_Exhaustion__listen_socket_sleep_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_67b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_54b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54e_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54e_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54e_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((GLOBAL_CONST_TRUE != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_22_badSink(int iParm1)

{
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_for_loop_22_badGlobal != 0) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G1Sink(int iParm1)

{
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G1Global == 0) {
    if ((0 < iParm1) && (iParm1 < 0x15)) {
      local_10 = 0;
      while (local_10 < (ulong)(long)iParm1) {
        printLine("Hello");
        local_10 = local_10 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G2Sink(int iParm1)

{
  ulong local_10;
  
  if (((CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G2Global != 0) && (0 < iParm1)) &&
     (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_22_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_for_loop_22_goodG2BGlobal != 0) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((globalFive == 5) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  if (globalFive == 5) {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_52c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (staticFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (staticFive == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_66b_badSink(long lParm1)

{
  usleep(*(__useconds_t *)(lParm1 + 8));
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_66b_goodG2BSink(long lParm1)

{
  usleep(*(__useconds_t *)(lParm1 + 8));
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_66b_goodB2GSink(long lParm1)

{
  __useconds_t __useconds;
  
  __useconds = *(__useconds_t *)(lParm1 + 8);
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s != (FILE *)0x0) {
    local_28 = 0;
    while( true ) {
      if ((ulong)(long)(int)uVar1 <= local_28) {
        if (__s != (FILE *)0x0) {
          fclose(__s);
        }
        return;
      }
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) break;
      local_28 = local_28 + 1;
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0040a60e) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a7fe) */

void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_18 = 0;
  while( true ) {
    if (0x13 < local_18) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_18 = local_18 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_18 = 0;
  while( true ) {
    if (0x13 < local_18) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_18 = local_18 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 0x14;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_30 = 0;
      while (local_30 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_30 = local_30 + 1;
      }
    }
  }
  else {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_30 = 0;
      while (local_30 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_30 = local_30 + 1;
      }
    }
  }
  else {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0;
    while (local_20 < 0x14) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  else {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_53b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54e_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_54e_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_54e_goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE400_Resource_Exhaustion__rand_fwrite_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x14;
  local_20 = 0x14;
  CWE400_Resource_Exhaustion__rand_fwrite_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE400_Resource_Exhaustion__rand_fwrite_66b_goodB2GSink(local_38);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_64b_badSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_64b_goodG2BSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_64b_goodB2GSink(__useconds_t *p_Parm1)

{
  __useconds_t __useconds;
  
  __useconds = *p_Parm1;
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54e_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54e_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54e_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE400_Resource_Exhaustion__rand_sleep_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x14;
  local_20 = 0x14;
  CWE400_Resource_Exhaustion__rand_sleep_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE400_Resource_Exhaustion__rand_sleep_66b_goodB2GSink(local_38);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_52b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_52c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_52b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_52b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFive == 5) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (globalFive == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE400_Resource_Exhaustion__listen_socket_sleep_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  __useconds_t local_30;
  __useconds_t local_2c;
  int local_28;
  int local_24;
  __useconds_t *local_20;
  __useconds_t *local_18;
  int local_10;
  __useconds_t local_c;
  
  local_18 = &local_30;
  local_20 = &local_30;
  local_30 = 0xffffffff;
  local_c = 0xffffffff;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  usleep(local_2c);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 0x14;
  local_20 = 0x14;
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  __useconds_t local_30;
  __useconds_t local_2c;
  int local_28;
  int local_24;
  __useconds_t *local_20;
  __useconds_t *local_18;
  int local_10;
  __useconds_t local_c;
  
  local_18 = &local_30;
  local_20 = &local_30;
  local_30 = 0xffffffff;
  local_c = 0xffffffff;
  local_24 = 0xffffffff;
  local_10 = -1;
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_48,0,0x10);
    local_48 = 2;
    local_44 = 0;
    local_46 = htons(0x6987);
    iVar1 = bind(local_24,(sockaddr *)&local_48,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_24,5), iVar1 != -1)) &&
       (local_10 = accept(local_24,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_58,0xd,0);
      local_28 = (int)sVar2;
      if ((local_28 != -1) && (local_28 != 0)) {
        local_58[(long)local_28] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  *local_18 = local_c;
  local_2c = *local_20;
  if (((int)local_2c < 1) || (2000 < (int)local_2c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_2c);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__rand_sleep_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_63b_goodB2GSink(local_1c);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (((iVar1 != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B2(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_52c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_22_badSink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__rand_sleep_22_badGlobal != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G1Sink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G1Global == 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G2Sink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G2Global != 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_22_goodG2BSink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__rand_sleep_22_goodG2BGlobal != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_67b_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_67b_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_67b_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__listen_socket_sleep_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_64b_goodB2GSink(&local_18);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE400_Resource_Exhaustion__rand_for_loop_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE400_Resource_Exhaustion__rand_for_loop_61b_goodG2BSource(void)

{
  return 0x14;
}


ulong CWE400_Resource_Exhaustion__rand_for_loop_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE400_Resource_Exhaustion__rand_for_loop_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((globalTrue != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (globalFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  if (globalTrue != 0) {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_52b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cfd4) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d192) */

void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53d_badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53d_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53d_goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_52b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_51b_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_51b_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_51b_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE400_Resource_Exhaustion__listen_socket_sleep_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_67b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  CWE400_Resource_Exhaustion__listen_socket_sleep_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_61_bad(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_61b_badSource(0xffffffff);
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_61b_goodG2BSource(0xffffffff);
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_61b_goodB2GSource(0xffffffff);
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_22_badSink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__listen_socket_sleep_22_badGlobal != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G1Sink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G1Global == 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G2Sink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G2Global != 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodG2BSink(__useconds_t _Parm1)

{
  if (CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodG2BGlobal != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_51b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_51b_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_51b_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_51b_goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((staticFive == 5) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (staticFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  if (staticFive == 5) {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  __useconds_t local_14;
  int local_10;
  int local_c;
  
  local_14 = 0xffffffff;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    usleep(local_14);
    printLine();
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  int local_18;
  __useconds_t local_14;
  int local_10;
  int local_c;
  
  local_14 = 0xffffffff;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_18 = -1;
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
         (local_18 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_18 != -1)) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_20 = (int)sVar2;
        if ((local_20 != -1) && (local_20 != 0)) {
          local_48[(long)local_20] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (((int)local_14 < 1) || (2000 < (int)local_14)) {
      printLine();
    }
    else {
      usleep(local_14);
      printLine();
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  __useconds_t local_14;
  int local_10;
  int local_c;
  
  local_14 = 0xffffffff;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x14;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    usleep(local_14);
    printLine();
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_51b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_45_badData;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_45_badData = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_45_badData =
         CWE400_Resource_Exhaustion__rand_fwrite_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_45_goodG2BData;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_45_goodG2BData = 0x14;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData;
  if ((0 < CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData) &&
     (CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf)
    ;
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData = rand();
    CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData =
         CWE400_Resource_Exhaustion__rand_fwrite_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE400_Resource_Exhaustion__rand_fwrite_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE400_Resource_Exhaustion__rand_fwrite_61b_goodG2BSource(void)

{
  return 0x14;
}


ulong CWE400_Resource_Exhaustion__rand_fwrite_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE400_Resource_Exhaustion__rand_fwrite_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((GLOBAL_CONST_FIVE == 5) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s != (FILE *)0x0) {
    local_28 = 0;
    while( true ) {
      if ((ulong)(long)(int)uVar1 <= local_28) {
        if (__s != (FILE *)0x0) {
          fclose(__s);
        }
        return;
      }
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) break;
      local_28 = local_28 + 1;
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0040f0eb) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f2de) */

void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_18 = 0;
  while( true ) {
    if (0x13 < local_18) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_18 = local_18 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_18 = 0;
  while( true ) {
    if (0x13 < local_18) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_18 = local_18 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_22_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_badGlobal = 1;
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G1Global = 0;
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G2Global = 1;
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodG2BGlobal = 1;
  CWE400_Resource_Exhaustion__listen_socket_sleep_22_goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void)

{
  usleep(CWE400_Resource_Exhaustion__rand_sleep_45_badData);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_45_badData = rand();
    CWE400_Resource_Exhaustion__rand_sleep_45_badData =
         CWE400_Resource_Exhaustion__rand_sleep_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  usleep(CWE400_Resource_Exhaustion__rand_sleep_45_goodG2BData);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_45_goodG2BData = 0x14;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (((int)CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData < 1) ||
     (2000 < (int)CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData = rand();
    CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData =
         CWE400_Resource_Exhaustion__rand_sleep_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fb78) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040fc76) */

void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
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
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE400_Resource_Exhaustion__listen_socket_sleep_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x14;
  local_20 = 0x14;
  CWE400_Resource_Exhaustion__listen_socket_sleep_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [8];
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
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
      sVar2 = recv(local_10,local_58,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_58[(long)local_18] = 0;
        local_c = atoi(local_58);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_30 = local_c;
  CWE400_Resource_Exhaustion__listen_socket_sleep_66b_goodB2GSink(local_38);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54d_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54e_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54d_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54d_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_64b_badSink(int *piParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *piParm1;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_64b_goodG2BSink(int *piParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *piParm1;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_64b_goodB2GSink(int *piParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *piParm1;
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (GLOBAL_CONST_FIVE == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_63b_badSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_63b_goodG2BSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_63b_goodB2GSink(__useconds_t *p_Parm1)

{
  __useconds_t __useconds;
  
  __useconds = *p_Parm1;
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_54b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((globalFive == 5) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (globalFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  if (globalFive == 5) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE400_Resource_Exhaustion__rand_fwrite_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint local_4c;
  char *local_48;
  FILE *local_40;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_28;
  ulong local_20;
  
  local_28 = &local_4c;
  local_30 = &local_4c;
  local_4c = 0xffffffff;
  local_34 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_34 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_34 = rand();
    local_34 = local_34 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_28 = local_34;
  local_38 = *local_30;
  local_20 = 0;
  local_40 = (FILE *)0x0;
  local_48 = "output_bad.txt";
  local_40 = fopen("output_bad.txt","w+");
  if (local_40 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)local_38 <= local_20) {
      if (local_40 != (FILE *)0x0) {
        fclose(local_40);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,local_40);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  size_t sVar1;
  undefined4 local_3c;
  char *local_38;
  FILE *local_30;
  int local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  ulong local_10;
  
  local_18 = &local_3c;
  local_20 = &local_3c;
  local_3c = 0xffffffff;
  local_24 = 0x14;
  local_28 = 0x14;
  local_10 = 0;
  local_30 = (FILE *)0x0;
  local_38 = "output_bad.txt";
  local_30 = fopen("output_bad.txt","w+");
  if (local_30 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)local_28 <= local_10) {
      if (local_30 != (FILE *)0x0) {
        fclose(local_30);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,local_30);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  uint local_4c;
  char *local_48;
  FILE *local_40;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_28;
  ulong local_20;
  
  local_28 = &local_4c;
  local_30 = &local_4c;
  local_4c = 0xffffffff;
  local_34 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_34 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_34 = rand();
    local_34 = local_34 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_28 = local_34;
  local_38 = *local_30;
  local_20 = 0;
  local_40 = (FILE *)0x0;
  local_48 = "output_good.txt";
  if ((0 < (int)local_38) && ((int)local_38 < 0x15)) {
    local_40 = fopen("output_good.txt","w+");
    if (local_40 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)local_38) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,local_40);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (local_40 != (FILE *)0x0) {
      fclose(local_40);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_64b_badSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_64b_goodG2BSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_64b_goodB2GSink(__useconds_t *p_Parm1)

{
  __useconds_t __useconds;
  
  __useconds = *p_Parm1;
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFive == 5) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (globalFive == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_67b_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_67b_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_67b_goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE400_Resource_Exhaustion__rand_sleep_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_34;
  __useconds_t local_30;
  uint local_2c;
  __useconds_t *local_28;
  uint *local_20;
  
  local_20 = &local_34;
  local_28 = &local_34;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  usleep(local_30);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0xffffffff;
  local_1c = 0x14;
  local_20 = 0x14;
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_34;
  __useconds_t local_30;
  uint local_2c;
  __useconds_t *local_28;
  uint *local_20;
  
  local_20 = &local_34;
  local_28 = &local_34;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (((int)local_30 < 1) || (2000 < (int)local_30)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_30);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_65b_badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_65b_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_65b_goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void badSink(__useconds_t _Parm1)

{
  if (badStatic != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_21_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(__useconds_t _Parm1)

{
  if (goodB2G1Static == 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(__useconds_t _Parm1)

{
  if (goodB2G2Static != 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(__useconds_t _Parm1)

{
  if (goodG2BStatic != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  __useconds_t local_20;
  __useconds_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  __useconds_t local_20;
  __useconds_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_1c = local_c;
  local_20 = local_c;
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__listen_socket_sleep_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = -1;
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_18 = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_63b_goodB2GSink(&local_18);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_67b_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_67b_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_67b_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__rand_sleep_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_64b_goodB2GSink(local_1c);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413243) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041333e) */

void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_67b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_68 [16];
  sa_family_t local_58;
  uint16_t local_56;
  undefined4 local_54;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
    local_14 = -1;
    local_20 = socket(2,1,6);
    if (local_20 != -1) {
      memset(&local_58,0,0x10);
      local_58 = 2;
      local_54 = 0;
      local_56 = htons(0x6987);
      iVar1 = bind(local_20,(sockaddr *)&local_58,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_20,5), iVar1 != -1)) &&
         (local_14 = accept(local_20,(sockaddr *)0x0,(socklen_t *)0x0), local_14 != -1)) {
        sVar2 = recv(local_14,local_68,0xd,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          local_68[(long)local_24] = 0;
          local_c = atoi(local_68);
        }
      }
    }
    if (local_20 != -1) {
      close(local_20);
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  else {
    local_18 = 0xffffffff;
    local_10 = -1;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = 0;
      local_36 = htons(0x6987);
      iVar1 = bind(local_18,(sockaddr *)&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_18,5), iVar1 != -1)) &&
         (local_10 = accept(local_18,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_c = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  else {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE400_Resource_Exhaustion__rand_for_loop_65b_goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B2(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B2(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_22_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_fwrite_22_badGlobal != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G1Sink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G1Global == 0) {
    if ((0 < iParm1) && (iParm1 < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = 0;
      while (local_10 < (ulong)(long)iParm1) {
        sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_10 = local_10 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Sink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Global != 0) {
    if ((0 < iParm1) && (iParm1 < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = 0;
      while (local_10 < (ulong)(long)iParm1) {
        sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_10 = local_10 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_22_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (CWE400_Resource_Exhaustion__rand_fwrite_22_goodG2BGlobal != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE400_Resource_Exhaustion__rand_for_loop_42_bad(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = badSource(0xffffffff);
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 0x14;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = goodG2BSource(0xffffffff);
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = goodB2GSource(0xffffffff);
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54c_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54d_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54c_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54c_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54d_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54e_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54d_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_54d_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_68b_badSink(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_68_badData;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_68b_goodG2BSink(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_68_goodG2BData;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_68b_goodB2GSink(void)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData;
  if ((0 < CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData) &&
     (CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__rand_fwrite_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_64b_goodB2GSink(local_1c);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = badSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_20;
  int local_1c;
  code *local_18;
  int local_10;
  uint local_c;
  
  local_18 = goodB2GSink;
  local_c = 0xffffffff;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_1c,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_1c,5), iVar1 != -1)) &&
       (local_10 = accept(local_1c,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_20 = (int)sVar2;
      if ((local_20 != -1) && (local_20 != 0)) {
        local_48[(long)local_20] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_63b_badSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_63b_goodG2BSink(__useconds_t *p_Parm1)

{
  usleep(*p_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_63b_goodB2GSink(__useconds_t *p_Parm1)

{
  __useconds_t __useconds;
  
  __useconds = *p_Parm1;
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_30;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    local_30 = 0;
    while (local_30 < (ulong)(long)(int)local_24) {
      printLine("Hello");
      local_30 = local_30 + 1;
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_30;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if ((0 < (int)local_24) && ((int)local_24 < 0x15)) {
      local_30 = 0;
      while (local_30 < (ulong)(long)(int)local_24) {
        printLine("Hello");
        local_30 = local_30 + 1;
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  ulong local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x14;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_20 = 0;
    while (local_20 < (ulong)(long)local_14) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_22_badGlobal = 1;
  CWE400_Resource_Exhaustion__rand_for_loop_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G1Global = 0;
  CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G2Global = 1;
  CWE400_Resource_Exhaustion__rand_for_loop_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_22_goodG2BGlobal = 1;
  CWE400_Resource_Exhaustion__rand_for_loop_22_goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((staticTrue != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  if (staticTrue != 0) {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE400_Resource_Exhaustion__listen_socket_sleep_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE400_Resource_Exhaustion__listen_socket_sleep_61b_goodG2BSource(void)

{
  return 0x14;
}


ulong CWE400_Resource_Exhaustion__listen_socket_sleep_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  local_10 = socket(2,1,6);
  local_3c = uParm1;
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_10,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (((iVar1 != -1) && (iVar1 = listen(local_10,5), local_3c = uParm1, iVar1 != -1)) &&
       (local_c = accept(local_10,(sockaddr *)0x0,(socklen_t *)0x0), local_3c = uParm1,
       local_c != -1)) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_14 = (int)sVar2;
      local_3c = uParm1;
      if ((local_14 != -1) && (local_3c = uParm1, local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalFalse == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (globalTrue != 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (globalFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (globalTrue != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(0x14);
  return;
}


void goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52c_badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52c_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52c_goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_22_badGlobal = 1;
  CWE400_Resource_Exhaustion__rand_sleep_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G1Global = 0;
  CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G2Global = 1;
  CWE400_Resource_Exhaustion__rand_sleep_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_22_goodG2BGlobal = 1;
  CWE400_Resource_Exhaustion__rand_sleep_22_goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_68_badData = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_68_badData =
         CWE400_Resource_Exhaustion__rand_for_loop_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_68_goodG2BData = 0x14;
  CWE400_Resource_Exhaustion__rand_for_loop_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData = rand();
    CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData =
         CWE400_Resource_Exhaustion__rand_for_loop_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_68b_goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53d_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53d_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_53d_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_66b_badSink(long lParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *(int *)(lParm1 + 8);
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_66b_goodG2BSink(long lParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *(int *)(lParm1 + 8);
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_66b_goodB2GSink(long lParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *(int *)(lParm1 + 8);
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54d_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54e_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54d_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_54d_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_63b_badSink(int *piParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *piParm1;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_63b_goodG2BSink(int *piParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *piParm1;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_63b_goodB2GSink(int *piParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *piParm1;
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_61_bad(void)

{
  __useconds_t __useconds;
  
  __useconds = CWE400_Resource_Exhaustion__listen_socket_sleep_61b_badSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  __useconds_t __useconds;
  
  __useconds = CWE400_Resource_Exhaustion__listen_socket_sleep_61b_goodG2BSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  __useconds_t __useconds;
  
  __useconds = CWE400_Resource_Exhaustion__listen_socket_sleep_61b_goodB2GSource();
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_53b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (GLOBAL_CONST_FIVE == 5) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_10 = -1;
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = 0;
      local_26 = htons(0x6987);
      iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
         (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_18 = (int)sVar2;
        if ((local_18 != -1) && (local_18 != 0)) {
          local_38[(long)local_18] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (((int)local_c < 1) || (2000 < (int)local_c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B1(void)

{
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 0x14;
  }
  else {
    printLine();
  }
  if (GLOBAL_CONST_TRUE != 0) {
    usleep(local_c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54e_badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54e_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_54e_goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE400_Resource_Exhaustion__rand_for_loop_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x14;
  local_20 = 0x14;
  CWE400_Resource_Exhaustion__rand_for_loop_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE400_Resource_Exhaustion__rand_for_loop_66b_goodB2GSink(local_38);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (badStatic != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (goodB2G1Static == 0) {
    if ((0 < iParm1) && (iParm1 < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = 0;
      while (local_10 < (ulong)(long)iParm1) {
        sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_10 = local_10 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (goodB2G2Static != 0) {
    if ((0 < iParm1) && (iParm1 < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = 0;
      while (local_10 < (ulong)(long)iParm1) {
        sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_10 = local_10 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if (goodG2BStatic != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  __useconds_t local_28;
  __useconds_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  __useconds_t local_28;
  __useconds_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
    local_36 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_38,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_48[(long)local_18] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c;
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__rand_fwrite_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_63b_goodB2GSink(local_1c);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_52c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_for_loop_52c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(__useconds_t _Parm1)

{
  if (badStatic != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(__useconds_t _Parm1)

{
  if (goodB2G1Static == 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(__useconds_t _Parm1)

{
  if (goodB2G2Static != 0) {
    if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(_Parm1);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(__useconds_t _Parm1)

{
  if (goodG2BStatic != 0) {
    usleep(_Parm1);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54c_goodB2GSink((ulong)uParm1);
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


void CWE400_Resource_Exhaustion__rand_fwrite_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (((iVar1 != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_22_badGlobal = 1;
  CWE400_Resource_Exhaustion__rand_fwrite_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G1Global = 0;
  CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Global = 1;
  CWE400_Resource_Exhaustion__rand_fwrite_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_22_goodG2BGlobal = 1;
  CWE400_Resource_Exhaustion__rand_fwrite_22_goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_22_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE400_Resource_Exhaustion__rand_for_loop_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (((iVar1 != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x14;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 0x14;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_30 = 0;
      while (local_30 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_30 = local_30 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_30 = 0;
      while (local_30 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_30 = local_30 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_20;
  ulong local_18;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 0x14) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  else {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((GLOBAL_CONST_TRUE != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_for_loop_52b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 0x14;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    usleep(local_1c);
    printLine("Sleep time possibly too long");
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  else {
    if (((int)local_1c < 1) || (2000 < (int)local_1c)) {
      printLine("Sleep time too long");
    }
    else {
      usleep(local_1c);
      printLine("Sleep time OK");
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  else {
    usleep(0x14);
    printLine("Sleep time possibly too long");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_51b_badSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_51b_goodG2BSink(int iParm1)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < (ulong)(long)iParm1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_51b_goodB2GSink(int iParm1)

{
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_54b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_30;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while( true ) {
    if (0 < local_20) {
      return;
    }
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) break;
    local_30 = 0;
    while (local_30 < (ulong)(long)(int)local_24) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_30 = local_30 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_30;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0xffffffff;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  do {
    if (0 < local_20) {
      return;
    }
    if ((0 < (int)local_24) && ((int)local_24 < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_30 = 0;
      while (local_30 < (ulong)(long)(int)local_24) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_30 = local_30 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


void goodG2B(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = -1;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x14;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while( true ) {
    if (0 < local_10) {
      return;
    }
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) break;
    local_20 = 0;
    while (local_20 < (ulong)(long)local_14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodG2B(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE400_Resource_Exhaustion__rand_fwrite_65b_goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_52b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE400_Resource_Exhaustion__rand_fwrite_42_bad(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = badSource(0xffffffff);
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


undefined8 goodG2BSource(void)

{
  return 0x14;
}


void goodG2B(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = goodG2BSource(0xffffffff);
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = goodB2GSource(0xffffffff);
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE400_Resource_Exhaustion__rand_sleep_65b_goodG2BSink(0x14,uParm2,0x14);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_51b_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_51b_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_51b_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  goodG2BSink(0x14);
  return;
}


void goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  usleep(CWE400_Resource_Exhaustion__listen_socket_sleep_45_badData);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  usleep(CWE400_Resource_Exhaustion__listen_socket_sleep_45_goodG2BData);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_45_goodG2BData = 0x14;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (((int)CWE400_Resource_Exhaustion__listen_socket_sleep_45_goodB2GData < 1) ||
     (2000 < (int)CWE400_Resource_Exhaustion__listen_socket_sleep_45_goodB2GData)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(CWE400_Resource_Exhaustion__listen_socket_sleep_45_goodB2GData);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_53c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_53b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_sleep_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_68b_badSink(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_68_badData;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_68b_goodG2BSink(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_68_goodG2BData;
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_68b_goodB2GSink(void)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData;
  if ((0 < CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData) &&
     (CWE400_Resource_Exhaustion__rand_fwrite_68_goodB2GData < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE400_Resource_Exhaustion__rand_sleep_42_bad(void)

{
  __useconds_t __useconds;
  
  __useconds = badSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


undefined8 goodG2BSource(void)

{
  return 0x14;
}


void goodG2B(void)

{
  __useconds_t __useconds;
  
  __useconds = goodG2BSource();
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  __useconds_t __useconds;
  
  __useconds = goodB2GSource();
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        printLine("Hello");
        local_28 = local_28 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((GLOBAL_CONST_FIVE == 5) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      printLine("Hello");
      local_28 = local_28 + 1;
    }
  }
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    while (local_18 < 0x14) {
      printLine("Hello");
      local_18 = local_18 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0x14;
  CWE400_Resource_Exhaustion__rand_for_loop_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_for_loop_63b_goodB2GSink(local_1c);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_63b_badSink(int *piParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *piParm1;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_63b_goodG2BSink(int *piParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *piParm1;
  local_10 = 0;
  while (local_10 < (ulong)(long)iVar1) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_63b_goodB2GSink(int *piParm1)

{
  int iVar1;
  ulong local_10;
  
  iVar1 = *piParm1;
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_68b_badSink(void)

{
  usleep(CWE400_Resource_Exhaustion__rand_sleep_68_badData);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_68b_goodG2BSink(void)

{
  usleep(CWE400_Resource_Exhaustion__rand_sleep_68_goodG2BData);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_68b_goodB2GSink(void)

{
  if (((int)CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData < 1) ||
     (2000 < (int)CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if ((0 < (int)local_1c) && ((int)local_1c < 0x15)) {
      __s = fopen("output_good.txt","w+");
      if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = 0;
      while (local_28 < (ulong)(long)(int)local_1c) {
        sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
        if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_28 = local_28 + 1;
      }
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_28;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (((staticTrue != 0) && (0 < (int)local_1c)) && ((int)local_1c < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_28 = 0;
    while (local_28 < (ulong)(long)(int)local_1c) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_28 = local_28 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B1(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  int local_c;
  
  local_c = -1;
  if (staticFalse == 0) {
    local_c = 0x14;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < (ulong)(long)local_c) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B2(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_18;
  
  if (staticTrue != 0) {
    __s = fopen("output_bad.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 0x14) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_18 = local_18 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  goodG2BSink(0x14);
  return;
}


void goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__listen_socket_sleep_51b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE400_Resource_Exhaustion__listen_socket_sleep_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53b_badSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53c_badSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53b_goodG2BSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53b_goodB2GSink(uint uParm1)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_52c_badSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_52c_goodG2BSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iParm1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_52c_goodB2GSink(int iParm1)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  if ((0 < iParm1) && (iParm1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar1 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_fwrite_53b_goodG2BSink(0x14);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_fwrite_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  ulong local_10;
  
  if (badStatic != 0) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  ulong local_10;
  
  if (goodB2G1Static == 0) {
    if ((0 < iParm1) && (iParm1 < 0x15)) {
      local_10 = 0;
      while (local_10 < (ulong)(long)iParm1) {
        printLine("Hello");
        local_10 = local_10 + 1;
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  ulong local_10;
  
  if (((goodB2G2Static != 0) && (0 < iParm1)) && (iParm1 < 0x15)) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  ulong local_10;
  
  if (goodG2BStatic != 0) {
    local_10 = 0;
    while (local_10 < (ulong)(long)iParm1) {
      printLine("Hello");
      local_10 = local_10 + 1;
    }
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0x14);
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_66b_badSink(long lParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *(int *)(lParm1 + 8);
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_66b_goodG2BSink(long lParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *(int *)(lParm1 + 8);
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if ((ulong)(long)iVar1 <= local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar2 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_66b_goodB2GSink(long lParm1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  ulong local_10;
  
  iVar1 = *(int *)(lParm1 + 8);
  if ((0 < iVar1) && (iVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_10 = 0;
    while (local_10 < (ulong)(long)iVar1) {
      sVar2 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar2 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_10 = local_10 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52c_badSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52c_goodG2BSink(__useconds_t _Parm1)

{
  usleep(_Parm1);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_52c_goodB2GSink(__useconds_t _Parm1)

{
  if (((int)_Parm1 < 1) || (2000 < (int)_Parm1)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(_Parm1);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_fwrite_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_20 = 0;
  while( true ) {
    if ((ulong)(long)(int)uVar1 <= local_20) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar4 != 0x32) break;
    local_20 = local_20 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__s;
  size_t sVar4;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    __s = fopen("output_good.txt","w+");
    if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      sVar4 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
      if (sVar4 != 0x32) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      local_20 = local_20 + 1;
    }
    if (__s != (FILE *)0x0) {
      fclose(__s);
    }
  }
  return;
}


void goodG2B(void)

{
  FILE *__s;
  size_t sVar1;
  ulong local_10;
  
  __s = fopen("output_bad.txt","w+");
  if (__s == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return;
    }
    sVar1 = fwrite("This is the sentence we are printing to the file. ",1,0x32,__s);
    if (sVar1 != 0x32) break;
    local_10 = local_10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE400_Resource_Exhaustion__rand_fwrite_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  usleep(local_c);
  printLine("Sleep time possibly too long");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041eda5) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  undefined4 local_24;
  int local_18;
  int local_14;
  int local_10;
  __useconds_t local_c;
  
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = -1;
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = 0;
    local_26 = htons(0x6987);
    iVar1 = bind(local_14,(sockaddr *)&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(local_14,5), iVar1 != -1)) &&
       (local_10 = accept(local_14,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_18 = (int)sVar2;
      if ((local_18 != -1) && (local_18 != 0)) {
        local_38[(long)local_18] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (((int)local_c < 1) || (2000 < (int)local_c)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(local_c);
    printLine("Sleep time OK");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ef66) */

void goodG2B1(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B2(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void CWE400_Resource_Exhaustion__listen_socket_sleep_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_68_badData = rand();
    CWE400_Resource_Exhaustion__rand_sleep_68_badData =
         CWE400_Resource_Exhaustion__rand_sleep_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE400_Resource_Exhaustion__rand_sleep_68_goodG2BData = 0x14;
  CWE400_Resource_Exhaustion__rand_sleep_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData = rand();
    CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData =
         CWE400_Resource_Exhaustion__rand_sleep_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE400_Resource_Exhaustion__rand_sleep_68b_goodB2GSink();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_20 = 0;
  while (local_20 < (ulong)(long)(int)uVar1) {
    printLine("Hello");
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong local_20;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x15)) {
    local_20 = 0;
    while (local_20 < (ulong)(long)(int)uVar1) {
      printLine("Hello");
      local_20 = local_20 + 1;
    }
  }
  return;
}


void goodG2B(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 0x14) {
    printLine("Hello");
    local_10 = local_10 + 1;
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_for_loop_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  usleep(__useconds);
  printLine("Sleep time possibly too long");
  return;
}


void goodG2B(void)

{
  usleep(0x14);
  printLine("Sleep time possibly too long");
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __useconds_t __useconds;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    __useconds = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((int)__useconds < 1) || (2000 < (int)__useconds)) {
    printLine("Sleep time too long");
  }
  else {
    usleep(__useconds);
    printLine("Sleep time OK");
  }
  return;
}


void CWE400_Resource_Exhaustion__rand_sleep_34_good(void)

{
  goodG2B();
  goodB2G();
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
  printf((char *)(double)fParm1,&DAT_00426f79);
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
  printf(pcParm1,&DAT_00426f96);
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
    __isoc99_sscanf(lVar1,&DAT_00426fa4,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00426fac,&local_14);
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

