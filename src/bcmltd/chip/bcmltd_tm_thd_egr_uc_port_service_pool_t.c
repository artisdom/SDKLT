/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/tm/TM_THD_EGR_UC_PORT_SERVICE_POOL.tbl.ltl
 * Edits to this file will be lost when it is regenerated.
 *
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */
#include <bcmltd/bcmltd_internal.h>
#include <bcmltd/chip/bcmltd_common_enumpool.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_tm_thd_egr_uc_port_service_pool_t_fields[] = {
    {
        .name  = bcmltd_strpool_port_id,  /* PORT_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Logical port ID.",
    },
    {
        .name  = bcmltd_strpool_tm_thd_service_pool_id,  /* TM_THD_SERVICE_POOL_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 2,
        .depth = 0,
        .desc = "Service pool ID.",
    },
    {
        .name  = bcmltd_strpool_use_shared_limits,  /* USE_SHARED_LIMITS */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enables shared buffer limit thresholds for unicast traffic for\n port based service pools.\n",
    },
    {
        .name  = bcmltd_strpool_shared_limit_cells,  /* SHARED_LIMIT_CELLS */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Shared buffer limit in cells for unicast traffic for port\n service pool. Packets gets discarded once the share count crosses\n SHARED_LIMIT_CELLS. Value should be non zero when USE_SHARED_LIMITS\n is enabled.\n",
    },
    {
        .name  = bcmltd_strpool_shared_resume_limit,  /* SHARED_RESUME_LIMIT */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Transmission resume limits in cells for unicast traffic for\n port service pools.\n",
    },
    {
        .name  = bcmltd_strpool_yellow_shared_limit_cells,  /* YELLOW_SHARED_LIMIT_CELLS */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Shared buffer limit for unicast yellow packets in cells.",
    },
    {
        .name  = bcmltd_strpool_yellow_shared_resume_limit,  /* YELLOW_SHARED_RESUME_LIMIT */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Transmission resume limits in cells for unicast yellow packets.",
    },
    {
        .name  = bcmltd_strpool_red_shared_limit_cells,  /* RED_SHARED_LIMIT_CELLS */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Shared buffer limit for unicast red packets in cells.",
    },
    {
        .name  = bcmltd_strpool_red_shared_resume_limit,  /* RED_SHARED_RESUME_LIMIT */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Transmission resume limit in cells for unicast red packets.",
    },
    {
        .name  = bcmltd_strpool_operational_state,  /* OPERATIONAL_STATE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .num_sym = 7,
        .sym = bcmltd_common_tm_entry_state_t_enum,
        .desc = "Read-only field which reflects the operational state of the\n entry. The OPERATIONAL_STATE of the entry becomes invalid if the\n mapping between PORT_ID to physical port is missing.\n",
    },
};
const bcmltd_table_rep_t bcmltd_tm_thd_egr_uc_port_service_pool_t = {
    .name = bcmltd_strpool_tm_thd_egr_uc_port_service_pool, /* TM_THD_EGR_UC_PORT_SERVICE_POOL */
    .flags = 0,
    .fields = 10,
    .field = bcmltd_tm_thd_egr_uc_port_service_pool_t_fields,
    .desc = "The TM_THD_EGR_UC_PORT_SERVICE_POOL table specifies service pool buffer\n thresholds for unicast traffic for each ports.\n",
};
