
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
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_04_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_04_good();");
  CWE190_Integer_Overflow__short_rand_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_34_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_32_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_18_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_45_good();");
  CWE190_Integer_Overflow__short_rand_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_34_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_12_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_42_good();");
  CWE190_Integer_Overflow__char_rand_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_09_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_03_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_14_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_45_good();");
  CWE190_Integer_Overflow__char_max_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_45_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_14_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_11_good();");
  CWE190_Integer_Overflow__int_max_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_44_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_09_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_67_good();");
  CWE190_Integer_Overflow__char_rand_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_53_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_64_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_22_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_16_good();");
  CWE190_Integer_Overflow__int_rand_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_11_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_03_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_22_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_54_good();");
  CWE190_Integer_Overflow__short_rand_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_44_good();");
  CWE190_Integer_Overflow__char_max_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_08_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_13_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_54_good();");
  CWE190_Integer_Overflow__char_rand_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_61_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_45_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_11_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_02_good();");
  CWE190_Integer_Overflow__char_max_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_01_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_13_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_05_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_10_good();");
  CWE190_Integer_Overflow__char_rand_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_05_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_41_good();");
  CWE190_Integer_Overflow__int_max_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_51_good();");
  CWE190_Integer_Overflow__int_rand_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_68_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_04_good();");
  CWE190_Integer_Overflow__short_max_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_09_good();");
  CWE190_Integer_Overflow__int_max_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_14_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_45_good();");
  CWE190_Integer_Overflow__int_rand_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_03_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_04_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_31_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_17_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_42_good();");
  CWE190_Integer_Overflow__char_max_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_02_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_21_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_13_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_03_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_31_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_66_good();");
  CWE190_Integer_Overflow__short_rand_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_34_good();");
  CWE190_Integer_Overflow__short_rand_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_01_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_64_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_53_good();");
  CWE190_Integer_Overflow__int_rand_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_12_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_67_good();");
  CWE190_Integer_Overflow__short_max_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_16_good();");
  CWE190_Integer_Overflow__char_max_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_67_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_03_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_65_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_07_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_09_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_09_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_51_good();");
  CWE190_Integer_Overflow__char_rand_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_22_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_11_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_32_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_68_good();");
  CWE190_Integer_Overflow__int_max_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_52_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_10_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_07_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_10_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_64_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_53_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_06_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_52_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_61_good();");
  CWE190_Integer_Overflow__char_max_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_05_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_53_good();");
  CWE190_Integer_Overflow__int_max_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_31_good();");
  CWE190_Integer_Overflow__int_max_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_41_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_18_good();");
  CWE190_Integer_Overflow__char_max_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_63_good();");
  CWE190_Integer_Overflow__int_rand_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_21_good();");
  CWE190_Integer_Overflow__char_max_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_51_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_65_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_06_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_07_good();");
  CWE190_Integer_Overflow__int_rand_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_42_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_67_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_13_good();");
  CWE190_Integer_Overflow__int_rand_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_18_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_15_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_05_good();");
  CWE190_Integer_Overflow__char_max_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_64_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_66_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_53_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_67_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_21_good();");
  CWE190_Integer_Overflow__short_max_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_04_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_11_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_11_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_52_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_07_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_66_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_17_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_45_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_11_good();");
  CWE190_Integer_Overflow__char_max_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_67_good();");
  CWE190_Integer_Overflow__int_rand_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_04_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_08_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_08_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_42_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_44_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_65_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_07_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_68_good();");
  CWE190_Integer_Overflow__short_rand_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_52_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_22_good();");
  CWE190_Integer_Overflow__short_rand_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_02_good();");
  CWE190_Integer_Overflow__char_rand_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_31_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_12_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_66_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_08_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_04_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_53_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_15_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_01_good();");
  CWE190_Integer_Overflow__char_rand_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_41_good();");
  CWE190_Integer_Overflow__int_rand_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_02_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_16_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_13_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_32_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_52_good();");
  CWE190_Integer_Overflow__short_rand_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_64_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_41_good();");
  CWE190_Integer_Overflow__short_rand_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_18_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_67_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_16_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_44_good();");
  CWE190_Integer_Overflow__int_max_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_13_good();");
  CWE190_Integer_Overflow__short_max_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_13_good();");
  CWE190_Integer_Overflow__short_rand_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_41_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_12_good();");
  CWE190_Integer_Overflow__char_rand_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_11_good();");
  CWE190_Integer_Overflow__short_rand_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_63_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_67_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_14_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_52_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_11_good();");
  CWE190_Integer_Overflow__char_rand_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_34_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_10_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_08_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_09_good();");
  CWE190_Integer_Overflow__int_rand_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_18_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_13_good();");
  CWE190_Integer_Overflow__char_rand_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_12_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_16_good();");
  CWE190_Integer_Overflow__int_max_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_18_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_06_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_54_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_66_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_16_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_07_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_66_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_31_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_42_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_13_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_03_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_65_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_21_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_22_good();");
  CWE190_Integer_Overflow__int_max_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_12_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_08_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_06_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_63_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_42_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_17_good();");
  CWE190_Integer_Overflow__short_max_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_65_good();");
  CWE190_Integer_Overflow__short_max_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_41_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_31_good();");
  CWE190_Integer_Overflow__short_max_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_52_good();");
  CWE190_Integer_Overflow__int_max_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_12_good();");
  CWE190_Integer_Overflow__short_rand_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_63_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_10_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_32_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_04_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_44_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_07_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_16_good();");
  CWE190_Integer_Overflow__char_rand_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_53_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_22_good();");
  CWE190_Integer_Overflow__char_rand_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_34_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_65_good();");
  CWE190_Integer_Overflow__int_rand_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_64_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_44_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_13_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_01_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_01_good();");
  CWE190_Integer_Overflow__int_max_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_04_good();");
  CWE190_Integer_Overflow__int_max_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_07_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_01_good();");
  CWE190_Integer_Overflow__int_rand_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_44_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_06_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_10_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_07_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_11_good();");
  CWE190_Integer_Overflow__short_max_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_54_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_09_good();");
  CWE190_Integer_Overflow__char_rand_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_54_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_10_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_16_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_07_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_18_good();");
  CWE190_Integer_Overflow__char_rand_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_11_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_16_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_34_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_05_good();");
  CWE190_Integer_Overflow__short_max_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_15_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_09_good();");
  CWE190_Integer_Overflow__short_max_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_52_good();");
  CWE190_Integer_Overflow__char_max_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_53_good();");
  CWE190_Integer_Overflow__short_max_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_63_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_17_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_02_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_16_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_66_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_66_good();");
  CWE190_Integer_Overflow__char_rand_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_63_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_61_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_67_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_11_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_64_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_08_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_53_good();");
  CWE190_Integer_Overflow__char_rand_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_61_good();");
  CWE190_Integer_Overflow__int_max_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_42_good();");
  CWE190_Integer_Overflow__short_max_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_63_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_06_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_32_good();");
  CWE190_Integer_Overflow__char_rand_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_31_good();");
  CWE190_Integer_Overflow__int_rand_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_54_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_21_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_08_good();");
  CWE190_Integer_Overflow__short_rand_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_10_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_66_good();");
  CWE190_Integer_Overflow__int_rand_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_66_good();");
  CWE190_Integer_Overflow__char_max_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_01_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_16_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_05_good();");
  CWE190_Integer_Overflow__int_rand_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_06_good();");
  CWE190_Integer_Overflow__int_rand_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_53_good();");
  CWE190_Integer_Overflow__char_max_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_64_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_08_good();");
  CWE190_Integer_Overflow__short_max_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_14_good();");
  CWE190_Integer_Overflow__short_max_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_10_good();");
  CWE190_Integer_Overflow__short_rand_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_54_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_11_good();");
  CWE190_Integer_Overflow__int_rand_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_53_good();");
  CWE190_Integer_Overflow__short_rand_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_18_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_22_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_65_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_63_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_17_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_03_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_54_good();");
  CWE190_Integer_Overflow__short_max_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_15_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_10_good();");
  CWE190_Integer_Overflow__int_rand_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_51_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_13_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_42_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_42_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_32_good();");
  CWE190_Integer_Overflow__int_max_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_02_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_04_good();");
  CWE190_Integer_Overflow__char_rand_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_52_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_10_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_52_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_04_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_41_good();");
  CWE190_Integer_Overflow__char_max_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_21_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_34_good();");
  CWE190_Integer_Overflow__int_rand_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_21_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_67_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_53_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_65_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_63_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_06_good();");
  CWE190_Integer_Overflow__char_rand_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_41_good();");
  CWE190_Integer_Overflow__char_rand_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_54_good();");
  CWE190_Integer_Overflow__char_max_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_63_good();");
  CWE190_Integer_Overflow__char_rand_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_04_good();");
  CWE190_Integer_Overflow__char_max_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_32_good();");
  CWE190_Integer_Overflow__short_rand_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_03_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_42_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_44_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_01_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_51_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_61_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_11_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_02_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_65_good();");
  CWE190_Integer_Overflow__char_max_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_15_good();");
  CWE190_Integer_Overflow__char_max_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_67_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_21_good();");
  CWE190_Integer_Overflow__int_max_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_04_good();");
  CWE190_Integer_Overflow__int_rand_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_32_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_12_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_05_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_44_good();");
  CWE190_Integer_Overflow__int_rand_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_44_good();");
  CWE190_Integer_Overflow__short_rand_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_01_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_44_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_66_good();");
  CWE190_Integer_Overflow__short_max_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_61_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_31_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_03_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_51_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_17_good();");
  CWE190_Integer_Overflow__char_rand_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_32_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_63_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_15_good();");
  CWE190_Integer_Overflow__short_max_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_67_good();");
  CWE190_Integer_Overflow__short_rand_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_22_good();");
  CWE190_Integer_Overflow__int_rand_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_17_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_22_good();");
  CWE190_Integer_Overflow__short_max_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_16_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_09_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_45_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_54_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_16_good();");
  CWE190_Integer_Overflow__short_max_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_44_good();");
  CWE190_Integer_Overflow__char_rand_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_04_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_10_good();");
  CWE190_Integer_Overflow__int_max_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_61_good();");
  CWE190_Integer_Overflow__short_max_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_05_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_14_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_21_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_06_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_63_good();");
  CWE190_Integer_Overflow__int_max_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_31_good();");
  CWE190_Integer_Overflow__char_max_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_64_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_08_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_31_good();");
  CWE190_Integer_Overflow__short_rand_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_18_good();");
  CWE190_Integer_Overflow__int_rand_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_45_good();");
  CWE190_Integer_Overflow__int_max_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_21_good();");
  CWE190_Integer_Overflow__int_rand_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_68_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_53_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_42_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_01_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_12_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_12_good();");
  CWE190_Integer_Overflow__short_max_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_52_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_01_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_05_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_05_good();");
  CWE190_Integer_Overflow__short_rand_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_12_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_61_good();");
  CWE190_Integer_Overflow__short_rand_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_06_good();");
  CWE190_Integer_Overflow__short_max_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_65_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_07_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_53_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_63_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_42_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_02_good();");
  CWE190_Integer_Overflow__short_rand_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_21_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_63_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_63_good();");
  CWE190_Integer_Overflow__short_rand_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_34_good();");
  CWE190_Integer_Overflow__short_max_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_31_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_09_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_12_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_01_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_09_good();");
  CWE190_Integer_Overflow__char_max_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_64_good();");
  CWE190_Integer_Overflow__short_max_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_61_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_15_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_05_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_61_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_64_good();");
  CWE190_Integer_Overflow__char_max_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_14_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_65_good();");
  CWE190_Integer_Overflow__char_rand_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_41_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_06_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_18_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_02_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_32_good();");
  CWE190_Integer_Overflow__int_rand_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_04_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_51_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_53_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_61_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_16_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_42_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_44_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_51_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_07_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_03_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_68_good();");
  CWE190_Integer_Overflow__short_max_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_08_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_65_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_15_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_61_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_16_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_07_good();");
  CWE190_Integer_Overflow__int_max_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_61_good();");
  CWE190_Integer_Overflow__int_rand_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_32_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_16_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_16_good();");
  CWE190_Integer_Overflow__short_rand_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_21_good();");
  CWE190_Integer_Overflow__short_rand_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_66_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_22_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_03_good();");
  CWE190_Integer_Overflow__short_rand_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_09_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_67_good();");
  CWE190_Integer_Overflow__int_max_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_21_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_52_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_01_good();");
  CWE190_Integer_Overflow__short_max_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_10_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_68_good();");
  CWE190_Integer_Overflow__char_rand_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_01_good();");
  CWE190_Integer_Overflow__short_rand_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_67_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_04_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_45_good();");
  CWE190_Integer_Overflow__char_rand_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_15_good();");
  CWE190_Integer_Overflow__char_rand_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_54_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_06_good();");
  CWE190_Integer_Overflow__char_max_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_11_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_34_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_21_good();");
  CWE190_Integer_Overflow__char_rand_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_51_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_32_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_07_good();");
  CWE190_Integer_Overflow__char_max_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_34_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_18_good();");
  CWE190_Integer_Overflow__short_rand_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_07_good();");
  CWE190_Integer_Overflow__short_max_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_07_good();");
  CWE190_Integer_Overflow__short_rand_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_14_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_63_good();");
  CWE190_Integer_Overflow__short_max_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_68_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_32_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_05_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_01_good();");
  CWE190_Integer_Overflow__char_max_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_09_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_52_good();");
  CWE190_Integer_Overflow__char_rand_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_44_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_52_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_17_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_54_good();");
  CWE190_Integer_Overflow__int_max_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_34_good();");
  CWE190_Integer_Overflow__char_rand_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_34_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_13_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_32_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_45_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_68_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_05_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_22_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_51_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_13_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_17_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_44_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_68_good();");
  CWE190_Integer_Overflow__int_rand_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_08_good();");
  CWE190_Integer_Overflow__int_rand_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_03_good();");
  CWE190_Integer_Overflow__char_max_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_45_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_31_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_18_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_12_good();");
  CWE190_Integer_Overflow__int_max_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_06_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_09_good();");
  CWE190_Integer_Overflow__short_rand_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_18_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_05_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_05_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_03_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_68_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_13_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_02_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_52_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_13_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_14_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_53_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_05_good();");
  CWE190_Integer_Overflow__int_max_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_02_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_04_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_01_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_12_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_51_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_03_good();");
  CWE190_Integer_Overflow__int_max_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_06_good();");
  CWE190_Integer_Overflow__int_max_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_14_good();");
  CWE190_Integer_Overflow__int_max_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_51_good();");
  CWE190_Integer_Overflow__short_max_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_01_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_54_good();");
  CWE190_Integer_Overflow__int_rand_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_65_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_15_good();");
  CWE190_Integer_Overflow__int_max_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_21_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_02_good();");
  CWE190_Integer_Overflow__short_max_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_02_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_17_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_14_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_15_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_22_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_65_good();");
  CWE190_Integer_Overflow__short_rand_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_03_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_42_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_14_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_14_good();");
  CWE190_Integer_Overflow__short_rand_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_34_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_64_good();");
  CWE190_Integer_Overflow__int_rand_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_51_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_64_good();");
  CWE190_Integer_Overflow__short_rand_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_45_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_67_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_05_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_45_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_07_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_63_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_61_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_13_good();");
  CWE190_Integer_Overflow__int_max_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_68_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_15_good();");
  CWE190_Integer_Overflow__int_rand_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_06_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_66_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_14_good();");
  CWE190_Integer_Overflow__char_max_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_02_good();");
  CWE190_Integer_Overflow__int_max_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_08_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_41_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_17_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_21_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_52_good();");
  CWE190_Integer_Overflow__int_rand_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_14_good();");
  CWE190_Integer_Overflow__int_rand_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_61_good();");
  CWE190_Integer_Overflow__char_rand_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_12_good();");
  CWE190_Integer_Overflow__char_max_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_66_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_09_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_54_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_02_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_65_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_45_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_02_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_42_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_64_good();");
  CWE190_Integer_Overflow__char_rand_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_31_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_15_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_41_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_07_good();");
  CWE190_Integer_Overflow__char_rand_preinc_07_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_51_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_06_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_21_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_13_good();");
  CWE190_Integer_Overflow__char_max_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_01_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_32_good();");
  CWE190_Integer_Overflow__char_max_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_17_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_34_good();");
  CWE190_Integer_Overflow__char_max_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_31_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_08_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_31_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_08_good();");
  CWE190_Integer_Overflow__int_max_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_44_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_41_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_65_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_64_good();");
  CWE190_Integer_Overflow__int_max_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_42_good();");
  CWE190_Integer_Overflow__int_rand_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_06_good();");
  CWE190_Integer_Overflow__short_rand_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_66_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_63_good();");
  CWE190_Integer_Overflow__char_max_preinc_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_05_good();");
  CWE190_Integer_Overflow__char_rand_preinc_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_51_good();");
  CWE190_Integer_Overflow__short_rand_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_32_good();");
  CWE190_Integer_Overflow__short_max_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_17_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_52_good();");
  CWE190_Integer_Overflow__short_max_preinc_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_03_good();");
  CWE190_Integer_Overflow__int_rand_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_34_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_12_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_15_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_13_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_17_good();");
  CWE190_Integer_Overflow__int_rand_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_68_good();");
  CWE190_Integer_Overflow__char_max_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_11_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_68_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_03_good();");
  CWE190_Integer_Overflow__char_rand_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_61_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_31_good();");
  CWE190_Integer_Overflow__char_rand_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_34_good();");
  CWE190_Integer_Overflow__int_max_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_02_good();");
  CWE190_Integer_Overflow__int_rand_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_10_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_09_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_34_good();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_67_good();");
  CWE190_Integer_Overflow__char_max_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_17_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_41_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_10_good();");
  CWE190_Integer_Overflow__char_max_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_15_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_41_good();");
  CWE190_Integer_Overflow__short_max_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_06_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_14_good();");
  CWE190_Integer_Overflow__char_rand_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_42_good();");
  CWE190_Integer_Overflow__int_max_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_68_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_15_good();");
  CWE190_Integer_Overflow__short_rand_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_02_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_18_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_15_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_11_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_22_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_08_good();");
  CWE190_Integer_Overflow__char_max_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_18_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_08_good();");
  CWE190_Integer_Overflow__char_rand_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_16_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_32_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_45_good();");
  CWE190_Integer_Overflow__short_max_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_12_good();");
  CWE190_Integer_Overflow__int_rand_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_21_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_53_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_66_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_67_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_03_good();");
  CWE190_Integer_Overflow__short_max_preinc_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_10_good();");
  CWE190_Integer_Overflow__short_max_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_15_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_51_good();");
  CWE190_Integer_Overflow__char_max_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_54_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_18_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_31_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_12_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_51_good();");
  CWE190_Integer_Overflow__int_max_preinc_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_34_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_09_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_04_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_68_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_18_good();");
  CWE190_Integer_Overflow__short_max_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_42_good();");
  CWE190_Integer_Overflow__short_rand_preinc_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_14_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_14_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_11_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_64_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_31_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_22_good();");
  CWE190_Integer_Overflow__char_max_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_32_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_66_good();");
  CWE190_Integer_Overflow__int_max_preinc_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_68_good();");
  CWE190_Integer_Overflow__int_fgets_preinc_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_44_good();");
  CWE190_Integer_Overflow__short_max_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_08_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_08_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_44_good();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_44_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_54_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_17_good();");
  CWE190_Integer_Overflow__char_max_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_41_good();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_22_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_41_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_65_good();");
  CWE190_Integer_Overflow__int_max_preinc_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_41_good();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_09_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_18_good();");
  CWE190_Integer_Overflow__int_max_preinc_18_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_64_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_64_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_41_good();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_17_good();");
  CWE190_Integer_Overflow__int_max_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_10_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_54_good();");
  CWE190_Integer_Overflow__int_fscanf_preinc_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_10_good();");
  CWE190_Integer_Overflow__short_fscanf_preinc_10_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_45_good();");
  CWE190_Integer_Overflow__int64_t_max_preinc_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_17_good();");
  CWE190_Integer_Overflow__short_rand_preinc_17_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_61_good();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_61_good();");
  CWE190_Integer_Overflow__char_fscanf_preinc_61_good();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_04_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_04_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_34_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_32_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_18_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_45_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_34_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_12_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_42_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_09_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_03_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_14_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_45_bad();");
  CWE190_Integer_Overflow__char_max_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_45_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_14_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_11_bad();");
  CWE190_Integer_Overflow__int_max_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_44_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_09_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_67_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_53_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_64_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_22_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_16_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_11_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_03_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_22_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_54_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_44_bad();");
  CWE190_Integer_Overflow__char_max_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_08_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_13_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_54_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_61_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_45_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_11_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_02_bad();");
  CWE190_Integer_Overflow__char_max_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_01_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_13_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_05_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_10_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_05_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_41_bad();");
  CWE190_Integer_Overflow__int_max_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_51_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_68_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_04_bad();");
  CWE190_Integer_Overflow__short_max_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_09_bad();");
  CWE190_Integer_Overflow__int_max_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_14_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_45_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_03_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_04_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_31_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_17_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_42_bad();");
  CWE190_Integer_Overflow__char_max_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_02_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_21_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_13_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_03_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_31_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_66_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_34_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_01_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_64_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_53_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_12_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_67_bad();");
  CWE190_Integer_Overflow__short_max_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_16_bad();");
  CWE190_Integer_Overflow__char_max_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_67_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_03_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_65_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_07_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_09_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_09_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_51_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_22_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_11_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_32_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_68_bad();");
  CWE190_Integer_Overflow__int_max_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_52_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_10_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_07_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_10_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_64_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_53_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_06_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_52_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_61_bad();");
  CWE190_Integer_Overflow__char_max_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_05_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_53_bad();");
  CWE190_Integer_Overflow__int_max_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_31_bad();");
  CWE190_Integer_Overflow__int_max_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_41_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_18_bad();");
  CWE190_Integer_Overflow__char_max_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_63_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_21_bad();");
  CWE190_Integer_Overflow__char_max_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_51_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_65_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_06_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_07_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_42_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_67_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_13_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_18_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_15_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_05_bad();");
  CWE190_Integer_Overflow__char_max_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_64_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_66_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_53_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_67_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_21_bad();");
  CWE190_Integer_Overflow__short_max_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_04_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_11_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_11_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_52_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_07_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_66_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_17_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_45_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_11_bad();");
  CWE190_Integer_Overflow__char_max_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_67_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_04_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_08_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_08_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_42_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_44_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_65_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_07_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_68_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_52_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_22_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_02_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_31_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_12_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_66_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_08_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_04_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_53_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_15_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_01_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_41_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_02_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_16_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_13_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_32_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_52_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_64_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_41_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_18_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_67_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_16_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_44_bad();");
  CWE190_Integer_Overflow__int_max_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_13_bad();");
  CWE190_Integer_Overflow__short_max_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_13_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_41_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_12_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_11_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_63_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_67_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_14_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_52_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_11_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_34_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_10_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_08_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_09_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_18_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_13_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_12_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_16_bad();");
  CWE190_Integer_Overflow__int_max_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_18_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_06_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_54_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_66_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_16_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_07_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_66_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_31_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_42_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_13_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_03_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_65_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_21_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_22_bad();");
  CWE190_Integer_Overflow__int_max_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_12_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_08_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_06_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_63_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_42_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_17_bad();");
  CWE190_Integer_Overflow__short_max_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_65_bad();");
  CWE190_Integer_Overflow__short_max_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_41_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_31_bad();");
  CWE190_Integer_Overflow__short_max_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_52_bad();");
  CWE190_Integer_Overflow__int_max_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_12_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_63_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_10_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_32_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_04_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_44_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_07_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_16_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_53_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_22_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_34_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_65_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_64_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_44_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_13_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_01_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_01_bad();");
  CWE190_Integer_Overflow__int_max_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_04_bad();");
  CWE190_Integer_Overflow__int_max_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_07_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_01_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_44_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_06_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_10_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_07_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_11_bad();");
  CWE190_Integer_Overflow__short_max_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_54_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_09_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_54_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_10_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_16_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_07_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_18_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_11_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_16_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_34_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_05_bad();");
  CWE190_Integer_Overflow__short_max_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_15_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_09_bad();");
  CWE190_Integer_Overflow__short_max_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_52_bad();");
  CWE190_Integer_Overflow__char_max_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_53_bad();");
  CWE190_Integer_Overflow__short_max_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_63_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_17_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_02_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_16_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_66_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_66_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_63_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_61_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_67_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_11_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_64_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_08_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_53_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_61_bad();");
  CWE190_Integer_Overflow__int_max_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_42_bad();");
  CWE190_Integer_Overflow__short_max_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_63_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_06_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_32_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_31_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_54_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_21_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_08_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_10_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_66_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_66_bad();");
  CWE190_Integer_Overflow__char_max_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_01_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_16_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_05_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_06_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_53_bad();");
  CWE190_Integer_Overflow__char_max_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_64_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_08_bad();");
  CWE190_Integer_Overflow__short_max_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_14_bad();");
  CWE190_Integer_Overflow__short_max_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_10_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_54_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_11_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_53_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_18_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_22_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_65_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_63_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_17_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_03_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_54_bad();");
  CWE190_Integer_Overflow__short_max_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_15_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_10_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_51_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_13_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_42_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_42_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_32_bad();");
  CWE190_Integer_Overflow__int_max_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_02_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_04_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_52_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_10_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_52_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_04_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_41_bad();");
  CWE190_Integer_Overflow__char_max_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_21_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_34_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_21_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_67_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_53_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_65_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_63_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_06_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_41_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_54_bad();");
  CWE190_Integer_Overflow__char_max_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_63_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_04_bad();");
  CWE190_Integer_Overflow__char_max_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_32_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_03_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_42_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_44_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_01_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_51_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_61_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_11_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_02_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_65_bad();");
  CWE190_Integer_Overflow__char_max_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_15_bad();");
  CWE190_Integer_Overflow__char_max_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_67_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_21_bad();");
  CWE190_Integer_Overflow__int_max_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_04_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_32_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_12_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_05_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_44_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_44_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_01_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_44_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_66_bad();");
  CWE190_Integer_Overflow__short_max_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_61_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_31_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_03_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_51_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_17_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_32_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_63_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_15_bad();");
  CWE190_Integer_Overflow__short_max_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_67_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_22_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_17_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_22_bad();");
  CWE190_Integer_Overflow__short_max_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_16_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_09_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_45_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_54_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_16_bad();");
  CWE190_Integer_Overflow__short_max_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_44_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_04_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_10_bad();");
  CWE190_Integer_Overflow__int_max_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_61_bad();");
  CWE190_Integer_Overflow__short_max_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_05_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_14_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_21_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_06_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_63_bad();");
  CWE190_Integer_Overflow__int_max_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_31_bad();");
  CWE190_Integer_Overflow__char_max_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_64_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_08_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_31_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_18_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_45_bad();");
  CWE190_Integer_Overflow__int_max_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_21_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_68_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_53_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_42_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_01_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_12_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_12_bad();");
  CWE190_Integer_Overflow__short_max_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_52_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_01_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_05_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_05_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_12_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_61_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_06_bad();");
  CWE190_Integer_Overflow__short_max_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_65_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_07_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_53_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_63_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_42_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_02_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_21_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_63_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_63_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_34_bad();");
  CWE190_Integer_Overflow__short_max_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_31_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_09_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_12_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_01_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_09_bad();");
  CWE190_Integer_Overflow__char_max_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_64_bad();");
  CWE190_Integer_Overflow__short_max_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_61_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_15_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_05_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_61_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_64_bad();");
  CWE190_Integer_Overflow__char_max_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_14_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_65_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_41_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_06_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_18_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_02_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_32_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_04_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_51_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_53_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_61_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_16_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_42_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_44_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_51_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_07_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_03_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_68_bad();");
  CWE190_Integer_Overflow__short_max_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_08_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_65_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_15_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_61_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_16_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_07_bad();");
  CWE190_Integer_Overflow__int_max_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_61_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_32_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_16_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_16_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_21_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_66_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_22_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_03_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_09_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_67_bad();");
  CWE190_Integer_Overflow__int_max_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_21_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_52_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_01_bad();");
  CWE190_Integer_Overflow__short_max_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_10_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_68_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_01_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_67_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_04_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_45_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_15_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_54_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_06_bad();");
  CWE190_Integer_Overflow__char_max_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_11_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_34_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_21_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_51_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_32_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_07_bad();");
  CWE190_Integer_Overflow__char_max_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_34_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_18_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_07_bad();");
  CWE190_Integer_Overflow__short_max_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_07_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_14_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_63_bad();");
  CWE190_Integer_Overflow__short_max_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_68_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_32_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_05_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_01_bad();");
  CWE190_Integer_Overflow__char_max_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_09_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_52_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_44_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_52_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_17_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_54_bad();");
  CWE190_Integer_Overflow__int_max_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_34_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_34_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_13_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_32_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_45_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_68_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_05_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_22_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_51_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_13_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_17_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_44_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_68_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_08_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_03_bad();");
  CWE190_Integer_Overflow__char_max_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_45_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_31_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_18_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_12_bad();");
  CWE190_Integer_Overflow__int_max_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_06_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_09_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_18_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_05_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_05_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_03_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_68_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_13_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_02_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_52_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_13_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_14_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_53_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_05_bad();");
  CWE190_Integer_Overflow__int_max_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_02_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_04_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_01_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_12_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_51_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_03_bad();");
  CWE190_Integer_Overflow__int_max_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_06_bad();");
  CWE190_Integer_Overflow__int_max_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_14_bad();");
  CWE190_Integer_Overflow__int_max_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_51_bad();");
  CWE190_Integer_Overflow__short_max_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_01_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_54_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_65_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_15_bad();");
  CWE190_Integer_Overflow__int_max_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_21_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_02_bad();");
  CWE190_Integer_Overflow__short_max_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_02_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_17_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_14_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_15_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_22_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_65_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_03_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_42_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_14_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_14_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_34_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_64_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_51_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_64_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_45_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_67_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_05_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_45_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_07_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_63_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_61_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_13_bad();");
  CWE190_Integer_Overflow__int_max_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_68_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_15_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_06_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_66_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_14_bad();");
  CWE190_Integer_Overflow__char_max_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_02_bad();");
  CWE190_Integer_Overflow__int_max_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_08_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_41_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_17_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_21_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_52_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_14_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_61_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_12_bad();");
  CWE190_Integer_Overflow__char_max_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_66_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_09_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_54_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_02_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_65_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_45_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_02_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_42_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_64_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_31_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_15_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_41_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_07_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_07_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_51_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_06_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_21_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_13_bad();");
  CWE190_Integer_Overflow__char_max_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_01_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_32_bad();");
  CWE190_Integer_Overflow__char_max_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_17_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_34_bad();");
  CWE190_Integer_Overflow__char_max_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_31_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_08_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_31_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_08_bad();");
  CWE190_Integer_Overflow__int_max_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_44_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_41_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_65_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_64_bad();");
  CWE190_Integer_Overflow__int_max_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_42_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_06_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_66_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_63_bad();");
  CWE190_Integer_Overflow__char_max_preinc_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_05_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_51_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_32_bad();");
  CWE190_Integer_Overflow__short_max_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_17_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_52_bad();");
  CWE190_Integer_Overflow__short_max_preinc_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_03_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_34_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_12_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_15_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_13_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_17_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_68_bad();");
  CWE190_Integer_Overflow__char_max_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_11_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_68_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_03_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_61_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_31_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_34_bad();");
  CWE190_Integer_Overflow__int_max_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_02_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_10_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_09_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_connect_socket_preinc_34_bad();");
  CWE190_Integer_Overflow__int_connect_socket_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_67_bad();");
  CWE190_Integer_Overflow__char_max_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_17_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_41_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_10_bad();");
  CWE190_Integer_Overflow__char_max_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_15_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_41_bad();");
  CWE190_Integer_Overflow__short_max_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_06_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_14_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_42_bad();");
  CWE190_Integer_Overflow__int_max_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_68_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_15_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_02_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_18_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_15_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_11_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_22_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_08_bad();");
  CWE190_Integer_Overflow__char_max_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_18_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_preinc_08_bad();");
  CWE190_Integer_Overflow__char_rand_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_16_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_32_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_45_bad();");
  CWE190_Integer_Overflow__short_max_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_preinc_12_bad();");
  CWE190_Integer_Overflow__int_rand_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_21_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_53_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_66_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_67_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_03_bad();");
  CWE190_Integer_Overflow__short_max_preinc_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_10_bad();");
  CWE190_Integer_Overflow__short_max_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_15_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_51_bad();");
  CWE190_Integer_Overflow__char_max_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_54_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_18_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_31_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_12_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_51_bad();");
  CWE190_Integer_Overflow__int_max_preinc_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_34_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_09_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_04_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_68_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_18_bad();");
  CWE190_Integer_Overflow__short_max_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_42_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_14_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_14_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_11_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_64_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_31_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_22_bad();");
  CWE190_Integer_Overflow__char_max_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_32_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_66_bad();");
  CWE190_Integer_Overflow__int_max_preinc_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fgets_preinc_68_bad();");
  CWE190_Integer_Overflow__int_fgets_preinc_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_preinc_44_bad();");
  CWE190_Integer_Overflow__short_max_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_08_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_08_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_44_bad();");
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_44_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_54_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_preinc_17_bad();");
  CWE190_Integer_Overflow__char_max_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_rand_preinc_41_bad();");
  CWE190_Integer_Overflow__int64_t_rand_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_22_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_preinc_41_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_65_bad();");
  CWE190_Integer_Overflow__int_max_preinc_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_listen_socket_preinc_41_bad();");
  CWE190_Integer_Overflow__int_listen_socket_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_09_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_18_bad();");
  CWE190_Integer_Overflow__int_max_preinc_18_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_64_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_64_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_max_preinc_41_bad();");
  CWE190_Integer_Overflow__unsigned_int_max_preinc_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_max_preinc_17_bad();");
  CWE190_Integer_Overflow__int_max_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_10_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_fscanf_preinc_54_bad();");
  CWE190_Integer_Overflow__int_fscanf_preinc_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_preinc_10_bad();");
  CWE190_Integer_Overflow__short_fscanf_preinc_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_max_preinc_45_bad();");
  CWE190_Integer_Overflow__int64_t_max_preinc_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_preinc_17_bad();");
  CWE190_Integer_Overflow__short_rand_preinc_17_bad();
  printLine("Calling CWE190_Integer_Overflow__unsigned_int_rand_preinc_61_bad();");
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_preinc_61_bad();");
  CWE190_Integer_Overflow__char_fscanf_preinc_61_bad();
  return 0;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_01_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0046fc00,&local_18);
  local_18 = local_18 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0046fc00,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_preinc_61b_badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_preinc_61b_goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0046fce8,&local_c);
  local_c = local_c + 1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0046fce8,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_68b_badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_listen_socket_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_listen_socket_preinc_68_goodG2BData + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_listen_socket_preinc_68_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_listen_socket_preinc_68_goodB2GData + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_07_bad(void)

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
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_21_bad(void)

{
  badStatic = 1;
  badSink(0xffffffff);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
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
  goodB2G1Sink(0xffffffff);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0xffffffff);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_03_bad(void)

{
  printUnsignedLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040838d) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004083cb) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0046fe38,&local_c);
  local_9 = local_c;
  local_b = local_c + 1;
  local_a = local_b;
  printHexCharLine((ulong)(uint)(int)local_b);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0046fe38,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (local_c == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_b = local_c + 1;
    local_a = local_b;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_0046fe78,&local_c);
  return (ulong)local_c;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


ulong goodB2GSource(uint uParm1)

{
  uint local_c;
  
  local_c = uParm1;
  __isoc99_fscanf(stdin,&DAT_0046fe78,&local_c);
  return (ulong)local_c;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_max_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_max_preinc_68_goodG2BData + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__unsigned_int_max_preinc_68_goodB2GData == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_max_preinc_68_goodB2GData + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_09_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0046fef0,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_0046fef0,&local_18);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_0046fef0,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_preinc_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_max_preinc_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_preinc_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_06_bad(void)

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
  local_10 = local_c + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408af5) */

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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408be0) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_21_bad(void)

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
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
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
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
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
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047000e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047000e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_17_bad(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0x7fffffffffffffff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_18 + 1;
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0x7fffffffffffffff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
      printLongLongLine(local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_18 + 1;
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_18_bad(void)

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
  printLongLongLine(uVar7 + 1);
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
  if (uVar7 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 + 1);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_preinc_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G1Global == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G2Global != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_preinc_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    local_c = -1;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_c + 1));
    }
  }
  else {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409569) */
/* WARNING: Removing unreachable block (ram,0x00409591) */

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
    printUnsignedLine(3);
  }
  else {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_preinc_45_badData + 1
                                        ));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00470180,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_preinc_45_goodG2BData
                                        + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_fscanf_preinc_45_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_fscanf_preinc_45_goodB2GData
                                          + 1));
  }
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00470180,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_05_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004701f8,&local_10);
  }
  if (staticTrue != 0) {
    local_10 = local_10 + 1;
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
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004701f8,&local_10);
  }
  if (staticFalse == 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004701f8,&local_10);
  }
  if (staticTrue != 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_41_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470248,&local_c);
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470248,&local_c);
  goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_06_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047028c,&local_c);
  local_c = local_c + 1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409cce) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047028c,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
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
  __isoc99_fscanf(stdin,&DAT_0047028c,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409d9d) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE190_Integer_Overflow__int64_t_max_preinc_61b_badSource(void)

{
  return 0x7fffffffffffffff;
}


undefined8 CWE190_Integer_Overflow__int64_t_max_preinc_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__int64_t_max_preinc_61b_goodB2GSource(void)

{
  return 0x7fffffffffffffff;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_63_bad(void)

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
  CWE190_Integer_Overflow__char_rand_preinc_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_preinc_63b_goodG2BSink(&local_9);
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
  CWE190_Integer_Overflow__char_rand_preinc_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_63_bad(void)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_63b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_63b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0047034e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_preinc_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0047034e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0047034e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_fscanf_preinc_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_02_bad(void)

{
  printUnsignedLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a57a) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a5b8) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_preinc_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_preinc_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_preinc_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_max_preinc_65b_badSink(0x7fffffff,uParm2,0x7fffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_max_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_max_preinc_65b_goodB2GSink(0x7fffffff,uParm2,0x7fffffff);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_max_preinc_61b_badSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_max_preinc_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_max_preinc_61b_goodB2GSource(0);
  if (lVar1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_10_bad(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_c = -1;
  }
  if (globalFalse == 0) {
    if (local_c == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_c + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a924) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_07_bad(void)

{
  if (staticFive == 5) {
    printLongLongLine(0x8000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040aae4) */

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


/* WARNING: Removing unreachable block (ram,0x0040ab4f) */

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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00470468,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = local_a + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470468,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470468,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004704b6,&local_c);
  local_20 = local_c;
  CWE190_Integer_Overflow__int_fscanf_preinc_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_fscanf_preinc_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004704b6,&local_c);
  local_20 = local_c;
  CWE190_Integer_Overflow__int_fscanf_preinc_66b_goodB2GSink(local_28);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_01_bad(void)

{
  printUnsignedLine(0);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040af7b) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_07_bad(void)

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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_54c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_54d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_54d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_54d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_17_bad(void)

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
    local_24 = local_24 + 1;
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
    if (local_24 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_24 = local_24 + 1;
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printUnsignedLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_02_bad(void)

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
  local_10 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_52b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_51_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_51b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00470678,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
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
  __isoc99_fscanf(stdin,&DAT_00470678,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00470678,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004706c8,&local_a);
  local_a = local_a + 1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004706c8,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
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
  __isoc99_fscanf(stdin,&DAT_004706c8,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_16_bad(void)

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
  local_1c = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE190_Integer_Overflow__unsigned_int_rand_preinc_61b_badSource(void)

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


undefined8 CWE190_Integer_Overflow__unsigned_int_rand_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__unsigned_int_rand_preinc_61b_goodB2GSource(void)

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


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_65_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int64_t_fscanf_preinc_65b_badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0047073e,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int64_t_fscanf_preinc_65b_goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0047073e,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 badSource(void)

{
  return 0x7f;
}


void CWE190_Integer_Overflow__char_max_preinc_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7f;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_preinc_61b_badSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_preinc_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_preinc_61b_goodB2GSource(0);
  if (lVar1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_16_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004707b8,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004707b8,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0x80000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ca62) */

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


/* WARNING: Removing unreachable block (ram,0x0040cab9) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xffffff80);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = 0x7f;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cc59) */

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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_max_preinc_32_bad(void)

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
  local_1c = 0x7fffffff;
  local_24 = 0x80000000;
  local_20 = local_24;
  printIntLine(0x80000000);
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ce27) */
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
  local_1c = 0x7fffffff;
  local_20 = 0x7fffffff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_rand_preinc_32_bad(void)

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
  local_34 = *local_28 + 1;
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printIntLine(3);
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
  if (local_30 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_34 = local_30 + 1;
    local_30 = local_34;
    printIntLine((ulong)local_34);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_13_bad(void)

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
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_20 = local_14 + 1;
    local_14 = local_20;
    printIntLine((ulong)local_20);
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
  in_addr_t local_34;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_48,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_48[(long)local_1c] = 0;
          local_14 = atoi(local_48);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_14 + 1;
      local_14 = local_20;
      printIntLine((ulong)local_20);
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_20 = 0xffffffff;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_20 = 0xffffffff;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_66b_goodB2GSink(local_28);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_14_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004709fe,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004709fe,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53_bad(void)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_fgets_preinc_32_bad(void)

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
  local_28 = *local_20 + 1;
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printIntLine(3);
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
  if (local_24 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_28 = local_24 + 1;
    local_24 = local_28;
    printIntLine((ulong)local_28);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_preinc_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_preinc_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_preinc_61b_goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_04_bad(void)

{
  printIntLine(0x80000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040de9c) */
/* WARNING: Removing unreachable block (ram,0x0040deb1) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040df04) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040df3e) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_31_bad(void)

{
  printIntLine(0x80000000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e077) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
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


void CWE190_Integer_Overflow__short_fscanf_preinc_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00470b88,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470b88,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470b88,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__int_connect_socket_preinc_61b_badSource(uint uParm1)

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


undefined8 CWE190_Integer_Overflow__int_connect_socket_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_connect_socket_preinc_61b_goodB2GSource(uint uParm1)

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


void badSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470be8,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_goodG2BData + 1))
  ;
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_goodB2GData == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_goodB2GData + 1
                             ));
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470be8,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_03_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_06_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470c64,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e964) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00470c64,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00470c64,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ea27) */

void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_07_bad(void)

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
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_04_bad(void)

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
  local_10 = local_c + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ede1) */

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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040eec9) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_31_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
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
  local_10 = local_c;
  local_18 = local_c + 1;
  local_14 = local_18;
  printIntLine((ulong)local_18);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  local_10 = local_c;
  local_14 = local_c;
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
    local_14 = local_18;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fgets_preinc_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fgets_preinc_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fgets_preinc_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_14_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00470db8,&local_18);
  }
  if (globalFive == 5) {
    local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470db8,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470db8,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_max_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_max_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int64_t_fscanf_preinc_32_bad(void)

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
  __isoc99_fscanf(stdin,&DAT_00470e60,&local_38);
  *local_10 = local_38;
  local_28 = *local_18 + 1;
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
  local_20 = 2;
  local_30 = 3;
  local_28 = local_30;
  printLongLongLine(3);
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
  __isoc99_fscanf(stdin,&DAT_00470e60,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (local_20 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_28 = local_20 + 1;
    local_20 = local_28;
    printLongLongLine(local_28);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_18_bad(void)

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
  local_1c = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_64_bad(void)

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
  CWE190_Integer_Overflow__int_rand_preinc_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_preinc_64b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__int_rand_preinc_64b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_connect_socket_preinc_61b_badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_connect_socket_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_connect_socket_preinc_61b_goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1a = 2;
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  else {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470f46,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00470f46,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64b_goodB2GSink(&local_c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE190_Integer_Overflow__int_connect_socket_preinc_65b_badSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
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
  (*local_18)((ulong)local_c);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_65b_goodG2BSink(2,uParm2,2);
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
  int local_20;
  int local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE190_Integer_Overflow__int_connect_socket_preinc_65b_goodB2GSink;
  local_c = 0;
  local_1c = 0xffffffff;
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,local_48,0xd,0);
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
  (*local_18)((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fgets_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fgets_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00470fe0,&local_a);
  }
  if (staticTrue != 0) {
    local_a = local_a + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470fe0,&local_a);
  }
  if (staticFalse == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
    __isoc99_fscanf(stdin,&DAT_00470fe0,&local_a);
  }
  if (staticTrue != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00471030,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00471030,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_07_bad(void)

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
    local_18 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_22_bad(void)

{
  CWE190_Integer_Overflow__int_max_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_max_preinc_22_badSink(0x7fffffff);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Sink(0x7fffffff);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Sink(0x7fffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_max_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_max_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_04_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004710d0,&local_18);
  local_18 = local_18 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004109fc) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004710d0,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
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
  __isoc99_fscanf(stdin,&DAT_004710d0,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410ae2) */

void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_31_bad(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00471128,&local_28);
  local_10 = local_28;
  local_20 = local_28 + 1;
  local_18 = local_20;
  printLongLongLine(local_20);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void goodB2G(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00471128,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (local_28 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_28 + 1;
    local_18 = local_20;
    printLongLongLine(local_20);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00471168,&local_b);
  local_a = local_b + 1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_00471168,&local_b);
  local_9 = local_b;
  if (local_b == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_b + 1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004711a6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004711a6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_11_bad(void)

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
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_02_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_22_bad(void)

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
  CWE190_Integer_Overflow__int_fgets_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_fgets_preinc_22_badSink((ulong)local_c);
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
  CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G1Sink((ulong)local_c);
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
  CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_fgets_preinc_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fgets_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_fgets_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_11_bad(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00471280,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471280,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471280,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_preinc_65b_badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_preinc_65b_goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_badSink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_badGlobal != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G1Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G1Global == 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G2Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G2Global != 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodG2BSink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_10_bad(void)

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
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0x80000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411bfe) */

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


/* WARNING: Removing unreachable block (ram,0x00411c55) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_52_bad(void)

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
  CWE190_Integer_Overflow__int_rand_preinc_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_preinc_52b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_rand_preinc_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004713f8,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_004713f8,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_01_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_11_bad(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00471470,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471470,&local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471470,&local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_13_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047151e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047151e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047151e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodB2G2Sink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_03_bad(void)

{
  printIntLine(0x80000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041283d) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041287e) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_09_bad(void)

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
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_14_bad(void)

{
  if (globalFive == 5) {
    printUnsignedLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412c63) */

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


/* WARNING: Removing unreachable block (ram,0x00412cb7) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__unsigned_int_max_preinc_32_bad(void)

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
  local_1c = 0xffffffff;
  local_24 = 0;
  local_20 = local_24;
  printUnsignedLine(0);
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printUnsignedLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412e8c) */
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
  local_1c = 0xffffffff;
  local_20 = 0xffffffff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
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


void CWE190_Integer_Overflow__int_listen_socket_preinc_08_bad(void)

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
    local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_16_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004716c0,&local_a);
  local_a = local_a + 1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004716c0,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_13_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00471700,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471700,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471700,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_preinc_68_badData + 1
                                        ));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_preinc_68_goodG2BData
                                        + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_fscanf_preinc_68_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_fscanf_preinc_68_goodB2GData
                                          + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_12_bad(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    local_c = 0x7fffffff;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c + 1));
    }
  }
  else {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413906) */
/* WARNING: Removing unreachable block (ram,0x00413931) */

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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_34_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_04_bad(void)

{
  printUnsignedLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413c9c) */
/* WARNING: Removing unreachable block (ram,0x00413cae) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413cfe) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413d38) */

void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_31_bad(void)

{
  printUnsignedLine(0);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413e6e) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_63_bad(void)

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
  CWE190_Integer_Overflow__int_rand_preinc_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_preinc_63b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__int_rand_preinc_63b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_12_bad(void)

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
    local_c = 2;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_c + 1;
      local_c = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_c + 1;
      local_c = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_03_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471980,&local_18);
  local_18 = local_18 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471980,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00471980,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_11_bad(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 0x7fffffff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 0x7fffffff;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c + 1));
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
    local_c = 0x7fffffff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_02_bad(void)

{
  printIntLine(0x80000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414739) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041477a) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00471a46,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_68_badData = local_a;
  CWE190_Integer_Overflow__short_fscanf_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_fscanf_preinc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00471a46,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_68_goodB2GData = local_a;
  CWE190_Integer_Overflow__short_fscanf_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00471a88,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_b = local_b + 1;
      local_a = local_b;
      printHexCharLine((ulong)(uint)(int)local_b);
    }
  }
  else {
    local_b = local_b + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471a88,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00471a88,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_b = local_b + 1;
      local_a = local_b;
      printHexCharLine((ulong)(uint)(int)local_b);
    }
  }
  else {
    if (local_b == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_b = local_b + 1;
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
    printHexCharLine(3);
  }
  else {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_21_bad(void)

{
  badStatic = 1;
  badSink(0x7fffffffffffffff);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
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
  goodB2G1Sink(0x7fffffffffffffff);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7fffffffffffffff);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_preinc_45_badData + 1
                                           ));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_45_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_preinc_45_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_preinc_45_badData = (byte)iVar2;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_preinc_45_goodG2BData
                                           + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_rand_preinc_45_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_rand_preinc_45_goodB2GData
                                             + 1));
  }
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
    CWE190_Integer_Overflow__char_rand_preinc_45_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_preinc_45_goodB2GData = (byte)iVar2;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_67_bad(void)

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
  CWE190_Integer_Overflow__int64_t_rand_preinc_67b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_67b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int64_t_rand_preinc_67b_goodB2GSink(uVar7);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00471b4e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00471b4e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_15_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041519d) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004151e1) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_64_bad(void)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_64b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_64b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_12_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00471b90,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + 1;
      local_18 = local_20;
      printLongLongLine(local_20);
    }
  }
  else {
    local_20 = local_20 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471b90,&local_20);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00471b90,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + 1;
      local_18 = local_20;
      printLongLongLine(local_20);
    }
  }
  else {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + 1;
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
    printLongLongLine(3);
  }
  else {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_01_bad(void)

{
  printIntLine(0x80000000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00415651) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_06_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471c0c,&local_18);
  local_18 = local_18 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00415731) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471c0c,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00471c0c,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041581a) */

void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_max_preinc_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7fff;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_10_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_17_bad(void)

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
    local_24 = local_24 + 1;
    printIntLine((ulong)local_24);
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
    if (local_24 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_24 = local_24 + 1;
      printIntLine((ulong)local_24);
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_22_bad(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_badSink(0xffffffff);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G1Sink(0xffffffff);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G2Sink(0xffffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_01_bad(void)

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
  local_10 = local_c + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_02_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471e20,&local_18);
  local_18 = local_18 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00471e20,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00471e20,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0x80000000);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 0x7fffffff;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004164c1) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_53d_goodB2GSink((ulong)uParm1);
  return;
}


ulong CWE190_Integer_Overflow__int_rand_preinc_61b_badSource(void)

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


undefined8 CWE190_Integer_Overflow__int_rand_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_rand_preinc_61b_goodB2GSource(void)

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


void CWE190_Integer_Overflow__short_max_preinc_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0xffff8000);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticTrue != 0) {
    local_a = 0x7fff;
  }
  if (staticFalse == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416787) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_41_bad(void)

{
  badSink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE190_Integer_Overflow__short_rand_preinc_65b_badSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_rand_preinc_65b_goodG2BSink(2,uParm2,2);
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
  CWE190_Integer_Overflow__short_rand_preinc_65b_goodB2GSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_10_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00471f38,&local_18);
  }
  if (globalTrue != 0) {
    local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471f38,&local_18);
  }
  if (globalFalse == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00471f38,&local_18);
  }
  if (globalTrue != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416d8c) */

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


/* WARNING: Removing unreachable block (ram,0x00416de0) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_fscanf_preinc_32_bad(void)

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
  __isoc99_fscanf(stdin,&DAT_00471fe0,&local_1c);
  *local_10 = local_1c;
  local_1a = *local_18 + 1;
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
  local_19 = 2;
  local_1b = 3;
  local_1a = local_1b;
  printHexCharLine(3);
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
  __isoc99_fscanf(stdin,&DAT_00471fe0,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (local_19 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1a = local_19 + 1;
    local_19 = local_1a;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_34_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004170c8) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_09_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_44_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00472128,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00472128,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0x80000000);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalTrue != 0) {
    local_c = 0x7fffffff;
  }
  if (globalFalse == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004176bc) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_14_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004721b8,&local_a);
  }
  if (globalFive == 5) {
    local_a = local_a + 1;
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
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004721b8,&local_a);
  }
  if (globalFive == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004721b8,&local_a);
  }
  if (globalFive == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_badData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472208,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_goodG2BData + 1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_goodB2GData == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_goodB2GData + 1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472208,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_goodB2GData = local_10;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_18_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417b5e) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_41_bad(void)

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
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
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


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_01_bad(void)

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
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_68_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_68_badData = local_c;
  CWE190_Integer_Overflow__int_connect_socket_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_connect_socket_preinc_68b_goodG2BSink();
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_68_goodB2GData = local_c;
  CWE190_Integer_Overflow__int_connect_socket_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_02_bad(void)

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
  local_18 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_34_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_06_bad(void)

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
  local_18 = local_c + 1;
  local_c = local_18;
  printIntLine((ulong)local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418b04) */

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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418c73) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_07_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00472498,&local_c);
  }
  if (staticFive == 5) {
    local_c = local_c + 1;
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
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00472498,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00472498,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_09_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
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
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
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
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
  if (GLOBAL_CONST_TRUE != 0) {
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
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_01_bad(void)

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
  local_18 = local_c + 1;
  local_c = local_18;
  printIntLine((ulong)local_18);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_41_bad(void)

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
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
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


void CWE190_Integer_Overflow__int_fgets_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_preinc_68_badData +
                                           1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(
                                           CWE190_Integer_Overflow__char_fscanf_preinc_68_goodG2BData
                                           + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_fscanf_preinc_68_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_preinc_68_goodB2GData
                                             + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_14_bad(void)

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
    printLongLongLine(local_20 + 1);
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
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 + 1);
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
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 + 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_66b_goodG2BSink(local_28);
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
  
  local_1c = 0;
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_16_bad(void)

{
  printUnsignedLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419b8a) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_04_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419db7) */

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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419ea6) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_31_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_09_bad(void)

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
  if (GLOBAL_CONST_TRUE != 0) {
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
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = local_c + 1;
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
  if (GLOBAL_CONST_TRUE != 0) {
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
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
  if (GLOBAL_CONST_TRUE != 0) {
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
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_18_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004727e8,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004727e8,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_max_preinc_45_badData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_45_bad(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_45_badData = 0x7fffffffffffffff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_max_preinc_45_goodG2BData + 1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int64_t_max_preinc_45_goodB2GData == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_max_preinc_45_goodB2GData + 1);
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_45_goodB2GData = 0x7fffffffffffffff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_68_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004728ce,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_68_badData = local_9;
  CWE190_Integer_Overflow__char_fscanf_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_fscanf_preinc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004728ce,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_68_goodB2GData = local_9;
  CWE190_Integer_Overflow__char_fscanf_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_63b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_63b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_51_bad(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_51b_badSink(0xffffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_51b_goodB2GSink(0xffffffff);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53d_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_21_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472910,&local_10);
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
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
  __isoc99_fscanf(stdin,&DAT_00472910,&local_10);
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472910,&local_10);
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_66_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_listen_socket_preinc_66b_goodG2BSink(local_28);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_66_good(void)

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


void CWE190_Integer_Overflow__short_max_preinc_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_max_preinc_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_45_bad(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_45_badData = 0xffffffff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_max_preinc_45_goodG2BData + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__unsigned_int_max_preinc_45_goodB2GData == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_max_preinc_45_goodB2GData + 1));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__unsigned_int_max_preinc_45_goodB2GData = 0xffffffff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00472a76,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_53b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00472a76,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_53b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_15_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b4b9) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b4f5) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_22_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_badSink((ulong)local_c);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_goodB2G1Sink((ulong)local_c);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_connect_socket_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_06_bad(void)

{
  printUnsignedLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b92c) */
/* WARNING: Removing unreachable block (ram,0x0041b93e) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b990) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b9cb) */

void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__int_listen_socket_preinc_61b_badSource(uint uParm1)

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


undefined8 CWE190_Integer_Overflow__int_listen_socket_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_listen_socket_preinc_61b_goodB2GSource(uint uParm1)

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


void CWE190_Integer_Overflow__int_rand_preinc_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_14_bad(void)

{
  if (globalFive == 5) {
    printLongLongLine(0x8000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041bddc) */

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


/* WARNING: Removing unreachable block (ram,0x0041be47) */

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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53_bad(void)

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
  CWE190_Integer_Overflow__char_rand_preinc_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_preinc_53b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__char_rand_preinc_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int64_t_max_preinc_32_bad(void)

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
  local_20 = 0x7fffffffffffffff;
  local_30 = 0x8000000000000000;
  local_28 = local_30;
  printLongLongLine(0x8000000000000000);
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
  local_20 = 2;
  local_30 = 3;
  local_28 = local_30;
  printLongLongLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c132) */
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
  local_20 = 0x7fffffffffffffff;
  local_28 = 0x7fffffffffffffff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00472bd6,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00472bd6,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int_fscanf_preinc_65b_badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00472bd9,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int_fscanf_preinc_65b_goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_00472bd9,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_10_bad(void)

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
  if (globalTrue != 0) {
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
  if (globalTrue != 0) {
    local_18 = local_c + 1;
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
  if (globalTrue != 0) {
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
  if (globalFalse == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
  if (globalTrue != 0) {
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
  if (globalTrue != 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_52c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_52c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_52c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_listen_socket_preinc_61b_badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_listen_socket_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_listen_socket_preinc_61b_goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xffffff80);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticTrue != 0) {
    local_9 = 0x7f;
  }
  if (staticFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c978) */

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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472cbe,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00472cbe,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_64b_goodB2GSink(&local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE190_Integer_Overflow__char_rand_preinc_65b_badSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_rand_preinc_65b_goodG2BSink(2,uParm2,2);
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
  CWE190_Integer_Overflow__char_rand_preinc_65b_goodB2GSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_04_bad(void)

{
  printLongLongLine(0x8000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ccfb) */
/* WARNING: Removing unreachable block (ram,0x0041cd17) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cd7e) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cdbe) */

void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_31_bad(void)

{
  printLongLongLine(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cf33) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_13_bad(void)

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
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_07_bad(void)

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
    local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_05_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_54_bad(void)

{
  CWE190_Integer_Overflow__short_max_preinc_54b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_preinc_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_preinc_54b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00472efe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_52b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00472efe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_52b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00472f08,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = local_a + 1;
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
    __isoc99_fscanf(stdin,&DAT_00472f08,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
    __isoc99_fscanf(stdin,&DAT_00472f08,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_a + 1;
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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00472f56,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_preinc_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00472f56,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_22_badSink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_max_preinc_22_badGlobal != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G1Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G1Global == 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G2Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G2Global != 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_22_goodG2BSink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_max_preinc_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_31_bad(void)

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
  printLongLongLine(uVar7 + 1);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
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
  if (uVar7 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_31_good(void)

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


void CWE190_Integer_Overflow__int_fscanf_preinc_08_bad(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472fe8,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_10 + 1;
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
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472fe8,&local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00472fe8,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_21_bad(void)

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
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
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
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
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
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_03_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_64_bad(void)

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
  CWE190_Integer_Overflow__int64_t_rand_preinc_64b_badSink(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_rand_preinc_64b_goodG2BSink(&local_10);
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
  CWE190_Integer_Overflow__int64_t_rand_preinc_64b_goodB2GSink(local_20);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7fffffff,uParm2,0x7fffffff);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7fffffff,uParm2,0x7fffffff);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_14_bad(void)

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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_51_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0047317e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_51b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0047317e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_51b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__unsigned_int_rand_preinc_32_bad(void)

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
  local_34 = *local_28 + 1;
  local_30 = local_34;
  printUnsignedLine((ulong)local_34);
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printUnsignedLine(3);
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
  if (local_30 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_34 = local_30 + 1;
    local_30 = local_34;
    printUnsignedLine((ulong)local_34);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_22_bad(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int64_t_max_preinc_22_badSink(0x7fffffffffffffff);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G1Sink(0x7fffffffffffffff);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int64_t_max_preinc_22_goodB2G2Sink(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int64_t_max_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004731f8,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_004731f8,&local_18);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_004731f8,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
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
    local_10 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_31_bad(void)

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
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_34_bad(void)

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
  local_14 = local_c + 1;
  local_10 = local_14;
  printIntLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_14 = local_c + 1;
    local_10 = local_14;
    printIntLine((ulong)local_14);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 2;
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  else {
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  else {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_44_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = badSink;
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


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
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
  
  local_18 = goodB2GSink;
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


void CWE190_Integer_Overflow__int_fgets_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00473350,&local_a);
  local_a = local_a + 1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00473350,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
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
  __isoc99_fscanf(stdin,&DAT_00473350,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_preinc_45_badData +
                                           1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_45_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00473390,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_45_badData = local_9;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(
                                           CWE190_Integer_Overflow__char_fscanf_preinc_45_goodG2BData
                                           + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_fscanf_preinc_45_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_preinc_45_goodB2GData
                                             + 1));
  }
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00473390,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_45_goodB2GData = local_9;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_41_bad(void)

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
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
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


void CWE190_Integer_Overflow__int_rand_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_04_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x004201aa) */

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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420293) */

void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_31_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(0x8000000000000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004205c0) */

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


/* WARNING: Removing unreachable block (ram,0x0042062b) */

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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_preinc_68_goodG2BData +
                                        1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_max_preinc_68_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_preinc_68_goodB2GData
                                          + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_18_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00473590,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00473590,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004735ce,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004735ce,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_11_bad(void)

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
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_02_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_44_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473660,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00473660,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52_bad(void)

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
  CWE190_Integer_Overflow__char_rand_preinc_52b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_preinc_52b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__char_rand_preinc_52b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_preinc_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_15_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_03_bad(void)

{
  printLongLongLine(0x8000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421724) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421779) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_01_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_68_bad(void)

{
  CWE190_Integer_Overflow__short_max_preinc_68_badData = 0x7fff;
  CWE190_Integer_Overflow__short_max_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_max_preinc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_preinc_68_goodB2GData = 0x7fff;
  CWE190_Integer_Overflow__short_max_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(void)

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


void CWE190_Integer_Overflow__short_rand_preinc_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


ulong goodB2GSource(void)

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


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_bad(void)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_badSink((ulong)uVar1);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G1Sink((ulong)uVar1);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53_bad(void)

{
  CWE190_Integer_Overflow__short_max_preinc_53b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_preinc_53b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_12_bad(void)

{
  int iVar1;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = 2;
  }
  else {
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
    }
  }
  else {
    printLongLongLine(local_10 + 1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421f7a) */
/* WARNING: Removing unreachable block (ram,0x00421fb1) */

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
    printLongLongLine(3);
  }
  else {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_09_bad(void)

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
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
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
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  if (staticTrue != 0) {
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
  if (staticFalse == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  if (staticTrue != 0) {
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
  if (staticTrue != 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_41_bad(void)

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
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
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
  goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_68b_badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_fscanf_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_fscanf_preinc_68_goodG2BData + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_fscanf_preinc_68_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_fscanf_preinc_68_goodB2GData + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_13_bad(void)

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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_32_bad(void)

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
  __isoc99_fscanf(stdin,&DAT_004739f0,&local_28);
  *local_10 = local_28;
  local_20 = *local_18 + 1;
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printUnsignedLine(3);
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
  __isoc99_fscanf(stdin,&DAT_004739f0,&local_28);
  *local_10 = local_28;
  local_1c = *local_18;
  if (local_1c == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_1c + 1;
    local_1c = local_20;
    printUnsignedLine((ulong)local_20);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_44_bad(undefined8 uParm1,undefined8 uParm2)

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
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
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


void CWE190_Integer_Overflow__short_rand_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_11_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
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
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
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
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
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
    local_10 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_02_bad(void)

{
  printLongLongLine(0x8000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423032) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423087) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_13_bad(void)

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
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLongLine(0x8000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalTrue != 0) {
    local_10 = 0x7fffffffffffffff;
  }
  if (globalFalse == 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004234b2) */

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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xffffff80);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423617) */

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


/* WARNING: Removing unreachable block (ram,0x00423667) */

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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
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


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_08_bad(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00473c50,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_10 + 1;
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
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00473c50,&local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00473c50,&local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_max_preinc_32_bad(void)

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
  local_19 = 0x7f;
  local_1b = 0x80;
  local_1a = local_1b;
  printHexCharLine(0xffffff80);
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
  local_19 = 2;
  local_1b = 3;
  local_1a = local_1b;
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423ae6) */
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
  local_19 = 0x7f;
  local_1a = 0x7f;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_21_bad(void)

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
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
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
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
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
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_03_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_68_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00473d5e,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_68_badData = local_c;
  CWE190_Integer_Overflow__int_fscanf_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_fscanf_preinc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00473d5e,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_68_goodB2GData = local_c;
  CWE190_Integer_Overflow__int_fscanf_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0xffffffff,uParm2,0xffffffff);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0xffffffff,uParm2,0xffffffff);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_01_bad(void)

{
  printLongLongLine(0x8000000000000000);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424223) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52_bad(void)

{
  CWE190_Integer_Overflow__short_max_preinc_52b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_preinc_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_preinc_52b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  undefined4 local_34;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
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
    local_24 = local_14 + 1;
    local_14 = local_24;
    printIntLine((ulong)local_24);
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
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
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
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_24 = local_14 + 1;
      local_14 = local_24;
      printIntLine((ulong)local_24);
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong local_28;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    local_28 = local_28 + 1;
    printLongLongLine(local_28);
    local_20 = local_20 + 1;
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
  ulong local_28;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = ~((long)iVar6 ^
                  (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                  (long)iVar5 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      iVar4 = rand();
      iVar5 = rand();
      iVar6 = rand();
      local_28 = (long)iVar6 ^
                 (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^
                 (long)iVar5 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_28 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_28 = local_28 + 1;
      printLongLongLine(local_28);
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_18 + 1;
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_16_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042493b) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00473eee,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00473eee,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_15_bad(void)

{
  printIntLine(0x80000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424b96) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424bd9) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_04_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424d27) */
/* WARNING: Removing unreachable block (ram,0x00424d39) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424d85) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424dbe) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


undefined8 badSource(void)

{
  return 0x7fffffff;
}


void CWE190_Integer_Overflow__int_max_preinc_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7fffffff;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(0x8000000000000000);
  }
  return;
}


void goodB2G1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0x7fffffffffffffff;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042510d) */

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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_51_bad(void)

{
  CWE190_Integer_Overflow__short_max_preinc_51b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_preinc_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_preinc_51b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_15_bad(void)

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
  local_10 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_c + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_preinc_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_preinc_22_goodB2G1Global == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_preinc_22_goodB2G2Global != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_preinc_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


ulong badSource(uint uParm1)

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


void CWE190_Integer_Overflow__int_fgets_preinc_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


ulong goodB2GSource(uint uParm1)

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


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_preinc_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_max_preinc_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_preinc_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474206,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474206,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_11_bad(void)

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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_02_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_preinc_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_45_bad(void)

{
  CWE190_Integer_Overflow__short_max_preinc_45_badData = 0x7fff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_preinc_45_goodG2BData +
                                        1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_max_preinc_45_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_preinc_45_goodB2GData
                                          + 1));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_preinc_45_goodB2GData = 0x7fff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004742ce,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004742ce,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_63b_goodB2GSink(&local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0x80000000);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_c = 0x7fffffff;
  }
  if (staticFalse == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_c + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042624f) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_64_bad(void)

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
  CWE190_Integer_Overflow__char_rand_preinc_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_preinc_64b_goodG2BSink(&local_9);
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
  CWE190_Integer_Overflow__char_rand_preinc_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_06_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426463) */
/* WARNING: Removing unreachable block (ram,0x00426477) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004264cd) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042650b) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE190_Integer_Overflow__int_rand_preinc_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_rand_preinc_65b_goodG2BSink(2,uParm2,2);
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
  CWE190_Integer_Overflow__int_rand_preinc_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_rand_preinc_61b_badSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_rand_preinc_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_rand_preinc_61b_goodB2GSource(0);
  if (lVar1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00474476,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00474476,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_07_bad(void)

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
    printLongLongLine(local_20 + 1);
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
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 + 1);
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
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 + 1);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_22_bad(void)

{
  CWE190_Integer_Overflow__char_max_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_max_preinc_22_badSink(0x7f);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__char_max_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_max_preinc_22_goodB2G1Sink(0x7f);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__char_max_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_max_preinc_22_goodB2G2Sink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_max_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004744ce,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004744ce,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_01_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_preinc_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_preinc_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_preinc_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_16_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00474548,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00474548,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_64_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_64b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_connect_socket_preinc_64b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_64b_goodB2GSink(&local_14);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xffffff80);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427791) */

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


/* WARNING: Removing unreachable block (ram,0x004277e1) */

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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_65_bad(void)

{
  char *pcVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  code *local_18;
  uint local_c;
  
  local_18 = CWE190_Integer_Overflow__int_fgets_preinc_65b_badSink;
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
  CWE190_Integer_Overflow__int_fgets_preinc_65b_goodG2BSink(2,uParm2,2);
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
  
  local_18 = CWE190_Integer_Overflow__int_fgets_preinc_65b_goodB2GSink;
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


void CWE190_Integer_Overflow__int_fgets_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_66_bad(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x7fffffff;
  local_20 = 0x7fffffff;
  CWE190_Integer_Overflow__int_max_preinc_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_max_preinc_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 0x7fffffff;
  local_20 = 0x7fffffff;
  CWE190_Integer_Overflow__int_max_preinc_66b_goodB2GSink(local_28);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_09_bad(void)

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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_05_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004746b0,&local_18);
  }
  if (staticTrue != 0) {
    local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_004746b0,&local_18);
  }
  if (staticFalse == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    __isoc99_fscanf(stdin,&DAT_004746b0,&local_18);
  }
  if (staticTrue != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_68_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_68_badData = local_c;
  CWE190_Integer_Overflow__int_listen_socket_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_listen_socket_preinc_68b_goodG2BSink();
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_68_goodB2GData = local_c;
  CWE190_Integer_Overflow__int_listen_socket_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_41_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00474740,&local_10);
  badSink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00474740,&local_10);
  goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00474780,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00474780,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68b_badSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68b_goodG2BSink(void)

{
  printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_goodG2BData + 1))
  ;
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_goodB2GData == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_goodB2GData + 1
                             ));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_51_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004747f6,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_51b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004747f6,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_51b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_34_bad(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00474800,&local_20);
  local_18 = local_20 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00474800,&local_20);
  local_10 = local_20;
  if (local_20 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_20 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_listen_socket_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_66_bad(void)

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
  CWE190_Integer_Overflow__int_fgets_preinc_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_fgets_preinc_66b_goodG2BSink(local_28);
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
  CWE190_Integer_Overflow__int_fgets_preinc_66b_goodB2GSink(local_28);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + 1);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_21_bad(void)

{
  badStatic = 1;
  badSink(0x7f);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
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
  goodB2G1Sink(0x7f);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_03_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428ce5) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428d1f) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_22_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_badSink((ulong)local_c);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G1Sink((ulong)local_c);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_listen_socket_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_65b_badSink
            (0x7fffffffffffffff,uParm2,0x7fffffffffffffff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_65b_goodB2GSink
            (0x7fffffffffffffff,uParm2,0x7fffffffffffffff);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047495e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_badData = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0047495e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_goodB2GData = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_rand_preinc_32_bad(void)

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
  local_2e = *local_28 + 1;
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
  local_1a = 2;
  local_1e = 3;
  local_1c = local_1e;
  printIntLine(3);
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
  if (local_2c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_2e = local_2c + 1;
    local_2c = local_2e;
    printIntLine((ulong)(uint)(int)local_2e);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52c_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52c_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474a0e,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_badData = local_c;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474a0e,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_goodB2GData = local_c;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_12_bad(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429849) */
/* WARNING: Removing unreachable block (ram,0x00429873) */

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
    printHexCharLine(3);
  }
  else {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_11_bad(void)

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
    printLongLongLine(local_20 + 1);
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
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 + 1);
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
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_20 + 1);
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
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
    local_10 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474b46,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474b46,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_15_bad(void)

{
  printUnsignedLine(0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429ee6) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429f26) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_04_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a0b4) */

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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a19e) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_31_bad(void)

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
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_18_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474c18,&local_c);
  local_c = local_c + 1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00474c18,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 badSource(void)

{
  return 0xffffffff;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printUnsignedLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0xffffffff;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_02_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a830) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a86a) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_34_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_68b_badSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_max_preinc_68_badData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_68b_goodG2BSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_max_preinc_68_goodG2BData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int64_t_max_preinc_68_goodB2GData == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_max_preinc_68_goodB2GData + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_67_bad(void)

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
  CWE190_Integer_Overflow__int_listen_socket_preinc_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_listen_socket_preinc_67b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_listen_socket_preinc_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G1Global == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G2Global != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_21_bad(void)

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
  badStatic = 1;
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
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
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
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
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xffffff80);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalTrue != 0) {
    local_9 = 0x7f;
  }
  if (globalFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b1f7) */

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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_03_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00474eb0,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00474eb0,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00474eb0,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_05_bad(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(0);
  }
  return;
}


void goodB2G1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticTrue != 0) {
    local_c = -1;
  }
  if (staticFalse == 0) {
    if (local_c == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_c + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042b522) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_41_bad(void)

{
  badSink(0xffffffff);
  return;
}


void goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0xffffffff);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_65b_goodG2BSink(2,uParm2,2);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_65b_goodB2GSink
            ((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_63_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_63b_badSink(&local_14);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_connect_socket_preinc_63b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_63b_goodB2GSink(&local_14);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_01_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ba96) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_preinc_68_badData + 1)
                  );
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_preinc_68_goodG2BData
                                           + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_max_preinc_68_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_max_preinc_68_goodB2GData
                                             + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_07_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_17_bad(void)

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
    local_11 = local_11 + 1;
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
    if (local_11 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_11 = local_11 + 1;
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
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_11 + 1;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_22_bad(void)

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
  CWE190_Integer_Overflow__short_rand_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_rand_preinc_22_badSink((ulong)(uint)(int)(short)uVar1);
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
  CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
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
  CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_rand_preinc_22_goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_rand_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004750be,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004750be,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 + 1));
  }
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475138,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
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
  __isoc99_fscanf(stdin,&DAT_00475138,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475138,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_04_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475190,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c5e1) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475190,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00475190,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c6a5) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_31_bad(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004751e0,&local_18);
  local_c = local_18;
  local_14 = local_18 + 1;
  local_10 = local_14;
  printIntLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004751e0,&local_18);
  local_c = local_18;
  local_10 = local_18;
  if (local_18 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_14 = local_18 + 1;
    local_10 = local_14;
    printIntLine((ulong)local_14);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xffff8000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c8c8) */

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


/* WARNING: Removing unreachable block (ram,0x0042c920) */

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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_12_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
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
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
      local_c = local_1c;
      printIntLine((ulong)local_1c);
    }
  }
  else {
    local_18 = local_c + 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
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
  in_addr_t local_54;
  char local_48 [16];
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_18 = 0xffffffff;
    local_18 = socket(2,1,6);
    if (local_18 != -1) {
      memset(&local_58,0,0x10);
      local_58 = 2;
      local_54 = inet_addr("127.0.0.1");
      local_56 = htons(0x6987);
      iVar1 = connect(local_18,(sockaddr *)&local_58,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_18,local_68,0xd,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          local_68[(long)local_1c] = 0;
          local_c = atoi(local_68);
        }
      }
    }
    if (local_18 != -1) {
      close(local_18);
    }
  }
  else {
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
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_24 = local_c + 1;
      local_c = local_24;
      printIntLine((ulong)local_24);
    }
  }
  else {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_c + 1;
      local_c = local_20;
      printIntLine((ulong)local_20);
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_max_preinc_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_max_preinc_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_53b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_53c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_53c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_53c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54_bad(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54b_badSink(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54b_goodB2GSink(0x7fffffffffffffff);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fscanf_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_fscanf_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004753c6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004753c6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_10_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
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
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
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
  if (globalFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
  if (globalTrue != 0) {
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
  if (globalTrue != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_68_bad(void)

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
    CWE190_Integer_Overflow__int64_t_rand_preinc_68_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE190_Integer_Overflow__int64_t_rand_preinc_68_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE190_Integer_Overflow__int64_t_rand_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int64_t_rand_preinc_68b_goodG2BSink();
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
    CWE190_Integer_Overflow__int64_t_rand_preinc_68_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE190_Integer_Overflow__int64_t_rand_preinc_68_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  CWE190_Integer_Overflow__int64_t_rand_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_21_bad(void)

{
  badStatic = 1;
  badSink(0x7fff);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
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
  goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xffffff80);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d8be) */

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


/* WARNING: Removing unreachable block (ram,0x0042d90e) */

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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_max_preinc_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_45_bad(void)

{
  CWE190_Integer_Overflow__int_max_preinc_45_badData = 0x7fffffff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_max_preinc_45_goodG2BData + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_max_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_max_preinc_45_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_max_preinc_45_goodB2GData + 1));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__int_max_preinc_45_goodB2GData = 0x7fffffff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_53_bad(void)

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
  CWE190_Integer_Overflow__int64_t_rand_preinc_53b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_53b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int64_t_rand_preinc_53b_goodB2GSink(uVar7);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047552e,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_fscanf_preinc_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047552e,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_0047552e,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_fscanf_preinc_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_fscanf_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_preinc_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_preinc_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_preinc_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_34_bad(void)

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
  local_1c = local_c + 1;
  local_18 = local_1c;
  printIntLine((ulong)local_1c);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
    local_18 = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_67_bad(void)

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
  CWE190_Integer_Overflow__int_fgets_preinc_67b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fgets_preinc_67b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_fgets_preinc_67b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_12_bad(void)

{
  int iVar1;
  short local_a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e3e5) */
/* WARNING: Removing unreachable block (ram,0x0042e413) */

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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_11_bad(void)

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
    local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_64_bad(void)

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
  CWE190_Integer_Overflow__int_fgets_preinc_64b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_fgets_preinc_64b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__int_fgets_preinc_64b_goodB2GSink(&local_c);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_13_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00475670,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475670,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475670,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_11_bad(void)

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
  iVar1 = globalReturnsTrue();
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
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = local_c + 1;
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
  iVar1 = globalReturnsTrue();
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
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
  iVar1 = globalReturnsTrue();
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
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_11_good(void)

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


void CWE190_Integer_Overflow__char_rand_preinc_08_bad(void)

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
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
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
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_63_bad(void)

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
  CWE190_Integer_Overflow__short_rand_preinc_63b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_rand_preinc_63b_goodG2BSink(&local_a);
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
  CWE190_Integer_Overflow__short_rand_preinc_63b_goodB2GSink(local_1a);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_02_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f488) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f4ca) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_44_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004757f0,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004757f0,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54e_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54e_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0xffff8000);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = 0x7fff;
  }
  if (globalFalse == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f91d) */

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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


ulong CWE190_Integer_Overflow__int64_t_rand_preinc_61b_badSource(void)

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


undefined8 CWE190_Integer_Overflow__int64_t_rand_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int64_t_rand_preinc_61b_goodB2GSource(void)

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


void CWE190_Integer_Overflow__int64_t_rand_preinc_52_bad(void)

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
  CWE190_Integer_Overflow__int64_t_rand_preinc_52b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_52b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int64_t_rand_preinc_52b_goodB2GSink(uVar7);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_51b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_51b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_51b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
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


void CWE190_Integer_Overflow__int_connect_socket_preinc_08_bad(void)

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
    local_18 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_16_bad(void)

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
  printLongLongLine(uVar7 + 1);
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
  if (uVar7 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 + 1);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_01_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004304d9) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_14_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00475a28,&local_10);
  }
  if (globalFive == 5) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475a28,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475a28,&local_10);
  }
  if (globalFive == 5) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_17_bad(void)

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
    local_22 = local_22 + 1;
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
    if (local_22 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_22 = local_22 + 1;
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
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_12 + 1;
    printIntLine((ulong)(uint)(int)local_12);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_67_bad(void)

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
  CWE190_Integer_Overflow__int_rand_preinc_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_preinc_67b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_rand_preinc_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_12_bad(void)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_14 = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00475b20,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
      local_10 = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    local_14 = local_14 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475b20,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00475b20,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
      local_10 = local_14;
      printIntLine((ulong)local_14);
    }
  }
  else {
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_44_bad(void)

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
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
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


void CWE190_Integer_Overflow__int_listen_socket_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54_bad(void)

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
  CWE190_Integer_Overflow__char_rand_preinc_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_preinc_54b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__char_rand_preinc_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_51_bad(void)

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
  CWE190_Integer_Overflow__int64_t_rand_preinc_51b_badSink(uVar7);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_51b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int64_t_rand_preinc_51b_goodB2GSink(uVar7);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xffff8000);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = 0x7fff;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004313e9) */

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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__short_rand_preinc_61b_badSource(void)

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


undefined8 CWE190_Integer_Overflow__short_rand_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__short_rand_preinc_61b_goodB2GSource(void)

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


void CWE190_Integer_Overflow__int_max_preinc_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_04_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475c28,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004316c4) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475c28,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00475c28,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431784) */

void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_31_bad(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00475c78,&local_18);
  local_c = local_18;
  local_14 = local_18 + 1;
  local_10 = local_14;
  printUnsignedLine((ulong)local_14);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


void goodB2G(void)

{
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00475c78,&local_18);
  local_c = local_18;
  local_10 = local_18;
  if (local_18 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_14 = local_18 + 1;
    local_10 = local_14;
    printUnsignedLine((ulong)local_14);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_rand_preinc_45_badData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_45_bad(void)

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
    CWE190_Integer_Overflow__int64_t_rand_preinc_45_badData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE190_Integer_Overflow__int64_t_rand_preinc_45_badData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_rand_preinc_45_goodG2BData + 1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_rand_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int64_t_rand_preinc_45_goodB2GData == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_rand_preinc_45_goodB2GData + 1);
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
    CWE190_Integer_Overflow__int64_t_rand_preinc_45_goodB2GData =
         ~((long)iVar6 ^
          (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    CWE190_Integer_Overflow__int64_t_rand_preinc_45_goodB2GData =
         (long)iVar6 ^
         (long)iVar2 << 0x3c ^ (long)iVar3 << 0x2d ^ (long)iVar4 << 0x1e ^ (long)iVar5 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_06_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475cf4,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431c38) */

void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475cf4,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00475cf4,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431cff) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_06_bad(void)

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
  printLongLongLine(uVar7 + 1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431f44) */

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
  if (uVar7 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 + 1);
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
  if (uVar7 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(uVar7 + 1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004320a4) */

void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_02_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475da0,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00475da0,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00475da0,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_03_bad(void)

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
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_fscanf_preinc_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_45_bad(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475e18,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_fscanf_preinc_45_goodG2BData + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_fscanf_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_fscanf_preinc_45_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_fscanf_preinc_45_goodB2GData + 1));
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475e18,&local_c);
  CWE190_Integer_Overflow__int_fscanf_preinc_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_54b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_54b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_54b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_preinc_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_preinc_61b_goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_63_bad(void)

{
  undefined4 local_c;
  
  local_c = 0x7fffffff;
  CWE190_Integer_Overflow__int_max_preinc_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_max_preinc_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  undefined4 local_c;
  
  local_c = 0x7fffffff;
  CWE190_Integer_Overflow__int_max_preinc_63b_goodB2GSink(&local_c);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_10_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00475ed0,&local_10);
  }
  if (globalTrue != 0) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475ed0,&local_10);
  }
  if (globalFalse == 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00475ed0,&local_10);
  }
  if (globalTrue != 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_badGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G1Global == 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G2Global != 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodG2BGlobal != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_64b_badSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_64b_goodG2BSink(int *piParm1)

{
  printUnsignedLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475fe0,&local_c);
  local_c = local_c + 1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00475fe0,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
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
  __isoc99_fscanf(stdin,&DAT_00475fe0,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_07_bad(void)

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
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_01_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476070,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printIntLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476070,&local_10);
  if (local_10 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printIntLine((ulong)local_10);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004760b0,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__short_fscanf_preinc_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004760b0,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_63_bad(void)

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
  CWE190_Integer_Overflow__int_fgets_preinc_63b_badSink(&local_c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_fgets_preinc_63b_goodG2BSink(&local_c);
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
  CWE190_Integer_Overflow__int_fgets_preinc_63b_goodB2GSink(&local_c);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_67_bad(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_67b_badSink(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_67b_goodB2GSink(0x7fffffffffffffff);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476136,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476136,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00476136,&local_c);
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_09_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476140,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00476140,&local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00476140,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_10 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004761c8,&local_c);
  }
  if (staticTrue != 0) {
    local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_004761c8,&local_c);
  }
  if (staticFalse == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_004761c8,&local_c);
  }
  if (staticTrue != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00476220,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00476220,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_17_bad(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0x7fffffff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
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
    local_14 = 0x7fffffff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_18_bad(void)

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
  printIntLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_13_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00476308,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00476308,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00476308,&local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00476390,&local_e);
  local_c = local_e + 1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00476390,&local_e);
  local_a = local_e;
  if (local_e == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_e + 1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_fgets_preinc_61b_badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_fgets_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_fgets_preinc_61b_goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_68b_badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_connect_socket_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_connect_socket_preinc_68_goodG2BData + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_connect_socket_preinc_68_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_connect_socket_preinc_68_goodB2GData + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_17_bad(void)

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
    local_18 = local_14 + 1;
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
    if (local_14 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_14 + 1;
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 CWE190_Integer_Overflow__int_max_preinc_61b_badSource(void)

{
  return 0x7fffffff;
}


undefined8 CWE190_Integer_Overflow__int_max_preinc_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__int_max_preinc_61b_goodB2GSource(void)

{
  return 0x7fffffff;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_67b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_67b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_preinc_65b_badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_preinc_65b_goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54d_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54e_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54e_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54e_goodB2GSink(uParm1);
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_21_bad(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004764f8,&local_c);
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
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
  __isoc99_fscanf(stdin,&DAT_004764f8,&local_c);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == -1) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004764f8,&local_c);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_03_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476548,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476548,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_00476548,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_53_bad(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_53b_badSink(0x7fffffffffffffff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_53b_goodB2GSink(0x7fffffffffffffff);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE190_Integer_Overflow__int_fgets_preinc_61b_badSource(uint uParm1)

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


undefined8 CWE190_Integer_Overflow__int_fgets_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_fgets_preinc_61b_goodB2GSource(uint uParm1)

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


void CWE190_Integer_Overflow__int_connect_socket_preinc_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004765ce,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_preinc_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_fscanf_preinc_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004765ce,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_preinc_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_max_preinc_61b_badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_max_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_max_preinc_61b_goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_17_bad(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00476610,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_20 = local_20 + 1;
    local_18 = local_20;
    printLongLongLine(local_20);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00476610,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_20 = local_20 + 1;
      local_18 = local_20;
      printLongLongLine(local_20);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_18 + 1;
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_67_bad(void)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_67b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0x80000000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00435499) */

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


/* WARNING: Removing unreachable block (ram,0x004354f0) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_12_bad(void)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_14 = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004766d8,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
      local_10 = local_14;
      printUnsignedLine((ulong)local_14);
    }
  }
  else {
    local_14 = local_14 + 1;
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
    __isoc99_fscanf(stdin,&DAT_004766d8,&local_14);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_004766d8,&local_14);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_14 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
      local_10 = local_14;
      printUnsignedLine((ulong)local_14);
    }
  }
  else {
    if (local_14 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
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
    printUnsignedLine(3);
  }
  else {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_preinc_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_53_bad(void)

{
  CWE190_Integer_Overflow__char_max_preinc_53b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_preinc_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_preinc_53b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_53b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_53b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_53b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_54d_goodB2GSink((ulong)uParm1);
  return;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_preinc_61b_badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_00476790,&local_10);
  return local_10;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_preinc_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_preinc_61b_goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_00476790,&local_10);
  return local_10;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66b_badSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66b_goodG2BSink(long lParm1)

{
  printUnsignedLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_15_bad(void)

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
  local_1c = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_21_bad(void)

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
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
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
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
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
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_18_bad(void)

{
  printLongLongLine(0x8000000000000000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00436450) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_52b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_52c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_52c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_52c_goodB2GSink(uParm1);
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


void CWE190_Integer_Overflow__int_listen_socket_preinc_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
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
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_02_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004768c8,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodB2G1(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004768c8,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
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
  __isoc99_fscanf(stdin,&DAT_004768c8,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void goodG2B1(void)

{
  printUnsignedLine(3);
  return;
}


void goodG2B2(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_06_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0047690c,&local_a);
  local_a = local_a + 1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00436a4d) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0047690c,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
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
  __isoc99_fscanf(stdin,&DAT_0047690c,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00436b10) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_16_bad(void)

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
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_16_good(void)

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


void CWE190_Integer_Overflow__int_rand_preinc_08_bad(void)

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
    printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_10_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004769e8,&local_10);
  }
  if (globalTrue != 0) {
    local_10 = local_10 + 1;
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
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004769e8,&local_10);
  }
  if (globalFalse == 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004769e8,&local_10);
  }
  if (globalTrue != 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_07_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00476a38,&local_18);
  }
  if (staticFive == 5) {
    local_18 = local_18 + 1;
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
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00476a38,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00476a38,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_18 + 1;
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
  if (staticFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_05_bad(void)

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
  if (staticTrue != 0) {
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
  if (staticTrue != 0) {
    local_1c = local_c + 1;
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
  if (staticTrue != 0) {
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
  if (staticFalse == 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
  if (staticTrue != 0) {
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
  if (staticTrue != 0) {
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
  if (staticFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_41_bad(void)

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
  badSink((ulong)local_c);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
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
  goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_01_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476b18,&local_10);
  local_10 = local_10 + 1;
  local_c = local_10;
  printUnsignedLine((ulong)local_10);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


void goodB2G(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00476b18,&local_10);
  if (local_10 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_10 + 1;
    local_c = local_10;
    printUnsignedLine((ulong)local_10);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_51_bad(void)

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
  CWE190_Integer_Overflow__char_rand_preinc_51b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_preinc_51b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__char_rand_preinc_51b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_52b_badSink((ulong)local_c);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_52b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_52b_goodB2GSink((ulong)local_c);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_34_bad(void)

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
  local_20 = local_c + 1;
  local_1c = local_20;
  printIntLine((ulong)local_20);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_c + 1;
    local_1c = local_20;
    printIntLine((ulong)local_20);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_16_bad(void)

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
  local_18 = local_c + 1;
  local_c = local_18;
  printIntLine((ulong)local_18);
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_c + 1;
    local_c = local_18;
    printIntLine((ulong)local_18);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_03_bad(void)

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
  local_1c = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
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
  if (local_c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_c + 1;
    local_c = local_1c;
    printIntLine((ulong)local_1c);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_34_bad(void)

{
  printIntLine(0x80000000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00438ae6) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_09_bad(void)

{
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476cc0,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_10 + 1;
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
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476cc0,&local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00476cc0,&local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_10 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_10 + 1;
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
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_06_bad(void)

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
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00438ddb) */

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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
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
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00438ea2) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_31_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00438fce) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_17_bad(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xffffffff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
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
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 0xffffffff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_14 = local_14 + 1;
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
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_14 = local_14 + 1;
    printUnsignedLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_18_bad(void)

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
  printUnsignedLine((ulong)(uVar1 + 1));
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
  if (uVar1 == 0xffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 2;
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  else {
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
    }
  }
  else {
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    printUnsignedLine(3);
  }
  else {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54_bad(void)

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
  CWE190_Integer_Overflow__int_rand_preinc_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_preinc_54b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_rand_preinc_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_max_preinc_32_bad(void)

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
  local_1a = 0x7fff;
  local_1e = 0x8000;
  local_1c = local_1e;
  printIntLine(0xffff8000);
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
  local_1a = 2;
  local_1e = 3;
  local_1c = local_1e;
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00439853) */
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
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_34_bad(void)

{
  printUnsignedLine(0);
  return;
}


void goodG2B(void)

{
  printUnsignedLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043992b) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_rand_preinc_44_bad(undefined8 uParm1,undefined8 uParm2)

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
  printLongLongLine(lParm1 + 1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
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


void CWE190_Integer_Overflow__int64_t_rand_preinc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_41_bad(void)

{
  badSink(0x7fffffff);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7fffffff);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 CWE190_Integer_Overflow__unsigned_int_max_preinc_61b_badSource(void)

{
  return 0xffffffff;
}


undefined8 CWE190_Integer_Overflow__unsigned_int_max_preinc_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__unsigned_int_max_preinc_61b_goodB2GSource(void)

{
  return 0xffffffff;
}


void CWE190_Integer_Overflow__char_max_preinc_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_connect_socket_preinc_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_45_bad(void)

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
  CWE190_Integer_Overflow__int_connect_socket_preinc_45_badData = local_c;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_connect_socket_preinc_45_goodG2BData + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_connect_socket_preinc_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_connect_socket_preinc_45_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_connect_socket_preinc_45_goodB2GData + 1));
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
  CWE190_Integer_Overflow__int_connect_socket_preinc_45_goodB2GData = local_c;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_connect_socket_preinc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00477018,&local_c);
  }
  if (globalFive == 5) {
    local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_00477018,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_00477018,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_14_good(void)

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


void CWE190_Integer_Overflow__int64_t_max_preinc_08_bad(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
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
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0x7fffffffffffffff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_10 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(local_10 + 1);
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
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
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
    local_10 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_fscanf_preinc_32_bad(void)

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
  __isoc99_fscanf(stdin,&DAT_004770c0,&local_20);
  *local_10 = local_20;
  local_1c = *local_18 + 1;
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
  local_1a = 2;
  local_1e = 3;
  local_1c = local_1e;
  printIntLine(3);
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
  __isoc99_fscanf(stdin,&DAT_004770c0,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (local_1a == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_1a + 1;
    local_1a = local_1c;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_preinc_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_67_bad(void)

{
  CWE190_Integer_Overflow__char_max_preinc_67b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_preinc_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_preinc_67b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__unsigned_int_max_preinc_61b_badSource(0);
  printUnsignedLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__unsigned_int_max_preinc_61b_goodG2BSource(0);
  printUnsignedLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__unsigned_int_max_preinc_61b_goodB2GSource(0);
  if (iVar1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_54c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00477178,&local_c);
  local_c = local_c + 1;
  local_a = local_c;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043a956) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00477178,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
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
  __isoc99_fscanf(stdin,&DAT_00477178,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_c + 1;
    local_a = local_c;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043aa22) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004771d0,&local_10);
  local_a = local_10;
  local_e = local_10 + 1;
  local_c = local_e;
  printIntLine((ulong)(uint)(int)local_e);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004771d0,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (local_10 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_e = local_10 + 1;
    local_c = local_e;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_07_bad(void)

{
  if (staticFive == 5) {
    printUnsignedLine(0);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043ac5b) */

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


/* WARNING: Removing unreachable block (ram,0x0043acaf) */

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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printUnsignedLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_max_preinc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0047725e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_preinc_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0047725e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_preinc_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65b_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65b_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_68b_badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_preinc_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_preinc_68_goodG2BData + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_rand_preinc_68_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_preinc_68_goodB2GData + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53d_badSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53d_goodG2BSink(int iParm1)

{
  printUnsignedLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == -1) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printUnsignedLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_preinc_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G1Global == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G2Global != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_preinc_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_preinc_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_preinc_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_preinc_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65_bad(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65b_badSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_0047735e,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  uint local_14;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65b_goodB2GSink;
  local_14 = 0;
  __isoc99_fscanf(stdin,&DAT_0047735e,&local_14);
  (*local_10)((ulong)local_14);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_preinc_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_44_good(void)

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


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_08_bad(void)

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
    printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    if (local_1c == 0xffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printUnsignedLine((ulong)(local_1c + 1));
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printUnsignedLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00477428,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_12 + 1;
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
    __isoc99_fscanf(stdin,&DAT_00477428,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_12 = local_12 + 1;
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
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_11 + 1;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_preinc_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_preinc_68_badData = rand();
    CWE190_Integer_Overflow__int_rand_preinc_68_badData =
         CWE190_Integer_Overflow__int_rand_preinc_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_preinc_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_rand_preinc_68b_goodG2BSink();
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
    CWE190_Integer_Overflow__int_rand_preinc_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_preinc_68_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_preinc_68_goodB2GData =
         CWE190_Integer_Overflow__int_rand_preinc_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_preinc_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_preinc_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_preinc_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_preinc_61b_goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047749e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_preinc_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047749e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0047749e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_fscanf_preinc_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_preinc_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_preinc_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_preinc_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_preinc_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_preinc_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_preinc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_15_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004774a8,&local_18);
  local_18 = local_18 + 1;
  local_10 = local_18;
  printLongLongLine(local_18);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004774a8,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
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
  __isoc99_fscanf(stdin,&DAT_004774a8,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_18 + 1;
    local_10 = local_18;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_53c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_53d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_53d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_max_preinc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_max_preinc_53d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fgets_preinc_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53_bad(void)

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
  CWE190_Integer_Overflow__int_rand_preinc_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_preinc_53b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__int_rand_preinc_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_preinc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE190_Integer_Overflow__char_fscanf_preinc_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0047751e,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__char_fscanf_preinc_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_fscanf_preinc_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0047751e,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_11_bad(void)

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
    local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
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
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00477578,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_00477578,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    __isoc99_fscanf(stdin,&DAT_00477578,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_c + 1;
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
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_preinc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_18_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043c74a) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_preinc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00477608,&local_a);
  local_a = local_a + 1;
  local_9 = local_a;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00477608,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
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
  __isoc99_fscanf(stdin,&DAT_00477608,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_a + 1;
    local_9 = local_a;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_14_bad(void)

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
    local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    if (local_c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_1c = local_c + 1;
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
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_listen_socket_preinc_32_bad(void)

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
  local_30 = *local_20 + 1;
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
  local_1c = 2;
  local_24 = 3;
  local_20 = local_24;
  printIntLine(3);
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
  if (local_2c == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_30 = local_2c + 1;
    local_2c = local_30;
    printIntLine((ulong)local_30);
  }
  return;
}


void CWE190_Integer_Overflow__int_listen_socket_preinc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_preinc_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_max_preinc_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_max_preinc_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_max_preinc_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_max_preinc_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_preinc_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_preinc_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_preinc_61b_goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_preinc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_53d_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_53d_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_preinc_53d_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_fscanf_preinc_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54_bad(void)

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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54b_goodG2BSink(2);
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
  CWE190_Integer_Overflow__unsigned_int_rand_preinc_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__unsigned_int_rand_preinc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_preinc_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_preinc_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_preinc_68_badData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_preinc_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_preinc_68_goodG2BData = 2;
  return;
}



{
  
  }