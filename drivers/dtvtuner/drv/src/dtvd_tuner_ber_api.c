/*
 *    DTV tuner linux driver
 *
 * Usage:    DTV tuner driver by i2c for linux
 *
 *
 * This software program is licensed subject to the GNU General Public License
 * (GPL).Version 2,June 1991, available at http://www.fsf.org/copyleft/gpl.html
 *
 */

#include "dtvd_tuner_com.h"
#include "dtvd_tuner_ber.h"

signed int dtvd_tuner_ber_init( void )
{
    DTVD_DEBUG_MSG_ENTER( 0, 0, 0 );

    tdtvd_tuner_ber.status = D_DTVD_TUNER_BER_000;

    DTVD_DEBUG_MSG_EXIT();
    return D_DTVD_TUNER_OK;
}

signed int dtvd_tuner_ber_get_state( void )
{
    signed int state;

    DTVD_DEBUG_MSG_ENTER( 0, 0, 0 );

    state = tdtvd_tuner_ber.status;

    DTVD_DEBUG_MSG_EXIT();
    return state;
}

void dtvd_tuner_ber_measure_non( void )
{

    tdtvd_tuner_monitor.rx.ber.value.result = D_DTVD_TUNER_GET_RESULT_NG_NONE;

    return;
}

