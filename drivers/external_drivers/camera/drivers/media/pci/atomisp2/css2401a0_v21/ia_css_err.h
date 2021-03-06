/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __IA_CSS_ERR_H
#define __IA_CSS_ERR_H

/** @file
 * This file contains possible return values for most
 * functions in the CSS-API.
 */

/** Errors, these values are used as the return value for most
 *  functions in this API.
 */
enum ia_css_err {
	IA_CSS_SUCCESS,
	IA_CSS_ERR_INTERNAL_ERROR,
	IA_CSS_ERR_CANNOT_ALLOCATE_MEMORY,
	IA_CSS_ERR_INVALID_ARGUMENTS,
	IA_CSS_ERR_SYSTEM_NOT_IDLE,
	IA_CSS_ERR_MODE_HAS_NO_VIEWFINDER,
	IA_CSS_ERR_QUEUE_IS_FULL,
	IA_CSS_ERR_QUEUE_IS_EMPTY,
	IA_CSS_ERR_RESOURCE_NOT_AVAILABLE,
	IA_CSS_ERR_RESOURCE_LIST_TO_SMALL,
	IA_CSS_ERR_RESOURCE_ITEMS_STILL_ALLOCATED,
	IA_CSS_ERR_RESOURCE_EXHAUSTED,
	IA_CSS_ERR_RESOURCE_ALREADY_ALLOCATED,
	IA_CSS_ERR_VERSION_MISMATCH,
	IA_CSS_ERR_NOT_SUPPORTED
};

/** Unrecoverable FW errors. This enum contains a value for each
 * error that the SP FW could encounter.
 */
enum ia_css_fw_err {
	IA_CSS_FW_SUCCESS,
	IA_CSS_FW_ERR_TAGGER_FULL,
	IA_CSS_FW_ERR_NO_VBUF_HANDLE,
	IA_CSS_FW_ERR_BUFFER_QUEUE_FULL,
	IA_CSS_FW_ERR_INVALID_QUEUE,
	IA_CSS_FW_ERR_INVALID_DMA_CHANNEL,
	IA_CSS_FW_ERR_CIRCBUF_EMPTY,
	IA_CSS_FW_ERR_CIRCBUF_FULL,
	IA_CSS_FW_ERR_TOKEN_MAP_RECEIVE,
	IA_CSS_FW_ERR_INVALID_PORT,
	IA_CSS_FW_ERR_OUT_OF_SP_DMEM,
};

/** FW warnings. This enum contains a value for each warning that
 * the SP FW could indicate potential performance issue
 */
enum ia_css_fw_warning {
	IA_CSS_FW_WARNING_NONE,
	IA_CSS_FW_WARNING_ISYS_QUEUE_FULL, /** < CSS system delayed because of insufficient space in the ISys queue.
		This warning can be avoided by de-queing ISYS buffers more timely. */
	IA_CSS_FW_WARNING_PSYS_QUEUE_FULL, /** < CSS system delayed because of insufficient space in the PSys queue.
		This warning can be avoided by de-queing PSYS buffers more timely. */
	IA_CSS_FW_WARNING_CIRCBUF_ALL_LOCKED, /** < CSS system delayed because of insufficient available buffers.
		This warning can be avoided by unlocking locked frame-buffers more timely. */
	IA_CSS_FW_WARNING_EXP_ID_LOCKED, /** < Exposure ID skipped because the frame associated to it was still locked.
		This warning can be avoided by unlocking locked frame-buffers more timely. */
	IA_CSS_FW_WARNING_TAG_EXP_ID_FAILED, /** < Exposure ID cannot be found on the circular buffer.
		This warning can be avoided by unlocking locked frame-buffers more timely. */
};

#endif /* __IA_CSS_ERR_H */
