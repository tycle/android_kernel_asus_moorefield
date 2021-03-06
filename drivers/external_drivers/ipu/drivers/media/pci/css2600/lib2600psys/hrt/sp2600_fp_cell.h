#ifndef _sp2600_fp_cell_h
#define _sp2600_fp_cell_h

#include <hrt/api.h>

#define sp2600_fp_prog_mem_slave_port  sp2600_fp_unreachable_cell_port
#define sp2600_fp_prog_mem_width       0
#define sp2600_fp_prog_mem_base        0x0
#define sp2600_fp_prog_mem_end         0x0
#define sp2600_fp_prog_mem_size        0x0
#define sp2600_fp_stat_ctrl_slave_port sp2600_fp_sl_stat_ip_cell_port
#define sp2600_fp_stat_ctrl_base       0x0
#define sp2600_fp_view_table_base      0x0
#define sp2600_fp_num_views            1
#define sp2600_fp_default_mem          sp2600_fp_dmem
#define sp2600_fp_int_size             4
#define sp2600_fp_char_bits            8
#define sp2600_fp_uchar_bits           sp2600_fp_char_bits
#define sp2600_fp_short_bits           16
#define sp2600_fp_ushort_bits           sp2600_fp_short_bits
#define sp2600_fp_int_bits             32
#define sp2600_fp_uint_bits            sp2600_fp_int_bits
#define sp2600_fp_long_bits            32
#define sp2600_fp_ulong_bits           sp2600_fp_long_bits
#define sp2600_fp_ptr_bits             32

#define sp2600_fp_start_address_register          0x1
#define sp2600_fp_break_address_register          0x2
#define sp2600_fp_debug_pc_register               0x33
#define sp2600_fp_reset_flag_register             0x0
#define sp2600_fp_reset_flag_bit                  0x0
#define sp2600_fp_start_flag_register             0x0
#define sp2600_fp_start_flag_bit                  0x1
#define sp2600_fp_break_flag_register             0x0
#define sp2600_fp_break_flag_bit                  0x2
#define sp2600_fp_run_flag_register               0x0
#define sp2600_fp_run_flag_bit                    0x3
#define sp2600_fp_broken_flag_register            0x0
#define sp2600_fp_broken_flag_bit                 0x4
#define sp2600_fp_ready_flag_register             0x0
#define sp2600_fp_ready_flag_bit                  0x5
#define sp2600_fp_sleeping_flag_register          0x0
#define sp2600_fp_sleeping_flag_bit               0x6
#define sp2600_fp_stalling_flag_register          0x0
#define sp2600_fp_stalling_flag_bit               0x7
#define sp2600_fp_irq_clr_flag_register           0x0
#define sp2600_fp_irq_clr_flag_bit                0x8
#define sp2600_fp_broken_irq_mask_flag_register   0x0
#define sp2600_fp_broken_irq_mask_flag_bit        0x9
#define sp2600_fp_ready_irq_mask_flag_register    0x0
#define sp2600_fp_ready_irq_mask_flag_bit         0xA
#define sp2600_fp_sleeping_irq_mask_flag_register 0x0
#define sp2600_fp_sleeping_irq_mask_flag_bit      0xB
#define sp2600_fp_debug_step_flag_register        0x32
#define sp2600_fp_debug_step_flag_bit             0x0
#define sp2600_fp_loop_cache_invalidate_flag_register    0x35
#define sp2600_fp_loop_cache_invalidate_flag_bit         0x0
#define sp2600_fp_pmem_slave_access_flag_register 0x36
#define sp2600_fp_pmem_slave_access_flag_bit      0x0
#define sp2600_fp_program_filename_register       sp2600_fp_start_flag_register
#define sp2600_fp_config_icache_loc_mt_am_inst_0_op0_stalling_flag_register 0x34
#define sp2600_fp_config_icache_loc_mt_am_inst_0_op0_stalling_flag_bit 0x0
#define sp2600_fp_dmem_loc_mt_am_inst_1_op0_stalling_flag_register 0x34
#define sp2600_fp_dmem_loc_mt_am_inst_1_op0_stalling_flag_bit 0x1
#define sp2600_fp_qmem_loc_mt_am_inst_2_op0_stalling_flag_register 0x34
#define sp2600_fp_qmem_loc_mt_am_inst_2_op0_stalling_flag_bit 0x2
#define sp2600_fp_cmem_loc_mt_am_inst_3_op0_stalling_flag_register 0x34
#define sp2600_fp_cmem_loc_mt_am_inst_3_op0_stalling_flag_bit 0x3
#define sp2600_fp_xmem_loc_mt_am_inst_4_op0_stalling_flag_register 0x34
#define sp2600_fp_xmem_loc_mt_am_inst_4_op0_stalling_flag_bit 0x4
#define sp2600_fp_dmem1_loc_mt_am_inst_5_op0_stalling_flag_register 0x34
#define sp2600_fp_dmem1_loc_mt_am_inst_5_op0_stalling_flag_bit 0x5

#define sp2600_fp_icache config_icache_icache
#define sp2600_fp_icache_segment_size 524288
#define sp2600_fp_config_icache_master_base_address_lowest_register 0x4
#define sp2600_fp_config_icache_master_burst_size_register          0x2E
#define sp2600_fp_config_icache_master_burst_size_lsb               0x0
#define sp2600_fp_config_icache_master_burst_size_num_bits          0x4
#define sp2600_fp_config_icache_master_burst_timeout_register       0x2E
#define sp2600_fp_config_icache_master_burst_timeout_lsb            0x4
#define sp2600_fp_config_icache_master_burst_timeout_num_bits       0x4
#define sp2600_fp_icache_master_interface sp2600_fp_config_icache_master
#define sp2600_fp_qmem_master_int_base_address_lowest_register 0x7
#define sp2600_fp_qmem_master_int_burst_size_register          0x0
#define sp2600_fp_qmem_master_int_burst_size_lsb               0x0
#define sp2600_fp_qmem_master_int_burst_size_num_bits          0x0
#define sp2600_fp_qmem_master_int_burst_timeout_register       0x2F
#define sp2600_fp_qmem_master_int_burst_timeout_lsb            0x0
#define sp2600_fp_qmem_master_int_burst_timeout_num_bits       0x4
#define sp2600_fp_cmem_master_int_base_address_lowest_register 0xA
#define sp2600_fp_cmem_master_int_burst_size_register          0x0
#define sp2600_fp_cmem_master_int_burst_size_lsb               0x0
#define sp2600_fp_cmem_master_int_burst_size_num_bits          0x0
#define sp2600_fp_cmem_master_int_burst_timeout_register       0x30
#define sp2600_fp_cmem_master_int_burst_timeout_lsb            0x0
#define sp2600_fp_cmem_master_int_burst_timeout_num_bits       0x4
#define sp2600_fp_xmem_master_int_base_address_lowest_register 0x22
#define sp2600_fp_xmem_master_int_burst_size_register          0x0
#define sp2600_fp_xmem_master_int_burst_size_lsb               0x0
#define sp2600_fp_xmem_master_int_burst_size_num_bits          0x0
#define sp2600_fp_xmem_master_int_burst_timeout_register       0x31
#define sp2600_fp_xmem_master_int_burst_timeout_lsb            0x0
#define sp2600_fp_xmem_master_int_burst_timeout_num_bits       0x4

#define sp2600_fp_dmem_Arb_mem_wp_period_register 0x0
#define sp2600_fp_dmem_Arb_mem_wp_period_lsb      0xE
#define sp2600_fp_dmem_Arb_mem_wp_period_num_bits 0x5
#define sp2600_fp_dmem_Arb_mem_wp_source1_bandwidth_register 0x0
#define sp2600_fp_dmem_Arb_mem_wp_source1_bandwidth_lsb      0x17
#define sp2600_fp_dmem_Arb_mem_wp_source1_bandwidth_num_bits 0x4
#define sp2600_fp_dmem_Arb_mem_wp_source0_bandwidth_register 0x0
#define sp2600_fp_dmem_Arb_mem_wp_source0_bandwidth_lsb      0x13
#define sp2600_fp_dmem_Arb_mem_wp_source0_bandwidth_num_bits 0x4
#define _hrt_ctl_set_arbiter_sp2600_fp_dmem_Arb_mem_wp(cell, period, bandwidth, length) \
  { \
    hrt_ctl_set_arbiter_period(cell, sp2600_fp_dmem_Arb_mem_wp, period); \
    if (0<length) hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source1, bandwidth[0]);\
    else          hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source1, 0);\
    if (1<length) hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source0, bandwidth[1]);\
    else          hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source0, 0);\
  }

#define sp2600_fp_dmem1_Arb_mem_wp_period_register 0x0
#define sp2600_fp_dmem1_Arb_mem_wp_period_lsb      0x1B
#define sp2600_fp_dmem1_Arb_mem_wp_period_num_bits 0x5
#define sp2600_fp_dmem1_Arb_mem_wp_source1_bandwidth_register 0x3
#define sp2600_fp_dmem1_Arb_mem_wp_source1_bandwidth_lsb      0x4
#define sp2600_fp_dmem1_Arb_mem_wp_source1_bandwidth_num_bits 0x4
#define sp2600_fp_dmem1_Arb_mem_wp_source0_bandwidth_register 0x3
#define sp2600_fp_dmem1_Arb_mem_wp_source0_bandwidth_lsb      0x0
#define sp2600_fp_dmem1_Arb_mem_wp_source0_bandwidth_num_bits 0x4
#define _hrt_ctl_set_arbiter_sp2600_fp_dmem1_Arb_mem_wp(cell, period, bandwidth, length) \
  { \
    hrt_ctl_set_arbiter_period(cell, sp2600_fp_dmem1_Arb_mem_wp, period); \
    if (0<length) hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source1, bandwidth[0]);\
    else          hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source1, 0);\
    if (1<length) hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source0, bandwidth[1]);\
    else          hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source0, 0);\
  }


#define sp2600_fp_arbiter_mode_lsb 0xE
#define sp2600_fp_arbiter_mode_register 0x0
#define sp2600_fp_config_icache_icache_invalidate_flag_register      0x0
#define sp2600_fp_config_icache_icache_invalidate_flag_bit           0xC
#define sp2600_fp_config_icache_icache_prefetch_enable_flag_register 0x0
#define sp2600_fp_config_icache_icache_prefetch_enable_flag_bit      0xD

#define sp2600_fp_dmem_size 0x10000
#define sp2600_fp_dmem_physical_size 0x10000
#define sp2600_fp_dmem_first_slave_port sp2600_fp_sl_dmem_ip0_cell_port
#define sp2600_fp_dmem_sl_dmem_ip0_next_cell_port sp2600_fp_unreachable_cell_port
#define sp2600_fp_sl_dmem_ip0_sp2600_fp_dmem_address 0x0
#define _hrt_mem_load_8_sp2600_fp_dmem(cell, addr) \
        _hrt_slave_port_load_8_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_uload_8_sp2600_fp_dmem(cell, addr) \
        _hrt_slave_port_uload_8_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                                _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_load_16_sp2600_fp_dmem(cell, addr) \
        _hrt_slave_port_load_16_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_uload_16_sp2600_fp_dmem(cell, addr) \
        _hrt_slave_port_uload_16_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                                _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_load_32_sp2600_fp_dmem(cell, addr) \
        _hrt_slave_port_load_32_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_uload_32_sp2600_fp_dmem(cell, addr) \
        _hrt_slave_port_uload_32_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                                _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_store_8_sp2600_fp_dmem(cell, addr, data) \
        _hrt_slave_port_store_8_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), data, \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_store_16_sp2600_fp_dmem(cell, addr, data) \
        _hrt_slave_port_store_16_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), data, \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_store_32_sp2600_fp_dmem(cell, addr, data) \
        _hrt_slave_port_store_32_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), data, \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_load_sp2600_fp_dmem(cell, addr, data, size) \
        _hrt_slave_port_load_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                             _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                             data, size, _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_store_sp2600_fp_dmem(cell, addr, data, size) \
        _hrt_slave_port_store_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                             _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                             data, size, _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define _hrt_mem_set_sp2600_fp_dmem(cell, addr, data, size) \
        _hrt_slave_port_set_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem), \
                             _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem, (addr)), \
                             data, size, _hrt_cell_mem_error_message(cell, sp2600_fp_dmem))
#define sp2600_fp_dmem1_size 0x8000
#define sp2600_fp_dmem1_physical_size 0x8000
#define sp2600_fp_dmem1_first_slave_port sp2600_fp_sl_dmem_ip1_cell_port
#define sp2600_fp_dmem1_sl_dmem_ip1_next_cell_port sp2600_fp_unreachable_cell_port
#define sp2600_fp_sl_dmem_ip1_sp2600_fp_dmem1_address 0x0
#define _hrt_mem_load_8_sp2600_fp_dmem1(cell, addr) \
        _hrt_slave_port_load_8_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_uload_8_sp2600_fp_dmem1(cell, addr) \
        _hrt_slave_port_uload_8_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                                _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_load_16_sp2600_fp_dmem1(cell, addr) \
        _hrt_slave_port_load_16_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_uload_16_sp2600_fp_dmem1(cell, addr) \
        _hrt_slave_port_uload_16_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                                _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_load_32_sp2600_fp_dmem1(cell, addr) \
        _hrt_slave_port_load_32_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_uload_32_sp2600_fp_dmem1(cell, addr) \
        _hrt_slave_port_uload_32_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                                _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_store_8_sp2600_fp_dmem1(cell, addr, data) \
        _hrt_slave_port_store_8_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), data, \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_store_16_sp2600_fp_dmem1(cell, addr, data) \
        _hrt_slave_port_store_16_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), data, \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_store_32_sp2600_fp_dmem1(cell, addr, data) \
        _hrt_slave_port_store_32_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                               _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), data, \
                               _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_load_sp2600_fp_dmem1(cell, addr, data, size) \
        _hrt_slave_port_load_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                             _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                             data, size, _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_store_sp2600_fp_dmem1(cell, addr, data, size) \
        _hrt_slave_port_store_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                             _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                             data, size, _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_set_sp2600_fp_dmem1(cell, addr, data, size) \
        _hrt_slave_port_set_msg(_hrt_cell_mem_slave_port(cell, sp2600_fp_dmem1), \
                             _hrt_cell_mem_master_to_slave_address(cell, sp2600_fp_dmem1, (addr)), \
                             data, size, _hrt_cell_mem_error_message(cell, sp2600_fp_dmem1))
#define _hrt_mem_load_sp2600_fp_char(cell, mem, addr)   HRTCAT(hrt_mem_load_, sp2600_fp_char_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_uchar(cell, mem, addr)  HRTCAT(hrt_mem_uload_, sp2600_fp_uchar_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_short(cell, mem, addr)  HRTCAT(hrt_mem_load_, sp2600_fp_short_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_ushort(cell, mem, addr) HRTCAT(hrt_mem_uload_, sp2600_fp_ushort_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_int(cell, mem, addr)    HRTCAT(hrt_mem_load_, sp2600_fp_int_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_uint(cell, mem, addr)   HRTCAT(hrt_mem_uload_, sp2600_fp_uint_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_long(cell, mem, addr)   HRTCAT(hrt_mem_load_, sp2600_fp_long_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_ulong(cell, mem, addr)  HRTCAT(hrt_mem_uload_, sp2600_fp_ulong_bits)(cell, mem, addr)
#define _hrt_mem_load_sp2600_fp_ptr(cell, mem, addr)    HRTCAT(hrt_mem_uload_, sp2600_fp_ptr_bits)(cell, mem, addr)
#define _hrtx_memid_load_CASE_sp2600_fp(cell, mem, addr, data, bytes) \
  switch(mem) { \
    case sp2600_fp_dmem: \
      _hrt_mem_load_sp2600_fp_dmem(cell, addr, data, bytes); \
      break;\
    case sp2600_fp_dmem1: \
      _hrt_mem_load_sp2600_fp_dmem1(cell, addr, data, bytes); \
      break;\
    default:\
      hrt_error("unknown memory identifier (%d)", mem);\
  }
#define _hrtx_memid_store_CASE_sp2600_fp(cell, mem, addr, data, bytes) \
  switch(mem) {\
    case sp2600_fp_dmem: \
      _hrt_mem_store_sp2600_fp_dmem(cell, addr, data, bytes); \
      break;\
    case sp2600_fp_dmem1: \
      _hrt_mem_store_sp2600_fp_dmem1(cell, addr, data, bytes); \
      break;\
    default:\
      hrt_error("unknown memory identifier (%d)", mem);\
  }
#define _hrtx_memid_set_CASE_sp2600_fp(cell, mem, addr, data, bytes) \
  switch(mem) {\
    case sp2600_fp_dmem: \
      _hrt_mem_set_sp2600_fp_dmem(cell, addr, data, bytes); \
      break;\
    case sp2600_fp_dmem1: \
      _hrt_mem_set_sp2600_fp_dmem1(cell, addr, data, bytes); \
      break;\
    default:\
      hrt_error("unknown memory identifier (%d)", mem);\
  }
#define _hrtx_cellid_mem_size_CASE_sp2600_fp(cell, mem) \
  switch(mem) {\
    case sp2600_fp_dmem: \
      return _hrt_cell_mem_size(cell, sp2600_fp_dmem); \
    case sp2600_fp_dmem1: \
      return _hrt_cell_mem_size(cell, sp2600_fp_dmem1); \
    default:\
      hrt_error("unknown memory identifier (%d)", mem);\
  }
#define _hrtx_cellid_mem_physical_size_CASE_sp2600_fp(cell, mem) \
  switch(mem) {\
    case sp2600_fp_dmem: \
      return _hrt_cell_mem_physical_size(cell, sp2600_fp_dmem); \
    case sp2600_fp_dmem1: \
      return _hrt_cell_mem_physical_size(cell, sp2600_fp_dmem1); \
    default:\
      hrt_error("unknown memory identifier (%d)", mem);\
  }
#define _hrtx_ctlid_set_arbiter_period_CASE_sp2600_fp(cell, arbiter, period) \
  switch(arbiter) {\
    case sp2600_fp_dmem_Arb_mem_wp: \
      hrt_ctl_set_arbiter_period(cell, sp2600_fp_dmem_Arb_mem_wp, period); \
      break;\
    case sp2600_fp_dmem1_Arb_mem_wp: \
      hrt_ctl_set_arbiter_period(cell, sp2600_fp_dmem1_Arb_mem_wp, period); \
      break;\
    default:\
      hrt_error("unknown arbiter identifier (%d)", arbiter);\
  }
#define _hrtx_ctlid_get_arbiter_period_CASE_sp2600_fp(cell, arbiter) \
  switch(arbiter) {\
    case sp2600_fp_dmem_Arb_mem_wp: \
      return hrtx_ctl_get_arbiter_period(cell, sp2600_fp_dmem_Arb_mem_wp); \
    case sp2600_fp_dmem1_Arb_mem_wp: \
      return hrtx_ctl_get_arbiter_period(cell, sp2600_fp_dmem1_Arb_mem_wp); \
    default:\
      hrt_error("unknown arbiter identifier (%d)", arbiter);\
  }
#define _hrtx_ctlid_get_arbiter_period_num_bits_CASE_sp2600_fp(cell, arbiter) \
  switch(arbiter) {\
    case sp2600_fp_dmem_Arb_mem_wp: \
      return _hrt_cell_arbiter_period_num_bits(cell, sp2600_fp_dmem_Arb_mem_wp); \
    case sp2600_fp_dmem1_Arb_mem_wp: \
      return _hrt_cell_arbiter_period_num_bits(cell, sp2600_fp_dmem1_Arb_mem_wp); \
    default:\
      hrt_error("unknown arbiter identifier (%d)", arbiter);\
  }
#define _hrtx_ctlid_set_arbiter_CASE_sp2600_fp(cell, arbiter, period, bandwidth, length) \
  switch(arbiter) {\
    case sp2600_fp_dmem_Arb_mem_wp: \
      hrt_ctl_set_arbiter(cell, sp2600_fp_dmem_Arb_mem_wp, period, bandwidth, length); \
      break;\
    case sp2600_fp_dmem1_Arb_mem_wp: \
      hrt_ctl_set_arbiter(cell, sp2600_fp_dmem1_Arb_mem_wp, period, bandwidth, length); \
      break;\
    default:\
      hrt_error("unknown arbiter identifier (%d)", arbiter);\
  }
#define _hrtx_ctlid_set_arbiter_contender_bandwidth_CASE_sp2600_fp(cell, contender, bandwidth) \
  switch(contender) {\
    case sp2600_fp_dmem_Arb_mem_wp_source1: \
      hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source1, bandwidth); \
      break;\
    case sp2600_fp_dmem_Arb_mem_wp_source0: \
      hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source0, bandwidth); \
      break;\
    case sp2600_fp_dmem1_Arb_mem_wp_source1: \
      hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source1, bandwidth); \
      break;\
    case sp2600_fp_dmem1_Arb_mem_wp_source0: \
      hrt_ctl_set_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source0, bandwidth); \
      break;\
    default:\
      hrt_error("unknown arbiter contender identifier (%d)", contender);\
  }
#define _hrtx_ctlid_get_arbiter_contender_bandwidth_CASE_sp2600_fp(cell, contender) \
  switch(contender) {\
    case sp2600_fp_dmem_Arb_mem_wp_source1: \
      return hrtx_ctl_get_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source1); \
    case sp2600_fp_dmem_Arb_mem_wp_source0: \
      return hrtx_ctl_get_arbiter_contender_bandwidth(cell, sp2600_fp_dmem_Arb_mem_wp_source0); \
    case sp2600_fp_dmem1_Arb_mem_wp_source1: \
      return hrtx_ctl_get_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source1); \
    case sp2600_fp_dmem1_Arb_mem_wp_source0: \
      return hrtx_ctl_get_arbiter_contender_bandwidth(cell, sp2600_fp_dmem1_Arb_mem_wp_source0); \
    default:\
      hrt_error("unknown arbiter contender identifier (%d)", contender);\
  }
#define _hrtx_ctlid_get_arbiter_contender_bandwidth_num_bits_CASE_sp2600_fp(cell, contender) \
  switch(contender) {\
    case sp2600_fp_dmem_Arb_mem_wp_source1: \
      return _hrt_cell_arbiter_contender_bandwidth_num_bits(cell, sp2600_fp_dmem_Arb_mem_wp_source1); \
    case sp2600_fp_dmem_Arb_mem_wp_source0: \
      return _hrt_cell_arbiter_contender_bandwidth_num_bits(cell, sp2600_fp_dmem_Arb_mem_wp_source0); \
    case sp2600_fp_dmem1_Arb_mem_wp_source1: \
      return _hrt_cell_arbiter_contender_bandwidth_num_bits(cell, sp2600_fp_dmem1_Arb_mem_wp_source1); \
    case sp2600_fp_dmem1_Arb_mem_wp_source0: \
      return _hrt_cell_arbiter_contender_bandwidth_num_bits(cell, sp2600_fp_dmem1_Arb_mem_wp_source0); \
    default:\
      hrt_error("unknown arbiter contender identifier (%d)", contender);\
  }
#define _hrtx_ctlid_set_burst_length_CASE_sp2600_fp(cell, mt_int, length) \
  switch(mt_int) {\
    case sp2600_fp_config_icache_master: \
      hrt_ctl_set_burst_length(cell, sp2600_fp_config_icache_master, length); \
      break;\
    case sp2600_fp_qmem_master_int: \
      hrt_ctl_set_burst_length(cell, sp2600_fp_qmem_master_int, length); \
      break;\
    case sp2600_fp_cmem_master_int: \
      hrt_ctl_set_burst_length(cell, sp2600_fp_cmem_master_int, length); \
      break;\
    case sp2600_fp_xmem_master_int: \
      hrt_ctl_set_burst_length(cell, sp2600_fp_xmem_master_int, length); \
      break;\
    default:\
      length = length; \
      hrt_error("unknown master interface identifier (%d)", mt_int);\
  }
#define _hrtx_ctlid_get_burst_length_CASE_sp2600_fp(cell, mt_int) \
  switch(mt_int) {\
    case sp2600_fp_config_icache_master: \
      return hrtx_ctl_get_burst_length(cell, sp2600_fp_config_icache_master); \
    case sp2600_fp_qmem_master_int: \
      return hrtx_ctl_get_burst_length(cell, sp2600_fp_qmem_master_int); \
    case sp2600_fp_cmem_master_int: \
      return hrtx_ctl_get_burst_length(cell, sp2600_fp_cmem_master_int); \
    case sp2600_fp_xmem_master_int: \
      return hrtx_ctl_get_burst_length(cell, sp2600_fp_xmem_master_int); \
    default:\
      hrt_error("unknown master interface identifier (%d)", mt_int);\
  }
#define _hrtx_ctlid_set_burst_interval_CASE_sp2600_fp(cell, mt_int, interval) \
  switch(mt_int) {\
    case sp2600_fp_config_icache_master: \
      hrt_ctl_set_burst_interval(cell, sp2600_fp_config_icache_master, interval); \
      break;\
    case sp2600_fp_qmem_master_int: \
      hrt_ctl_set_burst_interval(cell, sp2600_fp_qmem_master_int, interval); \
      break;\
    case sp2600_fp_cmem_master_int: \
      hrt_ctl_set_burst_interval(cell, sp2600_fp_cmem_master_int, interval); \
      break;\
    case sp2600_fp_xmem_master_int: \
      hrt_ctl_set_burst_interval(cell, sp2600_fp_xmem_master_int, interval); \
      break;\
    default:\
      interval = interval; \
      hrt_error("unknown master interface identifier (%d)", mt_int);\
  }
#define _hrtx_ctlid_get_burst_interval_CASE_sp2600_fp(cell, mt_int) \
  switch(mt_int) {\
    case sp2600_fp_config_icache_master: \
      return hrtx_ctl_get_burst_interval(cell, sp2600_fp_config_icache_master); \
    case sp2600_fp_qmem_master_int: \
      return hrtx_ctl_get_burst_interval(cell, sp2600_fp_qmem_master_int); \
    case sp2600_fp_cmem_master_int: \
      return hrtx_ctl_get_burst_interval(cell, sp2600_fp_cmem_master_int); \
    case sp2600_fp_xmem_master_int: \
      return hrtx_ctl_get_burst_interval(cell, sp2600_fp_xmem_master_int); \
    default:\
      hrt_error("unknown master interface identifier (%d)", mt_int);\
  }
#define _hrtx_ctlid_get_ext_base_address_CASE_sp2600_fp(cell, mt_int, segment) \
  switch(mt_int) { \
    case sp2600_fp_config_icache_master: \
      return hrtx_ctl_get_ext_base_address(cell, sp2600_fp_config_icache_master, segment); \
    case sp2600_fp_qmem_master_int: \
      return hrtx_ctl_get_ext_base_address(cell, sp2600_fp_qmem_master_int, segment); \
    case sp2600_fp_cmem_master_int: \
      return hrtx_ctl_get_ext_base_address(cell, sp2600_fp_cmem_master_int, segment); \
    case sp2600_fp_xmem_master_int: \
      return hrtx_ctl_get_ext_base_address(cell, sp2600_fp_xmem_master_int, segment); \
    default: \
      segment = segment; \
      hrt_error("unknown master interface identifier (%d)", mt_int); \
  }
#define _hrtx_ctlid_set_ext_base_address_CASE_sp2600_fp(cell, mt_int, segment, addr) \
  switch(mt_int) { \
    case sp2600_fp_config_icache_master: \
      hrt_ctl_set_ext_base_address(cell, sp2600_fp_config_icache_master, segment*3, addr); \
      break;\
    case sp2600_fp_qmem_master_int: \
      hrt_ctl_set_ext_base_address(cell, sp2600_fp_qmem_master_int, segment*3, addr); \
      break;\
    case sp2600_fp_cmem_master_int: \
      hrt_ctl_set_ext_base_address(cell, sp2600_fp_cmem_master_int, segment*3, addr); \
      break;\
    case sp2600_fp_xmem_master_int: \
      hrt_ctl_set_ext_base_address(cell, sp2600_fp_xmem_master_int, segment*3, addr); \
      break;\
    default: \
      segment = segment; \
      addr = addr; \
      hrt_error("unknown master interface identifier (%d)", mt_int); \
  }

#define _jtag_sp2600_fp_config_icache_master_width 64
#define _jtag_sp2600_fp_config_icache_master_capacity 65536
#define _jtag_sp2600_fp_config_icache_master_type 1
#define _jtag_sp2600_fp_dmem_mem_width 64
#define _jtag_sp2600_fp_dmem_mem_capacity 8192
#define _jtag_sp2600_fp_dmem_mem_type 1
#define _jtag_sp2600_fp_qmem_master_int_width 32
#define _jtag_sp2600_fp_qmem_master_int_capacity 1073741824
#define _jtag_sp2600_fp_qmem_master_int_type 1
#define _jtag_sp2600_fp_cmem_master_int_width 32
#define _jtag_sp2600_fp_cmem_master_int_capacity 1073741824
#define _jtag_sp2600_fp_cmem_master_int_type 1
#define _jtag_sp2600_fp_xmem_master_int_width 32
#define _jtag_sp2600_fp_xmem_master_int_capacity 1073741824
#define _jtag_sp2600_fp_xmem_master_int_type 1
#define _jtag_sp2600_fp_dmem1_mem_width 64
#define _jtag_sp2600_fp_dmem1_mem_capacity 4096
#define _jtag_sp2600_fp_dmem1_mem_type 1
#define _jtag_sp2600_fp_rf0_width 32
#define _jtag_sp2600_fp_rf0_capacity 32
#define _jtag_sp2600_fp_rf0_type 2
#define _jtag_sp2600_fp_rf01_width 32
#define _jtag_sp2600_fp_rf01_capacity 1
#define _jtag_sp2600_fp_rf01_type 2
#define _jtag_sp2600_fp_rf1_width 32
#define _jtag_sp2600_fp_rf1_capacity 32
#define _jtag_sp2600_fp_rf1_type 2
#define _jtag_sp2600_fp_pc_width 16
#define _jtag_sp2600_fp_pc_capacity 1
#define _jtag_sp2600_fp_pc_type 2
#define _jtag_sp2600_fp_sr_width 9
#define _jtag_sp2600_fp_sr_capacity 1
#define _jtag_sp2600_fp_sr_type 2

#endif /* _sp2600_fp_cell_h */
