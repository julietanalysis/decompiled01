
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___006a8ff8;
  if (PTR___gmon_start___006a8ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400bf0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_006a9010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_006a9018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_006a9020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_006a9028)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_006a9030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_006a9038)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_006a9040)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_006a9048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_006a9050)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_006a9058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_006a9060)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_006a9068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_006a9070)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_006a9078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_006a9080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_006a9088)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_006a9090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_006a9098)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_006a90a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006a90a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_006a90b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_006a90b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_006a90c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006a90c8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006a90d0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006a90d8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_006a90e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006a90e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006a90f0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006a90f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_006a9100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006a9108)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006a9110)();
  return tVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
  in_addr_t iVar1;
  
  iVar1 = (*(code *)PTR_inet_addr_006a9118)();
  return iVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___006a8ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400e67) */
/* WARNING: Removing unreachable block (ram,0x00400e71) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400ea4) */
/* WARNING: Removing unreachable block (ram,0x00400eae) */

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


/* WARNING: Removing unreachable block (ram,0x00400ef4) */
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
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_12_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_17_good();");
  CWE191_Integer_Underflow__int_rand_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_13_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_15_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_06_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_32_good();");
  CWE191_Integer_Underflow__short_rand_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_01_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_65_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_67_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_17_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_09_good();");
  CWE191_Integer_Underflow__char_min_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_03_good();");
  CWE191_Integer_Underflow__int_min_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_18_good();");
  CWE191_Integer_Underflow__int_rand_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_13_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_53_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_02_good();");
  CWE191_Integer_Underflow__int_rand_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_51_good();");
  CWE191_Integer_Underflow__int_min_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_54_good();");
  CWE191_Integer_Underflow__short_rand_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_18_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_02_good();");
  CWE191_Integer_Underflow__char_min_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_68_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_66_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_51_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_10_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_21_good();");
  CWE191_Integer_Underflow__short_rand_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_34_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_31_good();");
  CWE191_Integer_Underflow__int_min_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_42_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_51_good();");
  CWE191_Integer_Underflow__int_fgets_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_06_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_45_good();");
  CWE191_Integer_Underflow__int_fgets_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_16_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_64_good();");
  CWE191_Integer_Underflow__int_fgets_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_64_good();");
  CWE191_Integer_Underflow__char_min_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_52_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_13_good();");
  CWE191_Integer_Underflow__short_min_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_65_good();");
  CWE191_Integer_Underflow__short_min_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_11_good();");
  CWE191_Integer_Underflow__int_min_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_11_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_31_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_09_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_31_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_32_good();");
  CWE191_Integer_Underflow__short_min_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_65_good();");
  CWE191_Integer_Underflow__int_rand_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_08_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_52_good();");
  CWE191_Integer_Underflow__short_min_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_66_good();");
  CWE191_Integer_Underflow__short_min_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_63_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_21_good();");
  CWE191_Integer_Underflow__int_fgets_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_12_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_45_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_52_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_42_good();");
  CWE191_Integer_Underflow__int_min_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_10_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_45_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_42_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_32_good();");
  CWE191_Integer_Underflow__int_min_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_05_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_52_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_51_good();");
  CWE191_Integer_Underflow__short_min_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_45_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_12_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_53_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_11_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_02_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_02_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_65_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_54_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_16_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_06_good();");
  CWE191_Integer_Underflow__int_rand_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_07_good();");
  CWE191_Integer_Underflow__char_min_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_32_good();");
  CWE191_Integer_Underflow__char_min_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_09_good();");
  CWE191_Integer_Underflow__int_rand_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_53_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_45_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_05_good();");
  CWE191_Integer_Underflow__short_min_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_15_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_32_good();");
  CWE191_Integer_Underflow__int_rand_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_63_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_68_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_08_good();");
  CWE191_Integer_Underflow__int_rand_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_67_good();");
  CWE191_Integer_Underflow__short_rand_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_54_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_16_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_67_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_22_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_06_good();");
  CWE191_Integer_Underflow__int_min_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_67_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_21_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_64_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_21_good();");
  CWE191_Integer_Underflow__char_min_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_61_good();");
  CWE191_Integer_Underflow__char_min_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_52_good();");
  CWE191_Integer_Underflow__int_fgets_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_52_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_15_good();");
  CWE191_Integer_Underflow__short_rand_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_53_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_02_good();");
  CWE191_Integer_Underflow__int_fgets_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_17_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_67_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_68_good();");
  CWE191_Integer_Underflow__int_fgets_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_05_good();");
  CWE191_Integer_Underflow__char_min_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_13_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_64_good();");
  CWE191_Integer_Underflow__char_rand_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_08_good();");
  CWE191_Integer_Underflow__char_rand_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_21_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_63_good();");
  CWE191_Integer_Underflow__short_min_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_63_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_16_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_11_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_08_good();");
  CWE191_Integer_Underflow__short_rand_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_32_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_32_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_52_good();");
  CWE191_Integer_Underflow__char_min_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_10_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_13_good();");
  CWE191_Integer_Underflow__int_fgets_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_51_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_12_good();");
  CWE191_Integer_Underflow__int_rand_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_11_good();");
  CWE191_Integer_Underflow__int_rand_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_02_good();");
  CWE191_Integer_Underflow__short_rand_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_64_good();");
  CWE191_Integer_Underflow__short_rand_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_14_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_63_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_34_good();");
  CWE191_Integer_Underflow__short_min_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_09_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_61_good();");
  CWE191_Integer_Underflow__int_rand_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_14_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_31_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_21_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_64_good();");
  CWE191_Integer_Underflow__int_min_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_15_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_67_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_10_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_16_good();");
  CWE191_Integer_Underflow__int_min_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_01_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_15_good();");
  CWE191_Integer_Underflow__int_fgets_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_65_good();");
  CWE191_Integer_Underflow__char_rand_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_41_good();");
  CWE191_Integer_Underflow__short_rand_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_44_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_61_good();");
  CWE191_Integer_Underflow__int_min_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_18_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_05_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_09_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_10_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_44_good();");
  CWE191_Integer_Underflow__char_rand_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_34_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_14_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_12_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_14_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_68_good();");
  CWE191_Integer_Underflow__char_min_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_06_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_18_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_52_good();");
  CWE191_Integer_Underflow__short_rand_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_45_good();");
  CWE191_Integer_Underflow__int_rand_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_68_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_14_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_09_good();");
  CWE191_Integer_Underflow__char_rand_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_08_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_66_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_41_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_04_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_15_good();");
  CWE191_Integer_Underflow__int_min_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_17_good();");
  CWE191_Integer_Underflow__int_min_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_04_good();");
  CWE191_Integer_Underflow__int_rand_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_22_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_41_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_65_good();");
  CWE191_Integer_Underflow__short_rand_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_07_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_32_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_06_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_03_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_08_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_61_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_61_good();");
  CWE191_Integer_Underflow__short_min_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_15_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_10_good();");
  CWE191_Integer_Underflow__int_min_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_32_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_17_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_18_good();");
  CWE191_Integer_Underflow__short_min_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_51_good();");
  CWE191_Integer_Underflow__short_rand_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_15_good();");
  CWE191_Integer_Underflow__int_rand_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_13_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_17_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_66_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_68_good();");
  CWE191_Integer_Underflow__short_min_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_14_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_63_good();");
  CWE191_Integer_Underflow__int_fgets_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_61_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_45_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_66_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_51_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_53_good();");
  CWE191_Integer_Underflow__short_rand_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_14_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_67_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_10_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_64_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_11_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_44_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_22_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_09_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_09_good();");
  CWE191_Integer_Underflow__int_fgets_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_06_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_34_good();");
  CWE191_Integer_Underflow__int_fgets_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_01_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_68_good();");
  CWE191_Integer_Underflow__int_min_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_51_good();");
  CWE191_Integer_Underflow__char_rand_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_51_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_53_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_11_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_22_good();");
  CWE191_Integer_Underflow__int_rand_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_13_good();");
  CWE191_Integer_Underflow__int_rand_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_11_good();");
  CWE191_Integer_Underflow__char_min_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_02_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_12_good();");
  CWE191_Integer_Underflow__short_min_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_51_good();");
  CWE191_Integer_Underflow__char_min_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_03_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_01_good();");
  CWE191_Integer_Underflow__int_rand_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_02_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_31_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_67_good();");
  CWE191_Integer_Underflow__int_rand_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_42_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_01_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_17_good();");
  CWE191_Integer_Underflow__short_rand_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_07_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_34_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_06_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_65_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_15_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_18_good();");
  CWE191_Integer_Underflow__int_fgets_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_08_good();");
  CWE191_Integer_Underflow__short_min_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_67_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_10_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_61_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_01_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_22_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_53_good();");
  CWE191_Integer_Underflow__char_min_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_64_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_67_good();");
  CWE191_Integer_Underflow__char_min_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_02_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_08_good();");
  CWE191_Integer_Underflow__int_min_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_41_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_10_good();");
  CWE191_Integer_Underflow__int_rand_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_34_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_44_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_21_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_08_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_04_good();");
  CWE191_Integer_Underflow__short_min_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_10_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_05_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_31_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_61_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_08_good();");
  CWE191_Integer_Underflow__int_fgets_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_06_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_64_good();");
  CWE191_Integer_Underflow__int_rand_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_11_good();");
  CWE191_Integer_Underflow__char_rand_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_45_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_44_good();");
  CWE191_Integer_Underflow__int_rand_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_52_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_12_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_08_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_65_good();");
  CWE191_Integer_Underflow__char_min_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_17_good();");
  CWE191_Integer_Underflow__int_fgets_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_42_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_05_good();");
  CWE191_Integer_Underflow__char_rand_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_64_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_67_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_45_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_02_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_16_good();");
  CWE191_Integer_Underflow__char_rand_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_04_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_06_good();");
  CWE191_Integer_Underflow__int_fgets_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_15_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_54_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_13_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_18_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_05_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_41_good();");
  CWE191_Integer_Underflow__int_rand_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_22_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_03_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_67_good();");
  CWE191_Integer_Underflow__int_fgets_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_18_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_63_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_03_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_07_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_65_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_15_good();");
  CWE191_Integer_Underflow__char_rand_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_68_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_63_good();");
  CWE191_Integer_Underflow__int_min_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_21_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_13_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_32_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_16_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_32_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_03_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_02_good();");
  CWE191_Integer_Underflow__int_min_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_09_good();");
  CWE191_Integer_Underflow__int_min_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_13_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_08_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_41_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_66_good();");
  CWE191_Integer_Underflow__int_min_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_07_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_17_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_12_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_54_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_04_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_11_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_31_good();");
  CWE191_Integer_Underflow__int_fgets_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_09_good();");
  CWE191_Integer_Underflow__short_rand_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_63_good();");
  CWE191_Integer_Underflow__char_min_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_65_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_63_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_44_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_21_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_02_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_06_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_65_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_10_good();");
  CWE191_Integer_Underflow__char_min_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_18_good();");
  CWE191_Integer_Underflow__char_rand_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_53_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_11_good();");
  CWE191_Integer_Underflow__short_min_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_12_good();");
  CWE191_Integer_Underflow__short_rand_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_67_good();");
  CWE191_Integer_Underflow__char_rand_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_31_good();");
  CWE191_Integer_Underflow__short_rand_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_18_good();");
  CWE191_Integer_Underflow__int_min_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_34_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_15_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_52_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_08_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_05_good();");
  CWE191_Integer_Underflow__int_rand_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_52_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_32_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_61_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_07_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_52_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_16_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_16_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_61_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_42_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_22_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_07_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_07_good();");
  CWE191_Integer_Underflow__short_min_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_51_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_18_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_42_good();");
  CWE191_Integer_Underflow__short_rand_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_44_good();");
  CWE191_Integer_Underflow__char_min_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_32_good();");
  CWE191_Integer_Underflow__int_fgets_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_31_good();");
  CWE191_Integer_Underflow__char_min_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_53_good();");
  CWE191_Integer_Underflow__int_min_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_45_good();");
  CWE191_Integer_Underflow__short_rand_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_66_good();");
  CWE191_Integer_Underflow__short_rand_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_02_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_17_good();");
  CWE191_Integer_Underflow__char_rand_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_44_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_16_good();");
  CWE191_Integer_Underflow__short_min_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_54_good();");
  CWE191_Integer_Underflow__int_fgets_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_04_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_65_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_10_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_06_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_16_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_22_good();");
  CWE191_Integer_Underflow__char_min_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_53_good();");
  CWE191_Integer_Underflow__char_rand_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_17_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_41_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_17_good();");
  CWE191_Integer_Underflow__short_min_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_06_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_52_good();");
  CWE191_Integer_Underflow__int_rand_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_64_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_12_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_54_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_66_good();");
  CWE191_Integer_Underflow__int_fgets_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_08_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_07_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_61_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_31_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_68_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_04_good();");
  CWE191_Integer_Underflow__int_min_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_04_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_16_good();");
  CWE191_Integer_Underflow__int_fgets_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_12_good();");
  CWE191_Integer_Underflow__char_min_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_21_good();");
  CWE191_Integer_Underflow__int_min_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_03_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_01_good();");
  CWE191_Integer_Underflow__int_min_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_22_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_21_good();");
  CWE191_Integer_Underflow__char_rand_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_06_good();");
  CWE191_Integer_Underflow__short_min_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_44_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_14_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_02_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_08_good();");
  CWE191_Integer_Underflow__char_min_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_67_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_16_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_66_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_68_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_41_good();");
  CWE191_Integer_Underflow__int_min_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_04_good();");
  CWE191_Integer_Underflow__char_min_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_41_good();");
  CWE191_Integer_Underflow__char_rand_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_54_good();");
  CWE191_Integer_Underflow__short_min_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_31_good();");
  CWE191_Integer_Underflow__short_min_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_13_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_41_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_17_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_03_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_61_good();");
  CWE191_Integer_Underflow__char_rand_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_18_good();");
  CWE191_Integer_Underflow__short_rand_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_34_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_21_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_61_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_44_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_04_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_06_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_65_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_05_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_07_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_64_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_42_good();");
  CWE191_Integer_Underflow__int_fgets_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_12_good();");
  CWE191_Integer_Underflow__char_rand_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_15_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_02_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_18_good();");
  CWE191_Integer_Underflow__char_min_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_63_good();");
  CWE191_Integer_Underflow__short_rand_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_54_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_53_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_17_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_14_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_45_good();");
  CWE191_Integer_Underflow__short_min_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_41_good();");
  CWE191_Integer_Underflow__char_min_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_41_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_41_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_31_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_51_good();");
  CWE191_Integer_Underflow__int_rand_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_64_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_34_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_54_good();");
  CWE191_Integer_Underflow__int_rand_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_63_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_01_good();");
  CWE191_Integer_Underflow__short_min_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_17_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_41_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_22_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_13_good();");
  CWE191_Integer_Underflow__short_rand_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_08_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_11_good();");
  CWE191_Integer_Underflow__short_rand_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_13_good();");
  CWE191_Integer_Underflow__int_min_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_42_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_11_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_04_good();");
  CWE191_Integer_Underflow__short_rand_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_02_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_54_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_09_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_03_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_54_good();");
  CWE191_Integer_Underflow__char_rand_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_02_good();");
  CWE191_Integer_Underflow__short_min_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_16_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_01_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_13_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_11_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_22_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_22_good();");
  CWE191_Integer_Underflow__short_rand_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_45_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_18_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_16_good();");
  CWE191_Integer_Underflow__short_rand_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_12_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_05_good();");
  CWE191_Integer_Underflow__int_fgets_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_54_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_22_good();");
  CWE191_Integer_Underflow__char_rand_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_45_good();");
  CWE191_Integer_Underflow__char_min_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_45_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_04_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_12_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_18_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_07_good();");
  CWE191_Integer_Underflow__int_min_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_31_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_66_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_01_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_21_good();");
  CWE191_Integer_Underflow__short_min_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_15_good();");
  CWE191_Integer_Underflow__short_min_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_34_good();");
  CWE191_Integer_Underflow__short_rand_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_44_good();");
  CWE191_Integer_Underflow__int_fgets_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_13_good();");
  CWE191_Integer_Underflow__char_min_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_09_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_53_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_53_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_07_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_54_good();");
  CWE191_Integer_Underflow__int_min_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_04_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_64_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_01_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_16_good();");
  CWE191_Integer_Underflow__int_rand_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_31_good();");
  CWE191_Integer_Underflow__char_rand_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_02_good();");
  CWE191_Integer_Underflow__char_rand_predec_02_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_67_good();");
  CWE191_Integer_Underflow__short_min_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_07_good();");
  CWE191_Integer_Underflow__short_rand_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_52_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_68_good();");
  CWE191_Integer_Underflow__int_rand_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_04_good();");
  CWE191_Integer_Underflow__char_rand_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_11_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_18_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_01_good();");
  CWE191_Integer_Underflow__short_rand_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_64_good();");
  CWE191_Integer_Underflow__short_min_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_51_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_15_good();");
  CWE191_Integer_Underflow__char_min_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_34_good();");
  CWE191_Integer_Underflow__char_rand_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_14_good();");
  CWE191_Integer_Underflow__int_fgets_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_54_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_66_good();");
  CWE191_Integer_Underflow__int_rand_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_61_good();");
  CWE191_Integer_Underflow__int_fgets_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_22_good();");
  CWE191_Integer_Underflow__int_min_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_03_good();");
  CWE191_Integer_Underflow__char_min_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_03_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_01_good();");
  CWE191_Integer_Underflow__char_min_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_68_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_14_good();");
  CWE191_Integer_Underflow__int_rand_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_22_good();");
  CWE191_Integer_Underflow__int_fgets_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_09_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_64_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_68_good();");
  CWE191_Integer_Underflow__char_rand_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_32_good();");
  CWE191_Integer_Underflow__char_rand_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_67_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_05_good();");
  CWE191_Integer_Underflow__short_rand_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_12_good();");
  CWE191_Integer_Underflow__int_min_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_15_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_51_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_22_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_14_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_44_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_06_good();");
  CWE191_Integer_Underflow__char_min_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_61_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_31_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_10_good();");
  CWE191_Integer_Underflow__int_fgets_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_42_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_34_good();");
  CWE191_Integer_Underflow__char_min_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_04_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_44_good();");
  CWE191_Integer_Underflow__short_min_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_63_good();");
  CWE191_Integer_Underflow__int_rand_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_16_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_51_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_54_good();");
  CWE191_Integer_Underflow__char_min_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_21_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_14_good();");
  CWE191_Integer_Underflow__char_min_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_03_good();");
  CWE191_Integer_Underflow__int_rand_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_34_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_09_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_63_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_45_good();");
  CWE191_Integer_Underflow__char_rand_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_53_good();");
  CWE191_Integer_Underflow__int_fgets_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_52_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_51_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_21_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_34_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_52_good();");
  CWE191_Integer_Underflow__int_min_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_32_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_66_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_42_good();");
  CWE191_Integer_Underflow__int_rand_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_15_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_32_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_07_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_34_good();");
  CWE191_Integer_Underflow__int_min_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_31_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_21_good();");
  CWE191_Integer_Underflow__int_rand_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_42_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_44_good();");
  CWE191_Integer_Underflow__short_rand_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_01_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_13_good();");
  CWE191_Integer_Underflow__char_rand_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_12_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_05_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_68_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_68_good();");
  CWE191_Integer_Underflow__short_rand_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_03_good();");
  CWE191_Integer_Underflow__char_rand_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_07_good();");
  CWE191_Integer_Underflow__int_fgets_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_05_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_65_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_08_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_66_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_01_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_41_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_09_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_14_good();");
  CWE191_Integer_Underflow__short_rand_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_01_good();");
  CWE191_Integer_Underflow__char_rand_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_03_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_65_good();");
  CWE191_Integer_Underflow__int_min_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_16_good();");
  CWE191_Integer_Underflow__char_min_predec_16_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_42_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_14_good();");
  CWE191_Integer_Underflow__short_min_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_44_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_67_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_53_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_05_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_04_good();");
  CWE191_Integer_Underflow__int_fgets_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_09_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_12_good();");
  CWE191_Integer_Underflow__int_fgets_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_66_good();");
  CWE191_Integer_Underflow__char_rand_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_44_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_01_good();");
  CWE191_Integer_Underflow__int_fgets_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_06_good();");
  CWE191_Integer_Underflow__char_rand_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_34_good();");
  CWE191_Integer_Underflow__int_rand_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_44_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_52_good();");
  CWE191_Integer_Underflow__char_rand_predec_52_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_03_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_42_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_08_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_08_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_18_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_42_good();");
  CWE191_Integer_Underflow__short_min_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_66_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_51_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_51_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_41_good();");
  CWE191_Integer_Underflow__int_fgets_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_45_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_34_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_34_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_22_good();");
  CWE191_Integer_Underflow__short_min_predec_22_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_15_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_15_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_03_good();");
  CWE191_Integer_Underflow__int_fgets_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_65_good();");
  CWE191_Integer_Underflow__int_fgets_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_63_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_42_good();");
  CWE191_Integer_Underflow__char_rand_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_17_good();");
  CWE191_Integer_Underflow__int64_t_min_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_21_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_13_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_65_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_68_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_61_good();");
  CWE191_Integer_Underflow__short_rand_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_04_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_66_good();");
  CWE191_Integer_Underflow__char_min_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_41_good();");
  CWE191_Integer_Underflow__short_min_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_17_good();");
  CWE191_Integer_Underflow__char_min_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_07_good();");
  CWE191_Integer_Underflow__char_rand_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_45_good();");
  CWE191_Integer_Underflow__int_min_predec_45_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_42_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_11_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_42_good();");
  CWE191_Integer_Underflow__char_min_predec_42_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_66_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_66_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_10_good();");
  CWE191_Integer_Underflow__short_min_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_09_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_54_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_61_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_09_good();");
  CWE191_Integer_Underflow__short_min_predec_09_good();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_11_good();");
  CWE191_Integer_Underflow__int_fgets_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_07_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_61_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_61_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_32_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_10_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_31_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_68_good();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_68_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_01_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_01_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_13_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_13_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_64_good();");
  CWE191_Integer_Underflow__int64_t_rand_predec_64_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_10_good();");
  CWE191_Integer_Underflow__short_rand_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_32_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_32_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_04_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_04_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_17_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_17_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_53_good();");
  CWE191_Integer_Underflow__int_rand_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_07_good();");
  CWE191_Integer_Underflow__int_rand_predec_07_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_53_good();");
  CWE191_Integer_Underflow__short_min_predec_53_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_05_good();");
  CWE191_Integer_Underflow__int_min_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_54_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_54_good();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_05_good();");
  CWE191_Integer_Underflow__short_fscanf_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_41_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_41_good();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_31_good();");
  CWE191_Integer_Underflow__int_rand_predec_31_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_21_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_21_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_18_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_18_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_10_good();");
  CWE191_Integer_Underflow__char_rand_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_11_good();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_11_good();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_03_good();");
  CWE191_Integer_Underflow__short_min_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_14_good();");
  CWE191_Integer_Underflow__int_min_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_44_good();");
  CWE191_Integer_Underflow__int_min_predec_44_good();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_67_good();");
  CWE191_Integer_Underflow__int_min_predec_67_good();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_63_good();");
  CWE191_Integer_Underflow__int_fscanf_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65_good();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_14_good();");
  CWE191_Integer_Underflow__char_rand_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_05_good();");
  CWE191_Integer_Underflow__int_listen_socket_predec_05_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_06_good();");
  CWE191_Integer_Underflow__short_rand_predec_06_good();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_10_good();");
  CWE191_Integer_Underflow__char_fscanf_predec_10_good();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_63_good();");
  CWE191_Integer_Underflow__char_rand_predec_63_good();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_03_good();");
  CWE191_Integer_Underflow__short_rand_predec_03_good();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_12_good();");
  CWE191_Integer_Underflow__int_connect_socket_predec_12_good();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_14_good();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_14_good();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_12_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_17_bad();");
  CWE191_Integer_Underflow__int_rand_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_13_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_15_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_06_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_32_bad();");
  CWE191_Integer_Underflow__short_rand_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_01_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_65_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_67_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_17_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_09_bad();");
  CWE191_Integer_Underflow__char_min_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_03_bad();");
  CWE191_Integer_Underflow__int_min_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_18_bad();");
  CWE191_Integer_Underflow__int_rand_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_13_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_53_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_02_bad();");
  CWE191_Integer_Underflow__int_rand_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_51_bad();");
  CWE191_Integer_Underflow__int_min_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_54_bad();");
  CWE191_Integer_Underflow__short_rand_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_18_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_02_bad();");
  CWE191_Integer_Underflow__char_min_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_68_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_66_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_51_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_10_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_21_bad();");
  CWE191_Integer_Underflow__short_rand_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_34_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_31_bad();");
  CWE191_Integer_Underflow__int_min_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_42_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_51_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_06_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_45_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_16_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_64_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_64_bad();");
  CWE191_Integer_Underflow__char_min_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_52_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_13_bad();");
  CWE191_Integer_Underflow__short_min_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_65_bad();");
  CWE191_Integer_Underflow__short_min_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_11_bad();");
  CWE191_Integer_Underflow__int_min_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_11_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_31_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_09_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_31_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_32_bad();");
  CWE191_Integer_Underflow__short_min_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_65_bad();");
  CWE191_Integer_Underflow__int_rand_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_08_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_52_bad();");
  CWE191_Integer_Underflow__short_min_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_66_bad();");
  CWE191_Integer_Underflow__short_min_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_63_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_21_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_12_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_45_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_52_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_42_bad();");
  CWE191_Integer_Underflow__int_min_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_10_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_45_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_42_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_32_bad();");
  CWE191_Integer_Underflow__int_min_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_05_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_52_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_51_bad();");
  CWE191_Integer_Underflow__short_min_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_45_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_12_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_53_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_11_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_02_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_02_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_65_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_54_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_16_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_06_bad();");
  CWE191_Integer_Underflow__int_rand_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_07_bad();");
  CWE191_Integer_Underflow__char_min_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_32_bad();");
  CWE191_Integer_Underflow__char_min_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_09_bad();");
  CWE191_Integer_Underflow__int_rand_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_53_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_45_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_05_bad();");
  CWE191_Integer_Underflow__short_min_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_15_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_32_bad();");
  CWE191_Integer_Underflow__int_rand_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_63_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_68_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_08_bad();");
  CWE191_Integer_Underflow__int_rand_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_67_bad();");
  CWE191_Integer_Underflow__short_rand_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_54_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_16_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_67_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_22_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_06_bad();");
  CWE191_Integer_Underflow__int_min_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_67_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_21_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_64_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_21_bad();");
  CWE191_Integer_Underflow__char_min_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_61_bad();");
  CWE191_Integer_Underflow__char_min_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_52_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_52_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_15_bad();");
  CWE191_Integer_Underflow__short_rand_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_53_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_02_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_17_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_67_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_68_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_05_bad();");
  CWE191_Integer_Underflow__char_min_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_13_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_64_bad();");
  CWE191_Integer_Underflow__char_rand_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_08_bad();");
  CWE191_Integer_Underflow__char_rand_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_21_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_63_bad();");
  CWE191_Integer_Underflow__short_min_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_63_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_16_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_11_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_08_bad();");
  CWE191_Integer_Underflow__short_rand_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_32_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_32_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_52_bad();");
  CWE191_Integer_Underflow__char_min_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_10_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_13_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_51_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_12_bad();");
  CWE191_Integer_Underflow__int_rand_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_11_bad();");
  CWE191_Integer_Underflow__int_rand_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_02_bad();");
  CWE191_Integer_Underflow__short_rand_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_64_bad();");
  CWE191_Integer_Underflow__short_rand_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_14_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_63_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_34_bad();");
  CWE191_Integer_Underflow__short_min_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_09_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_61_bad();");
  CWE191_Integer_Underflow__int_rand_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_14_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_31_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_21_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_64_bad();");
  CWE191_Integer_Underflow__int_min_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_15_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_67_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_10_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_16_bad();");
  CWE191_Integer_Underflow__int_min_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_01_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_15_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_65_bad();");
  CWE191_Integer_Underflow__char_rand_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_41_bad();");
  CWE191_Integer_Underflow__short_rand_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_44_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_61_bad();");
  CWE191_Integer_Underflow__int_min_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_18_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_05_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_09_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_10_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_44_bad();");
  CWE191_Integer_Underflow__char_rand_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_34_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_14_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_12_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_14_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_68_bad();");
  CWE191_Integer_Underflow__char_min_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_06_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_18_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_52_bad();");
  CWE191_Integer_Underflow__short_rand_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_45_bad();");
  CWE191_Integer_Underflow__int_rand_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_68_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_14_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_09_bad();");
  CWE191_Integer_Underflow__char_rand_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_08_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_66_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_41_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_04_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_15_bad();");
  CWE191_Integer_Underflow__int_min_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_17_bad();");
  CWE191_Integer_Underflow__int_min_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_04_bad();");
  CWE191_Integer_Underflow__int_rand_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_22_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_41_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_65_bad();");
  CWE191_Integer_Underflow__short_rand_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_07_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_32_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_06_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_03_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_08_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_61_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_61_bad();");
  CWE191_Integer_Underflow__short_min_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_15_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_10_bad();");
  CWE191_Integer_Underflow__int_min_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_32_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_17_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_18_bad();");
  CWE191_Integer_Underflow__short_min_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_51_bad();");
  CWE191_Integer_Underflow__short_rand_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_15_bad();");
  CWE191_Integer_Underflow__int_rand_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_13_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_17_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_66_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_68_bad();");
  CWE191_Integer_Underflow__short_min_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_14_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_63_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_61_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_45_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_66_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_51_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_53_bad();");
  CWE191_Integer_Underflow__short_rand_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_14_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_67_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_10_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_64_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_11_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_44_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_22_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_09_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_09_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_06_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_34_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_01_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_68_bad();");
  CWE191_Integer_Underflow__int_min_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_51_bad();");
  CWE191_Integer_Underflow__char_rand_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_51_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_53_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_11_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_22_bad();");
  CWE191_Integer_Underflow__int_rand_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_13_bad();");
  CWE191_Integer_Underflow__int_rand_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_11_bad();");
  CWE191_Integer_Underflow__char_min_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_02_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_12_bad();");
  CWE191_Integer_Underflow__short_min_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_51_bad();");
  CWE191_Integer_Underflow__char_min_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_03_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_01_bad();");
  CWE191_Integer_Underflow__int_rand_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_02_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_31_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_67_bad();");
  CWE191_Integer_Underflow__int_rand_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_42_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_01_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_17_bad();");
  CWE191_Integer_Underflow__short_rand_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_07_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_34_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_06_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_65_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_15_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_18_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_08_bad();");
  CWE191_Integer_Underflow__short_min_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_67_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_10_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_61_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_01_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_22_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_53_bad();");
  CWE191_Integer_Underflow__char_min_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_64_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_67_bad();");
  CWE191_Integer_Underflow__char_min_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_02_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_08_bad();");
  CWE191_Integer_Underflow__int_min_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_41_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_10_bad();");
  CWE191_Integer_Underflow__int_rand_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_34_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_44_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_21_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_08_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_04_bad();");
  CWE191_Integer_Underflow__short_min_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_10_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_05_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_31_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_61_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_08_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_06_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_64_bad();");
  CWE191_Integer_Underflow__int_rand_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_11_bad();");
  CWE191_Integer_Underflow__char_rand_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_45_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_44_bad();");
  CWE191_Integer_Underflow__int_rand_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_52_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_12_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_08_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_65_bad();");
  CWE191_Integer_Underflow__char_min_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_17_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_42_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_05_bad();");
  CWE191_Integer_Underflow__char_rand_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_64_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_67_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_45_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_02_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_16_bad();");
  CWE191_Integer_Underflow__char_rand_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_04_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_06_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_15_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_54_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_13_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_18_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_05_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_41_bad();");
  CWE191_Integer_Underflow__int_rand_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_22_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_03_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_67_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_18_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_63_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_03_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_07_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_65_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_15_bad();");
  CWE191_Integer_Underflow__char_rand_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_68_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_63_bad();");
  CWE191_Integer_Underflow__int_min_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_21_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_13_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_32_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_16_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_32_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_03_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_02_bad();");
  CWE191_Integer_Underflow__int_min_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_09_bad();");
  CWE191_Integer_Underflow__int_min_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_13_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_08_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_41_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_66_bad();");
  CWE191_Integer_Underflow__int_min_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_07_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_17_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_12_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_54_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_04_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_11_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_31_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_09_bad();");
  CWE191_Integer_Underflow__short_rand_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_63_bad();");
  CWE191_Integer_Underflow__char_min_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_65_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_63_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_44_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_21_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_02_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_06_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_65_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_10_bad();");
  CWE191_Integer_Underflow__char_min_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_18_bad();");
  CWE191_Integer_Underflow__char_rand_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_53_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_11_bad();");
  CWE191_Integer_Underflow__short_min_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_12_bad();");
  CWE191_Integer_Underflow__short_rand_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_67_bad();");
  CWE191_Integer_Underflow__char_rand_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_31_bad();");
  CWE191_Integer_Underflow__short_rand_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_18_bad();");
  CWE191_Integer_Underflow__int_min_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_34_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_15_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_52_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_08_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_05_bad();");
  CWE191_Integer_Underflow__int_rand_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_52_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_32_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_61_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_07_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_52_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_16_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_16_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_61_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_42_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_22_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_07_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_07_bad();");
  CWE191_Integer_Underflow__short_min_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_51_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_18_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_42_bad();");
  CWE191_Integer_Underflow__short_rand_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_44_bad();");
  CWE191_Integer_Underflow__char_min_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_32_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_31_bad();");
  CWE191_Integer_Underflow__char_min_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_53_bad();");
  CWE191_Integer_Underflow__int_min_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_45_bad();");
  CWE191_Integer_Underflow__short_rand_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_66_bad();");
  CWE191_Integer_Underflow__short_rand_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_02_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_17_bad();");
  CWE191_Integer_Underflow__char_rand_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_44_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_16_bad();");
  CWE191_Integer_Underflow__short_min_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_54_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_04_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_65_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_10_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_06_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_16_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_22_bad();");
  CWE191_Integer_Underflow__char_min_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_53_bad();");
  CWE191_Integer_Underflow__char_rand_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_17_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_41_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_17_bad();");
  CWE191_Integer_Underflow__short_min_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_06_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_52_bad();");
  CWE191_Integer_Underflow__int_rand_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_64_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_12_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_54_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_66_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_08_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_07_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_61_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_31_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_68_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_04_bad();");
  CWE191_Integer_Underflow__int_min_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_04_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_16_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_12_bad();");
  CWE191_Integer_Underflow__char_min_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_21_bad();");
  CWE191_Integer_Underflow__int_min_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_03_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_01_bad();");
  CWE191_Integer_Underflow__int_min_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_22_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_21_bad();");
  CWE191_Integer_Underflow__char_rand_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_06_bad();");
  CWE191_Integer_Underflow__short_min_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_44_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_14_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_02_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_08_bad();");
  CWE191_Integer_Underflow__char_min_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_67_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_16_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_66_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_68_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_41_bad();");
  CWE191_Integer_Underflow__int_min_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_04_bad();");
  CWE191_Integer_Underflow__char_min_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_41_bad();");
  CWE191_Integer_Underflow__char_rand_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_54_bad();");
  CWE191_Integer_Underflow__short_min_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_31_bad();");
  CWE191_Integer_Underflow__short_min_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_13_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_41_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_17_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_03_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_61_bad();");
  CWE191_Integer_Underflow__char_rand_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_18_bad();");
  CWE191_Integer_Underflow__short_rand_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_34_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_21_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_61_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_44_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_04_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_06_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_65_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_05_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_07_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_64_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_42_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_12_bad();");
  CWE191_Integer_Underflow__char_rand_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_15_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_02_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_18_bad();");
  CWE191_Integer_Underflow__char_min_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_63_bad();");
  CWE191_Integer_Underflow__short_rand_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_54_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_53_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_17_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_14_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_45_bad();");
  CWE191_Integer_Underflow__short_min_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_41_bad();");
  CWE191_Integer_Underflow__char_min_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_41_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_41_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_31_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_51_bad();");
  CWE191_Integer_Underflow__int_rand_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_64_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_34_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_54_bad();");
  CWE191_Integer_Underflow__int_rand_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_63_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_01_bad();");
  CWE191_Integer_Underflow__short_min_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_17_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_41_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_22_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_13_bad();");
  CWE191_Integer_Underflow__short_rand_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_08_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_11_bad();");
  CWE191_Integer_Underflow__short_rand_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_13_bad();");
  CWE191_Integer_Underflow__int_min_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_42_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_11_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_04_bad();");
  CWE191_Integer_Underflow__short_rand_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_02_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_54_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_09_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_03_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_54_bad();");
  CWE191_Integer_Underflow__char_rand_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_02_bad();");
  CWE191_Integer_Underflow__short_min_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_16_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_01_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_13_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_11_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_22_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_22_bad();");
  CWE191_Integer_Underflow__short_rand_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_45_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_18_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_16_bad();");
  CWE191_Integer_Underflow__short_rand_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_12_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_05_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_54_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_22_bad();");
  CWE191_Integer_Underflow__char_rand_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_45_bad();");
  CWE191_Integer_Underflow__char_min_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_45_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_04_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_12_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_18_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_07_bad();");
  CWE191_Integer_Underflow__int_min_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_31_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_66_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_01_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_21_bad();");
  CWE191_Integer_Underflow__short_min_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_15_bad();");
  CWE191_Integer_Underflow__short_min_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_34_bad();");
  CWE191_Integer_Underflow__short_rand_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_44_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_13_bad();");
  CWE191_Integer_Underflow__char_min_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_09_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_53_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_53_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_07_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_54_bad();");
  CWE191_Integer_Underflow__int_min_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_04_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_64_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_01_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_16_bad();");
  CWE191_Integer_Underflow__int_rand_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_31_bad();");
  CWE191_Integer_Underflow__char_rand_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_02_bad();");
  CWE191_Integer_Underflow__char_rand_predec_02_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_67_bad();");
  CWE191_Integer_Underflow__short_min_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_07_bad();");
  CWE191_Integer_Underflow__short_rand_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_52_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_68_bad();");
  CWE191_Integer_Underflow__int_rand_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_04_bad();");
  CWE191_Integer_Underflow__char_rand_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_11_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_18_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_01_bad();");
  CWE191_Integer_Underflow__short_rand_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_64_bad();");
  CWE191_Integer_Underflow__short_min_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_51_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_15_bad();");
  CWE191_Integer_Underflow__char_min_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_34_bad();");
  CWE191_Integer_Underflow__char_rand_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_14_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_54_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_66_bad();");
  CWE191_Integer_Underflow__int_rand_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_61_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_22_bad();");
  CWE191_Integer_Underflow__int_min_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_03_bad();");
  CWE191_Integer_Underflow__char_min_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_03_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_01_bad();");
  CWE191_Integer_Underflow__char_min_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_68_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_14_bad();");
  CWE191_Integer_Underflow__int_rand_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_22_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_09_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_64_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_68_bad();");
  CWE191_Integer_Underflow__char_rand_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_32_bad();");
  CWE191_Integer_Underflow__char_rand_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_67_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_05_bad();");
  CWE191_Integer_Underflow__short_rand_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_12_bad();");
  CWE191_Integer_Underflow__int_min_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_15_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_51_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_22_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_14_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_44_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_06_bad();");
  CWE191_Integer_Underflow__char_min_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_61_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_31_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_10_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_42_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_34_bad();");
  CWE191_Integer_Underflow__char_min_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_04_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_44_bad();");
  CWE191_Integer_Underflow__short_min_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_63_bad();");
  CWE191_Integer_Underflow__int_rand_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_16_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_51_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_54_bad();");
  CWE191_Integer_Underflow__char_min_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_21_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_14_bad();");
  CWE191_Integer_Underflow__char_min_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_03_bad();");
  CWE191_Integer_Underflow__int_rand_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_34_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_09_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_63_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_45_bad();");
  CWE191_Integer_Underflow__char_rand_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_53_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_52_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_51_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_21_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_34_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_52_bad();");
  CWE191_Integer_Underflow__int_min_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_32_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_66_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_42_bad();");
  CWE191_Integer_Underflow__int_rand_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_15_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_32_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_07_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_34_bad();");
  CWE191_Integer_Underflow__int_min_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_31_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_21_bad();");
  CWE191_Integer_Underflow__int_rand_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_42_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_44_bad();");
  CWE191_Integer_Underflow__short_rand_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_01_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_13_bad();");
  CWE191_Integer_Underflow__char_rand_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_12_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_05_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_68_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_68_bad();");
  CWE191_Integer_Underflow__short_rand_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_03_bad();");
  CWE191_Integer_Underflow__char_rand_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_07_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_05_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_65_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_08_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_66_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_01_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_41_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_09_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_14_bad();");
  CWE191_Integer_Underflow__short_rand_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_01_bad();");
  CWE191_Integer_Underflow__char_rand_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_03_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_65_bad();");
  CWE191_Integer_Underflow__int_min_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_16_bad();");
  CWE191_Integer_Underflow__char_min_predec_16_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_42_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_14_bad();");
  CWE191_Integer_Underflow__short_min_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_44_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_67_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_53_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_05_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_04_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_09_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_12_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_66_bad();");
  CWE191_Integer_Underflow__char_rand_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_44_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_01_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_06_bad();");
  CWE191_Integer_Underflow__char_rand_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_34_bad();");
  CWE191_Integer_Underflow__int_rand_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_44_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_52_bad();");
  CWE191_Integer_Underflow__char_rand_predec_52_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_03_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_42_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_08_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_08_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_18_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_42_bad();");
  CWE191_Integer_Underflow__short_min_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_66_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_51_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_51_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_41_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_45_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_34_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_34_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_22_bad();");
  CWE191_Integer_Underflow__short_min_predec_22_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_15_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_15_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_03_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_65_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_63_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_42_bad();");
  CWE191_Integer_Underflow__char_rand_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_min_predec_17_bad();");
  CWE191_Integer_Underflow__int64_t_min_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_21_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_13_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_65_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_68_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_61_bad();");
  CWE191_Integer_Underflow__short_rand_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_04_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_66_bad();");
  CWE191_Integer_Underflow__char_min_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_41_bad();");
  CWE191_Integer_Underflow__short_min_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_17_bad();");
  CWE191_Integer_Underflow__char_min_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_07_bad();");
  CWE191_Integer_Underflow__char_rand_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_45_bad();");
  CWE191_Integer_Underflow__int_min_predec_45_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_42_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_11_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__char_min_predec_42_bad();");
  CWE191_Integer_Underflow__char_min_predec_42_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_66_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_66_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_10_bad();");
  CWE191_Integer_Underflow__short_min_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_09_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_54_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_61_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_09_bad();");
  CWE191_Integer_Underflow__short_min_predec_09_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fgets_predec_11_bad();");
  CWE191_Integer_Underflow__int_fgets_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_07_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_61_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_61_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_32_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_10_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_31_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_rand_predec_68_bad();");
  CWE191_Integer_Underflow__unsigned_int_rand_predec_68_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_01_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_01_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_13_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_13_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_rand_predec_64_bad();");
  CWE191_Integer_Underflow__int64_t_rand_predec_64_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_10_bad();");
  CWE191_Integer_Underflow__short_rand_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_32_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_32_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_04_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_04_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_17_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_17_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_53_bad();");
  CWE191_Integer_Underflow__int_rand_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_07_bad();");
  CWE191_Integer_Underflow__int_rand_predec_07_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_53_bad();");
  CWE191_Integer_Underflow__short_min_predec_53_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_05_bad();");
  CWE191_Integer_Underflow__int_min_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_54_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_54_bad();
  printLine("Calling CWE191_Integer_Underflow__short_fscanf_predec_05_bad();");
  CWE191_Integer_Underflow__short_fscanf_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_41_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_41_bad();
  printLine("Calling CWE191_Integer_Underflow__int_rand_predec_31_bad();");
  CWE191_Integer_Underflow__int_rand_predec_31_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_21_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_21_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_18_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_18_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_10_bad();");
  CWE191_Integer_Underflow__char_rand_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_min_predec_11_bad();");
  CWE191_Integer_Underflow__unsigned_int_min_predec_11_bad();
  printLine("Calling CWE191_Integer_Underflow__short_min_predec_03_bad();");
  CWE191_Integer_Underflow__short_min_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_14_bad();");
  CWE191_Integer_Underflow__int_min_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_44_bad();");
  CWE191_Integer_Underflow__int_min_predec_44_bad();
  printLine("Calling CWE191_Integer_Underflow__int_min_predec_67_bad();");
  CWE191_Integer_Underflow__int_min_predec_67_bad();
  printLine("Calling CWE191_Integer_Underflow__int_fscanf_predec_63_bad();");
  CWE191_Integer_Underflow__int_fscanf_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65_bad();");
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_14_bad();");
  CWE191_Integer_Underflow__char_rand_predec_14_bad();
  printLine("Calling CWE191_Integer_Underflow__int_listen_socket_predec_05_bad();");
  CWE191_Integer_Underflow__int_listen_socket_predec_05_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_06_bad();");
  CWE191_Integer_Underflow__short_rand_predec_06_bad();
  printLine("Calling CWE191_Integer_Underflow__char_fscanf_predec_10_bad();");
  CWE191_Integer_Underflow__char_fscanf_predec_10_bad();
  printLine("Calling CWE191_Integer_Underflow__char_rand_predec_63_bad();");
  CWE191_Integer_Underflow__char_rand_predec_63_bad();
  printLine("Calling CWE191_Integer_Underflow__short_rand_predec_03_bad();");
  CWE191_Integer_Underflow__short_rand_predec_03_bad();
  printLine("Calling CWE191_Integer_Underflow__int_connect_socket_predec_12_bad();");
  CWE191_Integer_Underflow__int_connect_socket_predec_12_bad();
  printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_predec_14_bad();");
  CWE191_Integer_Underflow__int64_t_fscanf_predec_14_bad();
  return 0;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_21_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


ulong CWE191_Integer_Underflow__short_rand_predec_61b_badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


undefined8 CWE191_Integer_Underflow__short_rand_predec_61b_goodG2BSource(void)

{
  return 0xfffe;
}


ulong CWE191_Integer_Underflow__short_rand_predec_61b_goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_04_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0046fea8,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407e56) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0046fea8,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0046fea8,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407f14) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_predec_45_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_45_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_45_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_predec_45_goodG2BData + -1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_45_goodG2BData = 0xfffffffffffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_predec_45_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_predec_45_goodB2GData + -1);
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_45_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_45_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_21_bad(void)

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
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
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
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
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
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0046ff7e,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0046ff7e,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408705) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408865) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_11_bad(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0046ffe0,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0046ffe0,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
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
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0046ffe0,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_02_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470030,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470030,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470030,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_predec_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_predec_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_rand_predec_61b_goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_21_bad(void)

{
  badStatic = 1;
  badSink(0x80000000);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x80000000);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x80000000);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_03_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408f88) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408fc9) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_predec_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_predec_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_predec_64b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_predec_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_rand_predec_61b_goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_10_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004701a8,&local_10);
  }
  if (globalTrue != 0) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004701a8,&local_10);
  }
  if (globalFalse == 0) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004701a8,&local_10);
  }
  if (globalTrue != 0) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_14_bad(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409867) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004098bb) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__unsigned_int_min_predec_32_bad(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0;
  local_24 = 0xffffffff;
  local_20 = local_24;
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409a90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = local_28;
  local_18 = local_28;
  local_28[0] = 0;
  local_1c = 0;
  local_20 = 0;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004702d0,&local_c);
  local_c = local_c + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004702d0,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004702d0,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_01_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470360,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470360,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004703a0,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__short_fscanf_predec_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004703a0,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_07_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticFive == 5) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470476,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470476,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470476,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_rand_predec_68_badData +
                                           -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(
                                           CWE191_Integer_Underflow__char_rand_predec_68_goodG2BData
                                           + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_rand_predec_68_goodB2GData == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_rand_predec_68_goodB2GData
                                             + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_rand_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_64b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_04_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a784) */
/* WARNING: Removing unreachable block (ram,0x0040a796) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a7e6) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a820) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_31_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a956) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_09_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00470548,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00470548,&local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00470548,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00470598,&local_c);
  }
  if (staticTrue != 0) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00470598,&local_c);
  }
  if (staticFalse == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00470598,&local_c);
  }
  if (staticTrue != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_02_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040adf3) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ae34) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00470628,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00470628,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_18_bad(void)

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
  printIntLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047069e,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047069e,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_63b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0x7fffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_c = -0x80000000;
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b3b7) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_predec_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G1Global == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G2Global != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00470780,&local_e);
  local_c = local_e + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00470780,&local_e);
  local_a = local_e;
  if (local_e == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_e + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_45_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fgets_predec_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_fgets_predec_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_predec_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_predec_68_badData = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_predec_68_goodG2BData = 0xfe;
  CWE191_Integer_Underflow__char_rand_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_predec_68_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE191_Integer_Underflow__char_rand_predec_68_goodB2GData = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_15_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ba13) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ba57) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_predec_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_predec_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_predec_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_predec_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_17_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_14 = atoi((char *)&local_28);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_14 - 1;
    local_14 = local_18;
    printIntLine((ulong)local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_14 = atoi((char *)&local_28);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_14 - 1;
      local_14 = local_18;
      printIntLine((ulong)local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xfffffffe;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_01_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bdbe) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int_min_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_67b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_67b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


undefined8 badSource(void)

{
  return 0x8000;
}


void CWE191_Integer_Underflow__short_min_predec_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffe;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x8000;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_11_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
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
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_predec_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_predec_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_predec_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470a00,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470a00,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470a00,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_03_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470a50,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470a50,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470a50,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_22_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__unsigned_int_min_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


ulong CWE191_Integer_Underflow__int_fgets_predec_61b_badSource(uint uParm1)

{
  char *pcVar1;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = fgets((char *)&local_18,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
    local_1c = uParm1;
  }
  else {
    local_1c = atoi((char *)&local_18);
  }
  return (ulong)local_1c;
}


undefined8 CWE191_Integer_Underflow__int_fgets_predec_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_fgets_predec_61b_goodB2GSource(uint uParm1)

{
  char *pcVar1;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = fgets((char *)&local_18,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
    local_1c = uParm1;
  }
  else {
    local_1c = atoi((char *)&local_18);
  }
  return (ulong)local_1c;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
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
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_22_bad(void)

{
  CWE191_Integer_Underflow__char_min_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_min_predec_22_badSink(0xffffff80);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__char_min_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_min_predec_22_goodB2G1Sink(0xffffff80);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__char_min_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_min_predec_22_goodB2G2Sink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_min_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


ulong CWE191_Integer_Underflow__unsigned_int_rand_predec_61b_badSource(void)

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


undefined8 CWE191_Integer_Underflow__unsigned_int_rand_predec_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__unsigned_int_rand_predec_61b_goodB2GSource(void)

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


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_20 - 1);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_67_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_predec_67b_badSink((ulong)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_predec_67b_goodG2BSink(0xfe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_predec_67b_goodB2GSink((ulong)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_51_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_51b_goodG2BSink(0xfffffffe);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00470c90,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_b = local_b + -1;
      local_a = local_b;
      printHexCharLine((ulong)(uint)(int)local_b);
    }
  }
  else {
    local_b = local_b + -1;
    local_9 = local_b;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00470c90,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00470c90,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_b = local_b + -1;
      local_a = local_b;
      printHexCharLine((ulong)(uint)(int)local_b);
    }
  }
  else {
    if (local_b == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_b = local_b + -1;
      local_9 = local_b;
      printHexCharLine((ulong)(uint)(int)local_b);
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
    printHexCharLine(0xfffffffd);
  }
  else {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x7f);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dc9c) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dcec) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_rand_predec_61b_badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_rand_predec_61b_goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__unsigned_int_rand_predec_61b_goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_20 = 0x80000000;
  CWE191_Integer_Underflow__int_min_predec_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_predec_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_20 = 0x80000000;
  CWE191_Integer_Underflow__int_min_predec_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_12_bad(void)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_14 = 0xfffffffe;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00470d90,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      local_10 = local_14;
      printUnsignedLine((ulong)local_14);
    }
  }
  else {
    local_14 = local_14 - 1;
    local_c = local_14;
    printUnsignedLine((ulong)local_14);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00470d90,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00470d90,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      local_10 = local_14;
      printUnsignedLine((ulong)local_14);
    }
  }
  else {
    if (local_14 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      local_c = local_14;
      printUnsignedLine((ulong)local_14);
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
    printUnsignedLine(0xfffffffd);
  }
  else {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_15_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470dd0,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470dd0,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470dd0,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_45_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_predec_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_predec_45_goodB2GData - 1));
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ea15) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ea80) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00470ee8,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00470ee8,&local_c);
  return (ulong)local_c;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470f5e,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470f5e,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_predec_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_connect_socket_predec_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_51_bad(void)

{
  CWE191_Integer_Underflow__char_min_predec_51b_badSink(0xffffff80);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_predec_51b_goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_11_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00470f70,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00470f70,&local_a);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
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
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00470f70,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00470fc0,&local_a);
  local_a = local_a + -1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00470fc0,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00470fc0,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_21_bad(void)

{
  badStatic = 1;
  badSink(0xffffff80);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0xffffff80);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_03_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f638) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f672) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_predec_65b_badSink
            (0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_predec_65b_goodG2BSink
            (0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int64_t_min_predec_65b_goodB2GSink
            (0x8000000000000000,uParm2,0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_10_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004710c0,&local_a);
  }
  if (globalTrue != 0) {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004710c0,&local_a);
  }
  if (globalFalse == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004710c0,&local_a);
  }
  if (globalTrue != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_54b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_54b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54d_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54d_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54d_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00471148,&local_10);
  }
  if (staticTrue != 0) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00471148,&local_10);
  }
  if (staticFalse == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00471148,&local_10);
  }
  if (staticTrue != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_41_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471198,&local_c);
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471198,&local_c);
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_54_bad(void)

{
  CWE191_Integer_Underflow__int_min_predec_54b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_predec_54b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_12_bad(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004101f3) */
/* WARNING: Removing unreachable block (ram,0x0041021d) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(0xfffffffd);
  }
  else {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_63b_badSink(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_predec_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_63b_goodB2GSink(local_20);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_bad(void)

{
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00471210,&local_14);
  local_10 = local_14 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00471210,&local_14);
  local_c = local_14;
  if (local_14 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_14 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_15_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004105c2) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410602) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_64b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_rand_predec_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_64b_goodB2GSink(local_1a);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53c_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53d_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53c_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53d_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53c_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53d_goodB2GSink(uParm1);
  return;
}


undefined8 badSource(void)

{
  return 0;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_14_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004712c0,&local_10);
  }
  if (globalFive == 5) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004712c0,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004712c0,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00471310,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00471310,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00471310,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_fscanf_predec_32_bad(void)

{
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0;
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00471360,&local_28);
  *local_10 = local_28;
  local_20 = *local_18 - 1;
  local_1c = local_20;
  printIntLine((ulong)local_20);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0;
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00471360,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_1c - 1;
    local_1c = local_20;
    printIntLine((ulong)local_20);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
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
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -0x80;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_02_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411058) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411092) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fscanf_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_18_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52_bad(void)

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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x7f);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalTrue != 0) {
    local_9 = -0x80;
  }
  if (globalFalse == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411492) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004714ae,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004714ae,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_05_bad(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411b4f) */

void goodB2G1(void)

{
  if (staticFalse == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411ba1) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_41_bad(void)

{
  badSink(0);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_68b_badSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_predec_68_badData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_68b_goodG2BSink(void)

{
  printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_predec_68_goodG2BData + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int64_t_rand_predec_68_goodB2GData == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE191_Integer_Underflow__int64_t_rand_predec_68_goodB2GData + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_04_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004715b8,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411eaf) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004715b8,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004715b8,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411f73) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_31_bad(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471608,&local_18);
  local_c = local_18;
  local_14 = local_18 - 1;
  local_10 = local_14;
  printIntLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471608,&local_18);
  local_c = local_18;
  local_10 = local_18;
  if (local_18 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_14 = local_18 - 1;
    local_10 = local_14;
    printIntLine((ulong)local_14);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_01_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041217a) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__char_min_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_21_bad(void)

{
  badStatic = 1;
  badSink(0x8000000000000000);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x8000000000000000);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_34_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041244e) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_predec_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G1Global == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fscanf_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_01_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004717c8,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004717c8,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x7f);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = -0x80;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004128d9) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_min_predec_32_bad(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0x80000000;
  local_24 = 0x7fffffff;
  local_20 = local_24;
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412aa7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = local_28;
  local_18 = local_28;
  local_28[0] = 0;
  local_1c = 0x80000000;
  local_20 = 0x80000000;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int_min_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_68_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_68_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_68_goodG2BData = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_68_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE191_Integer_Underflow__int64_t_rand_predec_68_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_17_bad(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_14 = 0, local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printUnsignedLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_14 = 0, local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      printUnsignedLine((ulong)local_14);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xfffffffe;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printUnsignedLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  
  local_1c = 0;
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
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_predec_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  local_20 = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_53b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_53b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_53b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54c_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54c_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54c_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471986,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_fscanf_predec_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471986,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471986,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_fscanf_predec_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_fscanf_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_04_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413730) */
/* WARNING: Removing unreachable block (ram,0x00413745) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413798) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004137d2) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_31_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041390b) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int_min_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_65b_badSink(0,uParm2,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_65b_goodB2GSink(0,uParm2,0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_65_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__char_fscanf_predec_65b_badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00471a8e,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_fscanf_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__char_fscanf_predec_65b_goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00471a8e,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_64_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_13_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00471aa8,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00471aa8,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00471aa8,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_predec_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_predec_22_goodB2G1Global == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_predec_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_min_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
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


void CWE191_Integer_Underflow__char_rand_predec_08_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_63b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_rand_predec_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_63b_goodB2GSink(local_1a);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00471bce,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00471bce,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54e_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54e_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471c80,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471c80,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00471c80,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_03_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00471cd0,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00471cd0,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00471cd0,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54b_badSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54b_goodG2BSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54b_goodB2GSink(char cParm1)

{
  CWE191_Integer_Underflow__char_rand_predec_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_03_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_52b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_52b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_52b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00471d56,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00471d56,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_64b_goodB2GSink(&local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_51b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_51b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_51b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
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


void CWE191_Integer_Underflow__int_connect_socket_predec_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = local_c - 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c - 1;
      local_c = local_18;
      printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c - 1;
      local_c = local_18;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_14_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00471e28,&local_10);
  }
  if (globalFive == 5) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00471e28,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00471e28,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_32_bad(void)

{
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0;
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00471e78,&local_28);
  *local_10 = local_28;
  local_20 = *local_18 - 1;
  local_1c = local_20;
  printUnsignedLine((ulong)local_20);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = 0;
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00471e78,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_1c - 1;
    local_1c = local_20;
    printUnsignedLine((ulong)local_20);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_03_bad(void)

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
  printUnsignedLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_02_bad(void)

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
  printIntLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_predec_65b_badSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__char_min_predec_65b_goodB2GSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_12_bad(void)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_14 = 0xfffffffe;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00471f98,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      local_10 = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    local_14 = local_14 - 1;
    local_c = local_14;
    printIntLine((ulong)local_14);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00471f98,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00471f98,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      local_10 = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    if (local_14 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      local_c = local_14;
      printIntLine((ulong)local_14);
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_predec_61b_badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_predec_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_rand_predec_61b_goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_44_bad(void)

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
  local_c = 0;
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


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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
  local_c = 0;
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


void CWE191_Integer_Underflow__int_listen_socket_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0x7fffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416383) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004163da) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_predec_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_rand_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE191_Integer_Underflow__char_rand_predec_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_51b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_51b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_51b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_predec_45_badData +
                                           -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_45_bad(void)

{
  CWE191_Integer_Underflow__char_min_predec_45_badData = 0x80;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE191_Integer_Underflow__char_min_predec_45_goodG2BData
                                           + -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_min_predec_45_goodG2BData = 0xfe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__char_min_predec_45_goodB2GData == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE191_Integer_Underflow__char_min_predec_45_goodB2GData
                                             + -1));
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__char_min_predec_45_goodB2GData = 0x80;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00472106,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00472106,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticFive == 5) {
    printLongLongLine(local_20 - 1);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_53_bad(void)

{
  CWE191_Integer_Underflow__int_min_predec_53b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_predec_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_predec_53b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_41_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_52_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004721a6,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_predec_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004721a6,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_54c_goodB2GSink((ulong)uParm1);
  return;
}


undefined8 badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_004721b0,&local_10);
  return local_10;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_004721b0,&local_10);
  return local_10;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_54_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004721ee,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004721ee,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_16_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004721f8,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004721f8,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_34_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  local_14 = local_c - 1;
  local_10 = local_14;
  printIntLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  local_10 = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_14 = local_c - 1;
    local_10 = local_14;
    printIntLine((ulong)local_14);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004722b6,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_68_badData = local_a;
  CWE191_Integer_Underflow__short_fscanf_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004722b6,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_68_goodB2GData = local_a;
  CWE191_Integer_Underflow__short_fscanf_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_05_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00472310,&local_18);
  }
  if (staticTrue != 0) {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00472310,&local_18);
  }
  if (staticFalse == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00472310,&local_18);
  }
  if (staticTrue != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_min_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_54_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_54b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_54b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_34_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417ce6) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_41_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004723a0,&local_10);
  badSink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004723a0,&local_10);
  goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_004723e0,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_004723e0,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodG2BData - 1)
                   );
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodB2GData == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodB2GData -
                             1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_34_bad(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00472490,&local_20);
  local_18 = local_20 + -1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00472490,&local_20);
  local_10 = local_20;
  if (local_20 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_20 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fscanf_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004724d0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_fscanf_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_fscanf_predec_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_fscanf_predec_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004724d0,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_66_bad(void)

{
  char *pcVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar1 = fgets((char *)&local_38,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_38);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fgets_predec_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_predec_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  pcVar1 = fgets((char *)&local_38,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_38);
  }
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fgets_predec_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_15_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004185c1) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418618) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_67_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_67b_badSink(0x8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_predec_67b_goodB2GSink(0x8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_52_bad(void)

{
  CWE191_Integer_Underflow__int_min_predec_52b_badSink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_predec_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_predec_52b_goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_41_bad(void)

{
  badSink(0x8000000000000000);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 badSource(void)

{
  return 0x8000000000000000;
}


void CWE191_Integer_Underflow__int64_t_min_predec_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x8000000000000000;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_21_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472638,&local_10);
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472638,&local_10);
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472638,&local_10);
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE191_Integer_Underflow__short_rand_predec_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0xfffe;
  local_14 = 0xfffe;
  CWE191_Integer_Underflow__short_rand_predec_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE191_Integer_Underflow__short_rand_predec_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_16_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418f23) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_rand_predec_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  short local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2e = *local_28 - 1;
  local_2c = local_2e;
  printIntLine((ulong)(uint)(int)local_2e);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1e = 0xfffd;
  local_1c = local_1e;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if (local_2c == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_2e = local_2c - 1;
    local_2c = local_2e;
    printIntLine((ulong)(uint)(int)local_2e);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  int local_28;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
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
  local_20 = local_c - 1;
  local_1c = local_20;
  printIntLine((ulong)local_20);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
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
  int local_28;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_c - 1;
    local_1c = local_20;
    printIntLine((ulong)local_20);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004727a6,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_badData = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004727a6,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004727a9,&local_10);
  local_28 = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004727a9,&local_10);
  local_28 = local_10;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticTrue != 0) {
    local_10 = -0x8000000000000000;
  }
  if (staticFalse == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004198f4) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54b_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_predec_54c_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54b_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_predec_54c_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54b_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_predec_54c_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffffff80,uParm2,0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_04_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419ce8) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419dd2) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_31_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_12_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00472970,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + -1;
      local_18 = local_20;
      printLongLongLine(local_20);
    }
  }
  else {
    local_20 = local_20 + -1;
    local_10 = local_20;
    printLongLongLine(local_20);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00472970,&local_20);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00472970,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + -1;
      local_18 = local_20;
      printLongLongLine(local_20);
    }
  }
  else {
    if (local_20 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + -1;
      local_10 = local_20;
      printLongLongLine(local_20);
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
    printLongLongLine(0xfffffffffffffffd);
  }
  else {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_63_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_predec_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_rand_predec_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE191_Integer_Underflow__char_rand_predec_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_predec_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_predec_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_predec_68_goodB2GData == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_predec_68_goodB2GData - 1))
    ;
  }
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_min_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_45_bad(void)

{
  CWE191_Integer_Underflow__int_min_predec_45_badData = 0x80000000;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_min_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_min_predec_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_min_predec_45_goodB2GData - 1));
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int_min_predec_45_goodB2GData = 0x80000000;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_67_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_67b_goodG2BSink(0xfffffffe);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_22_badSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_predec_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_predec_22_goodB2G1Global == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_22_goodB2G2Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_predec_22_goodB2G2Global != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_22_goodG2BSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_rand_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_06_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041aa5b) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ab48) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_06_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472b74,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ad43) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472b74,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472b74,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ae0a) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE191_Integer_Underflow__unsigned_int_min_predec_08_bad(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041af4d) */

void goodB2G1(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041afa7) */

void goodB2G2(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_68_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_68_badData = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_68_goodB2GData = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_65b_goodB2GSink
            ((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_67_bad(void)

{
  CWE191_Integer_Underflow__int64_t_min_predec_67b_badSink(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_min_predec_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__int64_t_min_predec_67b_goodB2GSink(0x8000000000000000);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_63b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_predec_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_63b_goodB2GSink(&local_14);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_predec_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_min_predec_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  CWE191_Integer_Underflow__int64_t_min_predec_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00472c20,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_predec_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00472c20,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_17_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_11 - 1;
    printHexCharLine((ulong)(uint)(int)(char)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_11 = local_11 - 1;
      printHexCharLine((ulong)(uint)(int)(char)local_11);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_11 + -1;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_22_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_rand_predec_22_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_rand_predec_22_goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_rand_predec_22_goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_rand_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_53b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_18_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041bab4) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_16_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472cd0,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472cd0,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472d10,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472d10,&local_18);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
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
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472d10,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_31_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_14_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00472e36,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00472e36,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_fgets_predec_32_bad(void)

{
  char *pcVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0;
  local_c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  pcVar1 = fgets((char *)&local_48,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_48);
  }
  *local_18 = local_c;
  local_28 = *local_20 - 1;
  local_24 = local_28;
  printIntLine((ulong)local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  int *local_18;
  int local_c;
  
  local_18 = &local_2c;
  local_20 = &local_2c;
  local_2c = 0;
  local_c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  pcVar1 = fgets((char *)&local_48,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_48);
  }
  *local_18 = local_c;
  local_24 = *local_20;
  if (local_24 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_28 = local_24 - 1;
    local_24 = local_28;
    printIntLine((ulong)local_28);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_41_bad(void)

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
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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


void CWE191_Integer_Underflow__int_rand_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
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


void CWE191_Integer_Underflow__short_fscanf_predec_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472f30,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472f30,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472f30,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00472f88,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_goodG2BData - 1)
                   );
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_goodB2GData == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_goodB2GData -
                             1));
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00472f88,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00472fc8,&local_a);
  local_a = local_a + -1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00472fc8,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00472fc8,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_22_bad(void)

{
  CWE191_Integer_Underflow__int_min_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_min_predec_22_badSink(0x80000000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__int_min_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_min_predec_22_goodB2G1Sink(0x80000000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__int_min_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_min_predec_22_goodB2G2Sink(0x80000000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_min_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_min_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_03_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_07_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00473090,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__char_fscanf_predec_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


ulong goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00473090,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_04_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d4bf) */

void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d5a7) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_14_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00473170,&local_18);
  }
  if (globalFive == 5) {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00473170,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00473170,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    local_22 = local_22 - 1;
    printIntLine((ulong)(uint)(int)(short)local_22);
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_22 == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_22 = local_22 - 1;
      printIntLine((ulong)(uint)(int)(short)local_22);
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_12 + -1;
    printIntLine((ulong)(uint)(int)local_12);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_fscanf_predec_32_bad(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_00473200,&local_38);
  *local_10 = local_38;
  local_28 = *local_18 + -1;
  local_20 = local_28;
  printLongLongLine(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffd;
  local_28 = local_30;
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_00473200,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (local_20 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_28 = local_20 + -1;
    local_20 = local_28;
    printLongLongLine(local_28);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_16_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dc80) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
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
  CWE191_Integer_Underflow__int_rand_predec_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
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
  CWE191_Integer_Underflow__int_rand_predec_64b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_predec_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_connect_socket_predec_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1a = 0xfffe;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  else {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x7f);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e2be) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e30e) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_predec_68_badData + -1
                                        ));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_rand_predec_68_goodG2BData
                                        + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_rand_predec_68_goodB2GData == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_rand_predec_68_goodB2GData
                                          + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_predec_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_predec_22_goodB2G1Global == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_predec_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_fgets_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004733f8,&local_a);
  }
  if (staticTrue != 0) {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004733f8,&local_a);
  }
  if (staticFalse == 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004733f8,&local_a);
  }
  if (staticTrue != 0) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00473448,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00473448,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    local_18 = local_c - 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c - 1;
      local_c = local_18;
      printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c - 1;
      local_c = local_18;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_51_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_51b_badSink(0);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_51b_goodB2GSink(0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_05_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticTrue != 0) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (staticTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00473590,&local_b);
  local_a = local_b + -1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00473590,&local_b);
  local_9 = local_b;
  if (local_b == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_b + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004735ce,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004735ce,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE191_Integer_Underflow__short_min_predec_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  }
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_45_bad(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_45_badData = 0;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_min_predec_45_goodB2GData == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_min_predec_45_goodB2GData - 1))
    ;
  }
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__unsigned_int_min_predec_45_goodB2GData = 0;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_06_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fa86) */
/* WARNING: Removing unreachable block (ram,0x0041fa98) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041faea) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fb25) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_20 - 1);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x80;
}


void CWE191_Integer_Underflow__char_min_predec_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x80;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_22_badSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_predec_22_badGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G1Global == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G2Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G2Global != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodG2BSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFalse == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalTrue != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_14_bad(void)

{
  if (globalFive == 5) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042049c) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420507) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004738f0,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004738f0,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_01_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00473966,&local_9);
  local_16 = local_9;
  CWE191_Integer_Underflow__char_fscanf_predec_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_predec_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00473966,&local_9);
  local_16 = local_9;
  CWE191_Integer_Underflow__char_fscanf_predec_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_13_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_13_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x7f);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticTrue != 0) {
    local_9 = -0x80;
  }
  if (staticFalse == 0) {
    if (local_9 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042110c) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_41_bad(void)

{
  badSink(0xffffff80);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xffffff80);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_04_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042134f) */
/* WARNING: Removing unreachable block (ram,0x0042136b) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004213d2) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421412) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_31_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421587) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_34_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421764) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__char_min_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_54b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_predec_54b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_predec_68_badData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_predec_68_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_predec_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_rand_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_predec_68_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__short_rand_predec_68_goodB2GData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_13_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00473c28,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00473c28,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00473c28,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_predec_68_badData +
                                        -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(
                                        CWE191_Integer_Underflow__short_fscanf_predec_68_goodG2BData
                                        + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_predec_68_goodB2GData == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_fscanf_predec_68_goodB2GData
                                          + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_22_badSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_predec_22_badGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_predec_22_goodB2G1Global == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_22_goodB2G2Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_predec_22_goodB2G2Global != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_22_goodG2BSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_min_predec_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_11_bad(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00473d08,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00473d08,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
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
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00473d08,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
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
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x80000000,uParm2,0x80000000);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x80000000,uParm2,0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x80;
  local_16 = 0x80;
  CWE191_Integer_Underflow__char_min_predec_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_min_predec_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x80;
  local_16 = 0x80;
  CWE191_Integer_Underflow__char_min_predec_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_c - 1;
      local_c = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    pcVar2 = fgets((char *)&local_38,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_38);
    }
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar2 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_c - 1;
      local_c = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_31_bad(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473e48,&local_18);
  local_c = local_18;
  local_14 = local_18 - 1;
  local_10 = local_14;
  printUnsignedLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473e48,&local_18);
  local_c = local_18;
  local_10 = local_18;
  if (local_18 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_14 = local_18 - 1;
    local_10 = local_14;
    printUnsignedLine((ulong)local_14);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_03_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473ef8,&local_18);
  local_18 = local_18 + -1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473ef8,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473ef8,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_67b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_67b_goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54b_goodG2BSink(0xfffffffe);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_1c = local_c - 1;
  local_18 = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_48,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_48[(long)local_14] = 0;
        local_c = atoi(local_48);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_28 = local_c;
  local_18 = local_c;
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_18 = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_predec_68_badData + -1)
              );
  return;
}


void CWE191_Integer_Underflow__short_min_predec_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_predec_68_goodG2BData +
                                        -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_min_predec_68_goodB2GData == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_min_predec_68_goodB2GData
                                          + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00473fb6,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_fscanf_predec_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00473fb6,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_10_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalTrue != 0) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (globalTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_02_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_01_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_01_good(void)

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


void CWE191_Integer_Underflow__int_listen_socket_predec_08_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
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
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
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
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
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
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_fscanf_predec_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_64b_badSink(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_predec_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = ~((long)iVar6 ^
                   (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                   (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_20[0] = (long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_64b_goodB2GSink(local_20);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_68_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_68_badData = local_c;
  CWE191_Integer_Underflow__int_listen_socket_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_predec_68b_goodG2BSink();
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_68_goodB2GData = local_c;
  CWE191_Integer_Underflow__int_listen_socket_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_03_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424590) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004245e5) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE191_Integer_Underflow__int_connect_socket_predec_61b_badSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


undefined8 CWE191_Integer_Underflow__int_connect_socket_predec_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_connect_socket_predec_61b_goodB2GSource(uint uParm1)

{
  int iVar1;
  ssize_t sVar2;
  uint local_3c;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE191_Integer_Underflow__short_min_predec_68_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_68_badData = 0x8000;
  CWE191_Integer_Underflow__short_min_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_68_goodG2BData = 0xfffe;
  CWE191_Integer_Underflow__short_min_predec_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_predec_68_goodB2GData = 0x8000;
  CWE191_Integer_Underflow__short_min_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_65b_badSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_rand_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_65b_goodB2GSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_predec_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_predec_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_predec_68_goodB2GData == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_predec_68_goodB2GData - 1)
                     );
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_10_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004741d8,&local_18);
  }
  if (globalTrue != 0) {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004741d8,&local_18);
  }
  if (globalFalse == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004741d8,&local_18);
  }
  if (globalTrue != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047422e,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fscanf_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047422e,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_54e_goodB2GSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_fscanf_predec_32_bad(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_00474238,&local_1c);
  *local_10 = local_1c;
  local_1a = *local_18 + -1;
  local_19 = local_1a;
  printHexCharLine((ulong)(uint)(int)local_1a);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1b = 0xfd;
  local_1a = local_1b;
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_00474238,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (local_19 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1a = local_19 + -1;
    local_19 = local_1a;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_09_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar1 = fgets((char *)&local_28,0xe,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed.");
    }
    else {
      local_c = atoi((char *)&local_28);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_53b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_predec_53b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00474310,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00474310,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_01_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00474350,&local_18);
  local_18 = local_18 + -1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00474350,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047438e,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047438e,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_12_bad(void)

{
  int iVar1;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLongLongLine(local_10 + -1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425696) */
/* WARNING: Removing unreachable block (ram,0x004256cd) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  else {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_predec_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_rand_predec_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474440,&local_c);
  local_c = local_c + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474440,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047447e,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047447e,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_predec_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_predec_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_listen_socket_predec_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_listen_socket_predec_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_15_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004744c0,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004744c0,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004744c0,&local_10);
  if (local_10 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_04_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00474540,&local_a);
  local_a = local_a + -1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426052) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00474540,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00474540,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426112) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_00474590,&local_c);
  local_9 = local_c;
  local_b = local_c + -1;
  local_a = local_b;
  printHexCharLine((ulong)(uint)(int)local_b);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_00474590,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (local_c == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_b = local_c + -1;
    local_a = local_b;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_004745d0,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__int_fscanf_predec_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_004745d0,&local_c);
  return (ulong)local_c;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_09_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00474610,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00474610,&local_18);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00474610,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_18 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + -1;
      local_10 = local_18;
      printLongLongLine(local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_11_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + -1);
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
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -0x8000000000000000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_02_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426912) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426967) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00474726,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00474726,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_20 - 1);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar1 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_13_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004747b8,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004747b8,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004747b8,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printUnsignedLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_22_badSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_predec_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G1Global == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G2Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G2Global != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_22_goodG2BSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_fscanf_predec_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalTrue != 0) {
    local_10 = -0x8000000000000000;
  }
  if (globalFalse == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042735d) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54e_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE191_Integer_Underflow__short_fscanf_predec_45_badData +
                                        -1));
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004748a8,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(
                                        CWE191_Integer_Underflow__short_fscanf_predec_45_goodG2BData
                                        + -1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_45_goodG2BData = 0xfffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__short_fscanf_predec_45_goodB2GData == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE191_Integer_Underflow__short_fscanf_predec_45_goodB2GData
                                          + -1));
  }
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004748a8,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__char_min_predec_32_bad(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x80;
  local_1b = 0x7f;
  local_1a = local_1b;
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0xfe;
  local_1b = 0xfd;
  local_1a = local_1b;
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004276e5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined local_1c [2];
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_1c;
  local_18 = local_1c;
  local_1c[0] = 0x20;
  local_19 = 0x80;
  local_1a = 0x80;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__char_min_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0,uParm2,0);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0,uParm2,0);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_01_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004278cd) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_52b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_52b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_predec_52b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_11_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_rand_predec_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_63b_goodB2GSink(local_1c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_16_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427dbf) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_22_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__int_listen_socket_predec_22_badSink((ulong)local_c);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G1Sink((ulong)local_c);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int_listen_socket_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printIntLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
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
  
  local_1c = 0;
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
    if (local_1c == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00474b0e,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__char_fscanf_predec_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00474b0e,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00474b0e,&local_9);
  CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__char_fscanf_predec_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__char_fscanf_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__char_fscanf_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_15_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042872d) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428770) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_34_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004288b8) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int_min_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_04_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428950) */
/* WARNING: Removing unreachable block (ram,0x00428962) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004289ae) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004289e7) */

void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_31_bad(void)

{
  printHexCharLine(0x7f);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428b10) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__char_min_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 badSource(void)

{
  return 0x80000000;
}


void CWE191_Integer_Underflow__int_min_predec_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x80000000;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = -0x8000000000000000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428d50) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_51_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_51b_badSink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  CWE191_Integer_Underflow__short_min_predec_51b_goodB2GSink(0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_41_bad(void)

{
  badSink(0x80000000);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00474cd8,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00474cd8,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00474cd8,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_65_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_fgets_predec_65b_badSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_fgets_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE191_Integer_Underflow__int_fgets_predec_65b_goodB2GSink;
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  (*local_18)((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_22_badSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_predec_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_22_goodB2G1Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_predec_22_goodB2G1Global == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_22_goodB2G2Sink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_predec_22_goodB2G2Global != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_22_goodG2BSink(char cParm1)

{
  if (CWE191_Integer_Underflow__char_min_predec_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_predec_61b_badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_predec_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_fscanf_predec_61b_goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_18_bad(void)

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
  printUnsignedLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0x7fffffff);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_c = -0x80000000;
  }
  if (staticFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042984a) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
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
    local_24 = local_24 - 1;
    printUnsignedLine((ulong)local_24);
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
  
  local_24 = 0;
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
    if (local_24 == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_24 = local_24 - 1;
      printUnsignedLine((ulong)local_24);
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xfffffffe;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printUnsignedLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_rand_predec_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
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
  local_34 = *local_28 - 1;
  local_30 = local_34;
  printIntLine((ulong)local_34);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
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
  if (local_30 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_34 = local_30 - 1;
    local_30 = local_34;
    printIntLine((ulong)local_34);
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_06_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429d06) */
/* WARNING: Removing unreachable block (ram,0x00429d1a) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429d70) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429dae) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_min_predec_32_bad(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0x8000000000000000;
  local_30 = 0x7fffffffffffffff;
  local_28 = local_30;
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffd;
  local_28 = local_30;
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429f81) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_38;
  local_18 = local_38;
  local_38[0] = 0;
  local_20 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53d_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53d_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_53d_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_52b_goodG2BSink(0xfffffffe);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00475028,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00475028,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00475028,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00475078,&local_a);
  local_a = local_a + -1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00475078,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00475078,&local_a);
  if (local_a == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_02_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a726) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a764) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_predec_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_min_predec_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_predec_64b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_min_predec_65b_badSink(0x80000000,uParm2,0x80000000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_min_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_min_predec_65b_goodB2GSink(0x80000000,uParm2,0x80000000);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_predec_61b_badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_predec_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE191_Integer_Underflow__int64_t_min_predec_61b_goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_51b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_54_bad(void)

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
  CWE191_Integer_Underflow__int_rand_predec_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_predec_54b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__int_rand_predec_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0x7fffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042aec0) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042af17) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_66_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_listen_socket_predec_66b_goodG2BSink(local_28);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_66b_goodB2GSink(local_38);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink(uVar7,uParm2,uVar7);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffffffffffe,uParm2,0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink(uVar7,uParm2,uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_07_bad(void)

{
  if (staticFive == 5) {
    printLongLongLine(0x7fffffffffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b5ac) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b617) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_connect_socket_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_connect_socket_predec_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_connect_socket_predec_45_goodB2GData - 1));
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
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_64b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_connect_socket_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      if ((local_10 != -1) && (local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_14 = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE191_Integer_Underflow__int_connect_socket_predec_64b_goodB2GSink(&local_14);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004752c8,&local_c);
  }
  if (globalFive == 5) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004752c8,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004752c8,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_predec_61b_badSource(void)

{
  return 0x8000000000000000;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_predec_61b_goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


undefined8 CWE191_Integer_Underflow__int64_t_min_predec_61b_goodB2GSource(void)

{
  return 0x8000000000000000;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_fscanf_predec_32_bad(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00475320,&local_20);
  *local_10 = local_20;
  local_1c = *local_18 + -1;
  local_1a = local_1c;
  printIntLine((ulong)(uint)(int)local_1c);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1e = 0xfffd;
  local_1c = local_1e;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00475320,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (local_1a == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_1a + -1;
    local_1a = local_1c;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_12_bad(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e = -2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00475398,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_e = local_e + -1;
      local_c = local_e;
      printIntLine((ulong)(uint)(int)local_e);
    }
  }
  else {
    local_e = local_e + -1;
    local_a = local_e;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00475398,&local_e);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00475398,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_e = local_e + -1;
      local_c = local_e;
      printIntLine((ulong)(uint)(int)local_e);
    }
  }
  else {
    if (local_e == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_e = local_e + -1;
      local_a = local_e;
      printIntLine((ulong)(uint)(int)local_e);
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c30b) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c35d) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
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
  }
  if (staticFive == 5) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
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
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticFive == 5) {
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
  }
  if (staticFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475480,&local_c);
  local_c = local_c + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c9bd) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475480,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475480,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ca89) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004754d8,&local_10);
  local_a = local_10;
  local_e = local_10 + -1;
  local_c = local_e;
  printIntLine((ulong)(uint)(int)local_e);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004754d8,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (local_10 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_e = local_10 + -1;
    local_c = local_e;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_63_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fgets_predec_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  int local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  CWE191_Integer_Underflow__int_fgets_predec_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00475526,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 0xfffe;
  CWE191_Integer_Underflow__short_fscanf_predec_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00475526,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_64b_goodB2GSink(&local_a);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_68b_badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_predec_68_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_predec_68_goodG2BData - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_68b_goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_predec_68_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_predec_68_goodB2GData - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53d_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53d_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_22_badSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_predec_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G1Global == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G2Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G2Global != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_22_goodG2BSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_fscanf_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0x7fff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d139) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d191) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__short_min_predec_32_bad(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0x8000;
  local_1e = 0x7fff;
  local_1c = local_1e;
  printIntLine(0x7fff);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0xfffe;
  local_1e = 0xfffd;
  local_1c = local_1e;
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d384) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = local_20;
  local_18 = local_20;
  local_20[0] = 0;
  local_1a = 0x8000;
  local_1c = 0x8000;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__short_min_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_03_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d40c) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d44a) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
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


void CWE191_Integer_Underflow__unsigned_int_rand_predec_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printUnsignedLine((ulong)(local_1c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
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
  
  local_1c = 0;
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
    if (local_1c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53_bad(void)

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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_listen_socket_predec_53b_goodG2BSink(0xfffffffe);
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
  
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004757a8,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_12 + -1;
    local_11 = local_12;
    printHexCharLine((ulong)(uint)(int)local_12);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_004757a8,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_12 = local_12 + -1;
      local_11 = local_12;
      printHexCharLine((ulong)(uint)(int)local_12);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = -2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_11 + -1;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_predec_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_predec_68_badData = rand();
    CWE191_Integer_Underflow__int_rand_predec_68_badData =
         CWE191_Integer_Underflow__int_rand_predec_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_predec_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_predec_68_goodG2BData = 0xfffffffe;
  CWE191_Integer_Underflow__int_rand_predec_68b_goodG2BSink();
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
    CWE191_Integer_Underflow__int_rand_predec_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_predec_68_goodB2GData = rand();
    CWE191_Integer_Underflow__int_rand_predec_68_goodB2GData =
         CWE191_Integer_Underflow__int_rand_predec_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE191_Integer_Underflow__int_rand_predec_68b_goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004757e6,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_fscanf_predec_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004757e6,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004757e6,&local_a);
  CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_fscanf_predec_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_fscanf_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_fscanf_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_31_bad(void)

{
  printIntLine(0x7fff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e029) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__short_min_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_predec_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 0xfe;
  CWE191_Integer_Underflow__char_min_predec_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x80;
  CWE191_Integer_Underflow__char_min_predec_63b_goodB2GSink(&local_9);
  return;
}


void CWE191_Integer_Underflow__char_min_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53_bad(void)

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
  CWE191_Integer_Underflow__int_rand_predec_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_predec_53b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__int_rand_predec_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE191_Integer_Underflow__char_fscanf_predec_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00475896,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE191_Integer_Underflow__char_fscanf_predec_61b_goodG2BSource(void)

{
  return 0xfe;
}


ulong CWE191_Integer_Underflow__char_fscanf_predec_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00475896,local_c);
  return (ulong)local_c[0];
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  else {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e452) */
/* WARNING: Removing unreachable block (ram,0x0042e47d) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004758d8,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004758d8,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_004758d8,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_22_badSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_predec_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_22_goodB2G1Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_predec_22_goodB2G1Global == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_22_goodB2G2Sink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_predec_22_goodB2G2Global != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_22_goodG2BSink(short sParm1)

{
  if (CWE191_Integer_Underflow__short_min_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (globalFive == 5) {
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
  }
  if (globalFive == 5) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (globalFive == 5) {
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
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (globalFive == 5) {
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
  }
  if (globalFive == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int_listen_socket_predec_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
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
  local_30 = *local_20 - 1;
  local_2c = local_30;
  printIntLine((ulong)local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 0xfffffffe;
  local_24 = 0xfffffffd;
  local_20 = local_24;
  printIntLine(0xfffffffd);
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
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  int local_10;
  int local_c;
  
  local_18 = &local_34;
  local_20 = &local_34;
  local_34 = 0;
  local_c = 0;
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
  if (local_2c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_30 = local_2c - 1;
    local_2c = local_30;
    printIntLine((ulong)local_30);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_predec_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_predec_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_fscanf_predec_61b_goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_52c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_rand_predec_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54_bad(void)

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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    local_c = 0;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_c - 1));
    }
  }
  else {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f51d) */
/* WARNING: Removing unreachable block (ram,0x0042f545) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printUnsignedLine(0xfffffffd);
  }
  else {
    printUnsignedLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong CWE191_Integer_Underflow__int_rand_predec_61b_badSource(void)

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


undefined8 CWE191_Integer_Underflow__int_rand_predec_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_rand_predec_61b_goodB2GSource(void)

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


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_21_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00475b20,&local_a);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00475b20,&local_a);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00475b20,&local_a);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_03_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475b78,&local_c);
  local_c = local_c + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475b78,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475b78,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_22_bad(void)

{
  CWE191_Integer_Underflow__short_min_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__short_min_predec_22_badSink(0xffff8000);
  return;
}


void goodB2G1(void)

{
  CWE191_Integer_Underflow__short_min_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__short_min_predec_22_goodB2G1Sink(0xffff8000);
  return;
}


void goodB2G2(void)

{
  CWE191_Integer_Underflow__short_min_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__short_min_predec_22_goodB2G2Sink(0xffff8000);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_min_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__short_min_predec_22_goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_07_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00475bb8,&local_a);
  }
  if (staticFive == 5) {
    local_a = local_a + -1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00475bb8,&local_a);
  }
  if (staticFive == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00475bb8,&local_a);
  }
  if (staticFive == 5) {
    if (local_a == -0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + -1;
      local_9 = local_a;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ffbb) */

void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043016d) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
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
  local_24 = local_c - 1;
  local_20 = local_24;
  printIntLine((ulong)local_24);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
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
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_24 = local_c - 1;
    local_20 = local_24;
    printIntLine((ulong)local_24);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_67_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_predec_67b_goodG2BSink(0xfffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


undefined8 CWE191_Integer_Underflow__char_min_predec_61b_badSource(void)

{
  return 0x80;
}


undefined8 CWE191_Integer_Underflow__char_min_predec_61b_goodG2BSource(void)

{
  return 0xfe;
}


undefined8 CWE191_Integer_Underflow__char_min_predec_61b_goodB2GSource(void)

{
  return 0x80;
}


void CWE191_Integer_Underflow__int_rand_predec_52_bad(void)

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
  CWE191_Integer_Underflow__int_rand_predec_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_predec_52b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__int_rand_predec_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_52_good(void)

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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  return uVar7;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffffffffffe;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  printLongLongLine(lVar1 + -1);
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  return uVar7;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_06_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475d7c,&local_10);
  local_10 = local_10 - 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430e91) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475d7c,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475d7c,&local_10);
  if (local_10 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 - 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00430f52) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_16_bad(void)

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
  printIntLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0x7fff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431203) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043125b) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_22_badSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_predec_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G1Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G1Global == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G2Sink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_predec_22_goodB2G2Global != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
    }
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_22_goodG2BSink(int iParm1)

{
  if (CWE191_Integer_Underflow__int_listen_socket_predec_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_11_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
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
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -0x80000000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_predec_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_predec_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE191_Integer_Underflow__char_min_predec_61b_goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticTrue != 0) {
    printLongLongLine(local_20 - 1);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (staticTrue != 0) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink(uVar7);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink(uVar7);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_11_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00476078,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00476078,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00476078,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_02_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004760d0,&local_c);
  local_c = local_c + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004760d0,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004760d0,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_21_bad(void)

{
  badStatic = 1;
  badSink(0xffff8000);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0xffff8000);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffff8000);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x7f);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004327f8) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00432848) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_min_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_10_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00476220,&local_c);
  }
  if (globalTrue != 0) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00476220,&local_c);
  }
  if (globalFalse == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00476220,&local_c);
  }
  if (globalTrue != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__int_rand_predec_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_predec_45_badData = rand();
    CWE191_Integer_Underflow__int_rand_predec_45_badData =
         CWE191_Integer_Underflow__int_rand_predec_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_rand_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__int_rand_predec_45_goodB2GData == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE191_Integer_Underflow__int_rand_predec_45_goodB2GData - 1));
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
    CWE191_Integer_Underflow__int_rand_predec_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__int_rand_predec_45_goodB2GData = rand();
    CWE191_Integer_Underflow__int_rand_predec_45_goodB2GData =
         CWE191_Integer_Underflow__int_rand_predec_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_11_bad(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine(0xffffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00432fa3) */

void goodB2G1(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00432ffd) */

void goodB2G2(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_53c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_53d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_53c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_53c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + -1);
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54d_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54d_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54d_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_06_bad(void)

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
  printIntLine((ulong)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00433329) */

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
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043341b) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_rand_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fgets_predec_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fgets_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fgets_predec_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_predec_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_predec_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_01_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476400,&local_c);
  local_c = local_c + -1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476400,&local_c);
  if (local_c == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53b_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53c_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53b_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53b_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
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
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
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
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
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
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined local_48 [16];
  ulong local_38;
  ulong local_20;
  
  local_20 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  local_20 = local_38;
  CWE191_Integer_Underflow__int64_t_rand_predec_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0xfffffffffffffffe;
  CWE191_Integer_Underflow__int64_t_rand_predec_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined local_48 [16];
  ulong local_38;
  ulong local_20;
  
  local_20 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_38 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  local_20 = local_38;
  CWE191_Integer_Underflow__int64_t_rand_predec_66b_goodB2GSink(local_48);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_06_bad(void)

{
  printIntLine(0x7fffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043409c) */
/* WARNING: Removing unreachable block (ram,0x004340b1) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00434106) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00434141) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_09_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476590,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = local_c + -1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476590,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476590,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + -1;
      local_a = local_c;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -0x8000;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_02_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043461f) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00434661) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53_bad(void)

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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_21_bad(void)

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
  
  local_c = 0;
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


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
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
  
  local_c = 0;
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


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 - 1));
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
  
  local_c = 0;
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


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_18_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_01_bad(void)

{
  printUnsignedLine(0xffffffff);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043539b) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0x7fff);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = -0x8000;
  }
  if (globalFalse == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004354ab) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_02_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_67_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_fgets_predec_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int_fgets_predec_67b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_18 = local_c;
  CWE191_Integer_Underflow__int_fgets_predec_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_01_bad(void)

{
  printIntLine(0x7fff);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00435a05) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE191_Integer_Underflow__short_min_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004768de,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe)
  ;
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004768de,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_21_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(0xfffffffe);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476936,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_predec_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476936,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
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
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_c - 1;
      local_c = local_20;
      printIntLine((ulong)local_20);
    }
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_78 [16];
  sa_family_t local_68;
  uint16_t local_66;
  undefined4 local_64;
  char local_58 [16];
  sa_family_t local_48;
  uint16_t local_46;
  undefined4 local_44;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
    local_14 = -1;
    local_20 = socket(2,1,6);
    if (local_20 != -1) {
      memset(&local_68,0,0x10);
      local_68 = 2;
      local_64 = 0;
      local_66 = htons(0x6987);
      iVar1 = bind(local_20,(sockaddr *)&local_68,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_20,5), iVar1 != -1)) &&
         (local_14 = accept(local_20,(sockaddr *)0x0,(socklen_t *)0x0), local_14 != -1)) {
        sVar2 = recv(local_14,local_78,0xd,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          local_78[(long)local_24] = 0;
          local_c = atoi(local_78);
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
      memset(&local_48,0,0x10);
      local_48 = 2;
      local_44 = 0;
      local_46 = htons(0x6987);
      iVar1 = bind(local_18,(sockaddr *)&local_48,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(local_18,5), iVar1 != -1)) &&
         (local_10 = accept(local_18,(sockaddr *)0x0,(socklen_t *)0x0), local_10 != -1)) {
        sVar2 = recv(local_10,local_58,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_58[(long)local_1c] = 0;
          local_c = atoi(local_58);
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
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_2c = local_c - 1;
      local_c = local_2c;
      printIntLine((ulong)local_2c);
    }
  }
  else {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_28 = local_c - 1;
      local_c = local_28;
      printIntLine((ulong)local_28);
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
    printIntLine(0xfffffffd);
  }
  else {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_22_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476976,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476976,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476976,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodB2G2Sink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_fscanf_predec_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0x7fff);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = -0x8000;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == -0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + -1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00436505) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_67_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004769ce,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_fscanf_predec_67b_goodG2BSink(0xfffffffffffffffe);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004769ce,&local_10);
  CWE191_Integer_Underflow__int64_t_fscanf_predec_67b_goodB2GSink(local_10);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_min_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_11_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
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
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
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
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
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
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = -2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_16_bad(void)

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
  printUnsignedLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_17_bad(void)

{
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00476b08,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_18 - 1;
    local_14 = local_18;
    printIntLine((ulong)local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00476b08,&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 - 1;
      local_14 = local_18;
      printIntLine((ulong)local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xfffffffe;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
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
  }
  if (globalTrue != 0) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
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
  }
  if (globalFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
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
  }
  if (globalTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476b96,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fscanf_predec_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  local_20 = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_predec_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476b96,&local_c);
  local_20 = local_c;
  CWE191_Integer_Underflow__int_fscanf_predec_66b_goodB2GSink(local_28);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54d_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_54e_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54d_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54d_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + -1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  local_1c = local_c - 1;
  local_c = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
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
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
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
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_51_bad(void)

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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_51b_goodG2BSink(0xfffffffe);
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
  CWE191_Integer_Underflow__unsigned_int_rand_predec_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE191_Integer_Underflow__int_fscanf_predec_61b_badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00476c7e,&local_c);
  return (ulong)local_c;
}


undefined8 CWE191_Integer_Underflow__int_fscanf_predec_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


ulong CWE191_Integer_Underflow__int_fscanf_predec_61b_goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_00476c7e,&local_c);
  return (ulong)local_c;
}


void CWE191_Integer_Underflow__int_fgets_predec_16_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_04_bad(void)

{
  printIntLine(0x7fff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004381c6) */
/* WARNING: Removing unreachable block (ram,0x004381da) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043822e) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043826b) */

void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
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
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfffffffe;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
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
  in_addr_t local_24;
  int local_10;
  int local_c;
  
  local_c = 0xffffffff;
  local_c = socket(2,1,6);
  local_3c = uParm1;
  if (local_c != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_28,0x10);
    local_3c = uParm1;
    if (iVar1 != -1) {
      sVar2 = recv(local_c,local_38,0xd,0);
      local_10 = (int)sVar2;
      local_3c = uParm1;
      if ((local_10 != -1) && (local_3c = uParm1, local_10 != 0)) {
        local_38[(long)local_10] = 0;
        local_3c = atoi(local_38);
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return (ulong)local_3c;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_18_good(void)

{
  goodB2G();
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


void CWE191_Integer_Underflow__short_rand_predec_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
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
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_1a == 0x8000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = -2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_predec_45_badData - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_predec_45_badData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_predec_45_badData = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_predec_45_badData =
         CWE191_Integer_Underflow__unsigned_int_rand_predec_45_badData ^
         iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodG2BData - 1));
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodG2BData = 0xfffffffe;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodB2GData == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodB2GData - 1)
                     );
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
    CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodB2GData = rand();
    CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodB2GData =
         CWE191_Integer_Underflow__unsigned_int_rand_predec_45_goodB2GData ^
         iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_predec_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_predec_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_fscanf_predec_54e_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_06_bad(void)

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
  printUnsignedLine((ulong)(uVar1 - 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00438d4e) */

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
  if (uVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
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
  if (uVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 - 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00438e3a) */

void goodG2B1(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_rand_predec_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
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
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_1c = local_c - 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
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
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
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
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
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
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c - 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_predec_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_min_predec_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x80000000;
  CWE191_Integer_Underflow__int_min_predec_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE191_Integer_Underflow__char_rand_predec_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 0xfe;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  return;
}


ulong goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_min_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  CWE191_Integer_Underflow__unsigned_int_min_predec_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (globalFive == 5) {
    printLongLongLine(local_20 - 1);
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
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
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_20;
  
  local_20 = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_20 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_20 == 0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 - 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + -1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(0xfffffffffffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_predec_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_fscanf_predec_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_52b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_min_predec_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE191_Integer_Underflow__int64_t_rand_predec_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_48;
  long local_40;
  long local_38;
  ulong local_30;
  ulong *local_28;
  ulong *local_20;
  
  local_20 = &local_48;
  local_28 = &local_48;
  local_48 = 0;
  local_30 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  *local_20 = local_30;
  local_40 = *local_28 - 1;
  local_38 = local_40;
  printLongLongLine(local_40);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 0xfffffffffffffffe;
  local_30 = 0xfffffffffffffffd;
  local_28 = local_30;
  printLongLongLine(0xfffffffffffffffd);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  ulong *local_28;
  ulong *local_20;
  
  local_20 = &local_48;
  local_28 = &local_48;
  local_48 = 0;
  local_30 = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = ~((long)iVar6 ^
                (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf
                );
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_30 = (long)iVar6 ^
               (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  *local_20 = local_30;
  local_38 = *local_28;
  if (local_38 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_40 = local_38 - 1;
    local_38 = local_40;
    printLongLongLine(local_40);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_18_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_min_predec_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__short_min_predec_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int_fscanf_predec_65b_badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_0047704e,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__int_fscanf_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE191_Integer_Underflow__int_fscanf_predec_65b_goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_0047704e,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_17_bad(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x80000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x80000000;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 - 1;
      printIntLine((ulong)local_14);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xfffffffe;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 - 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_fscanf_predec_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54b_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54b_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54b_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_07_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004770c8,&local_10);
  }
  if (staticFive == 5) {
    local_10 = local_10 - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004770c8,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004770c8,&local_10);
  }
  if (staticFive == 5) {
    if (local_10 == 0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 - 1;
      local_c = local_10;
      printIntLine((ulong)local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_02_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  local_10 = local_c - 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodB2G2(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar1 = fgets((char *)&local_28,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_c = atoi((char *)&local_28);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c - 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  local_18 = local_c - 1;
  local_c = local_18;
  printIntLine((ulong)local_18);
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c - 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  if (local_c == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c - 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(0xfffffffd);
  return;
}


void goodG2B2(void)

{
  printIntLine(0xfffffffd);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_05_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFalse == 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
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
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    if (local_9 == 0x80) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 - 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + -1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_41_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 CWE191_Integer_Underflow__int_min_predec_61b_badSource(void)

{
  return 0x80000000;
}


undefined8 CWE191_Integer_Underflow__int_min_predec_61b_goodG2BSource(void)

{
  return 0xfffffffe;
}


undefined8 CWE191_Integer_Underflow__int_min_predec_61b_goodB2GSource(void)

{
  return 0x80000000;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043af7b) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043b0d8) */

void goodG2B1(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  printLongLongLine(uVar7 - 1);
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  if (uVar7 == 0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 - 1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__short_min_predec_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_predec_65b_badSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE191_Integer_Underflow__short_min_predec_65b_goodB2GSink(0xffff8000,uParm2,0xffff8000);
  return;
}


void CWE191_Integer_Underflow__short_min_predec_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_18_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00477330,&local_18);
  local_18 = local_18 + -1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00477330,&local_18);
  if (local_18 == -0x8000000000000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + -1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_fscanf_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_34_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(0xfffffffd);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_54b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__short_rand_predec_54b_goodG2BSink(0xfffffffe);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE191_Integer_Underflow__short_rand_predec_54b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54d_badSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_predec_54e_badSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54d_goodG2BSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_predec_54e_goodG2BSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_54d_goodB2GSink(undefined8 uParm1)

{
  CWE191_Integer_Underflow__int64_t_min_predec_54e_goodB2GSink(uParm1);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_22_badSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_predec_22_badGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G1Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G1Global == 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G2Sink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G2Global != 0) {
    if (lParm1 == -0x8000000000000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + -1);
    }
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_22_goodG2BSink(long lParm1)

{
  if (CWE191_Integer_Underflow__int64_t_rand_predec_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + -1);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    local_18 = local_c - 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticFalse == 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c - 1;
      local_c = local_18;
      printIntLine((ulong)local_18);
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
  in_addr_t local_24;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_10 = 0xffffffff;
    local_10 = socket(2,1,6);
    if (local_10 != -1) {
      memset(&local_28,0,0x10);
      local_28 = 2;
      local_24 = inet_addr("127.0.0.1");
      local_26 = htons(0x6987);
      iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_10,local_38,0xd,0);
        local_14 = (int)sVar2;
        if ((local_14 != -1) && (local_14 != 0)) {
          local_38[(long)local_14] = 0;
          local_c = atoi(local_38);
        }
      }
    }
    if (local_10 != -1) {
      close(local_10);
    }
  }
  if (staticTrue != 0) {
    if (local_c == -0x80000000) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c - 1;
      local_c = local_18;
      printIntLine((ulong)local_18);
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__int_min_predec_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_predec_61b_badSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 - 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE191_Integer_Underflow__int_min_predec_61b_goodB2GSource(0);
  if (iVar1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_38 [16];
  sa_family_t local_28;
  uint16_t local_26;
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(0xfffffffe);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
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
  in_addr_t local_24;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0xffffffff;
  local_10 = socket(2,1,6);
  if (local_10 != -1) {
    memset(&local_28,0,0x10);
    local_28 = 2;
    local_24 = inet_addr("127.0.0.1");
    local_26 = htons(0x6987);
    iVar1 = connect(local_10,(sockaddr *)&local_28,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_10,local_38,0xd,0);
      local_14 = (int)sVar2;
      if ((local_14 != -1) && (local_14 != 0)) {
        local_38[(long)local_14] = 0;
        local_c = atoi(local_38);
      }
    }
  }
  if (local_10 != -1) {
    close(local_10);
  }
  goodB2GSink((ulong)local_c);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00477506,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00477506,&local_c);
  CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00477509,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 0xfffffffe;
  CWE191_Integer_Underflow__int_fscanf_predec_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00477509,&local_c);
  CWE191_Integer_Underflow__int_fscanf_predec_64b_goodB2GSink(&local_c);
  return;
}


void CWE191_Integer_Underflow__int_fscanf_predec_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__char_min_predec_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  return;
}


void CWE191_Integer_Underflow__char_min_predec_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54c_badSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_54d_badSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54c_goodG2BSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_fgets_predec_54c_goodB2GSink(uint uParm1)

{
  CWE191_Integer_Underflow__int_fgets_predec_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE191_Integer_Underflow__int_min_predec_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0x7fffffff);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043c49f) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043c4f6) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = -2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c - 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffd);
  }
  return;
}


void CWE191_Integer_Underflow__int_min_predec_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_66_bad(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE191_Integer_Underflow__char_rand_predec_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0xfe;
  local_16 = 0xfe;
  CWE191_Integer_Underflow__char_rand_predec_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE191_Integer_Underflow__char_rand_predec_66b_goodB2GSink(local_18);
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_53c_badSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_53c_goodG2BSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__short_rand_predec_53c_goodB2GSink(short sParm1)

{
  CWE191_Integer_Underflow__short_rand_predec_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  return;
}


void CWE191_Integer_Underflow__int_connect_socket_predec_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -0x80000000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) - 1));
  }
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  return;
}


void CWE191_Integer_Underflow__char_rand_predec_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == -0x80) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_22_badGlobal = 1;
  CWE191_Integer_Underflow__int64_t_rand_predec_22_badSink(uVar7);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G1Global = 0;
  CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G1Sink(uVar7);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = ~((long)iVar6 ^
             (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    uVar7 = (long)iVar6 ^
            (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G2Global = 1;
  CWE191_Integer_Underflow__int64_t_rand_predec_22_goodB2G2Sink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE191_Integer_Underflow__int64_t_rand_predec_22_goodG2BGlobal = 1;
  CWE191_Integer_Underflow__int64_t_rand_predec_22_goodG2BSink(0xfffffffffffffffe);
  return;
}


void CWE191_Integer_Underflow__int64_t_rand_predec_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_predec_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_predec_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE191_Integer_Underflow__short_fscanf_predec_61b_goodB2GSource(0);
  if (sVar1 == -0x8000) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + -1));
  }
  return;
}


void CWE191_Integer_Underflow__short_fscanf_predec_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 - 1));
  return;
}


void CWE191_Integer_Underflow__unsigned_int_min_predec_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 - 1));
  }
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_18_bad(void)

{
  printLongLongLine(0x7fffffffffffffff);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043ccb0) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printLongLongLine(0xfffffffffffffffd);
  return;
}


void CWE191_Integer_Underflow__int64_t_min_predec_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE191_Integer_Underflow__int_listen_socket_predec_65_bad(void)

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
  
  local_18 = CWE191_Integer_Underflow__int_listen_socket_predec_65b_badSink;
  local_c = 0;
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
  CWE191_Integer_Underflow__int_listen_socket_predec_65b_goodG2BSink(0xfffffffe,uParm2,0xfffffffe);
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
  
  local_18 = CWE191_Integer_Underflow__int_listen_socket_predec_65b_goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_10 = -1;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = 0;
      }
    }
  }