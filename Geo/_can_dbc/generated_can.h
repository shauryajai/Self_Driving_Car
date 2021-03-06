/// DBC file: ../../snf.dbc    Self node: 'GEO'  (ALL = 0)
/// This file can be included by a source file, for example: #include "generated.h"
#ifndef __GENEARTED_DBC_PARSER
#define __GENERATED_DBC_PARSER
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>



/// Extern function needed for dbc_encode_and_send()
extern bool dbc_app_send_can_msg(uint32_t mid, uint8_t dlc, uint8_t bytes[8]);

/// Missing in Action structure
typedef struct {
    uint32_t is_mia : 1;          ///< Missing in action flag
    uint32_t mia_counter_ms : 31; ///< Missing in action counter
} dbc_mia_info_t;

/// CAN message header structure
typedef struct { 
    uint32_t mid; ///< Message ID of the message
    uint8_t  dlc; ///< Data length of the message
} dbc_msg_hdr_t; 

// static const dbc_msg_hdr_t BLE_COMM_CMD_HDR =                     {  010, 1 };
static const dbc_msg_hdr_t SYSTEM_CMD_HDR =                       {  100, 1 };
// static const dbc_msg_hdr_t MASTER_HEARTBEAT_HDR =                 {  134, 4 };
// static const dbc_msg_hdr_t MOTOR_CMD_HDR =                        {  151, 3 };
// static const dbc_msg_hdr_t SYSTEM_STATUS_HDR =                    {  162, 2 };
// static const dbc_msg_hdr_t SENSOR_ULTRASONIC_HDR =                {  211, 7 };
// static const dbc_msg_hdr_t SENSOR_SPEED_HDR =                     {  212, 1 };
// static const dbc_msg_hdr_t SENSOR_BATT_HDR =                      {  213, 1 };
// static const dbc_msg_hdr_t SENSOR_HEARTBEAT_HDR =                 {  214, 4 };
static const dbc_msg_hdr_t BLE_CHCK_PT_HDR =                      {  311, 4 };
// static const dbc_msg_hdr_t BLE_DEST_RCHD_HDR =                    {  312, 1 };
// static const dbc_msg_hdr_t BLE_HEARTBEAT_HDR =                    {  314, 4 };
// static const dbc_msg_hdr_t BLE_MAP_DATA_HDR =                     {  361, 8 };
static const dbc_msg_hdr_t GEO_DIRECTION_HDR =                    {  411, 1 };
static const dbc_msg_hdr_t GEO_ACCELEROMETER_HDR =                {  412, 1 };
static const dbc_msg_hdr_t GEO_HEARTBEAT_HDR =                    {  414, 4 };
static const dbc_msg_hdr_t GEO_LOCATION_HDR =                     {  421, 5 };
// static const dbc_msg_hdr_t MOTOR_HEARTBEAT_HDR =                  {  514, 4 };
// static const dbc_msg_hdr_t IO_HEARTBEAT_HDR =                     {  614, 4 };

/// Enumeration(s) for Message: 'SYSTEM_CMD' from 'MASTER'
typedef enum {
    SYSTEM_START = 1,
    SYSTEM_STOP = 0,
    SYSTEM_RESET = 2,
} SYSTEM_CMD_enum_E ;




/// Message: SYSTEM_CMD from 'MASTER', DLC: 1 byte(s), MID: 100
typedef struct {
    SYSTEM_CMD_enum_E SYSTEM_CMD_enum;        ///< B7:0   Destination: BLE,GEO,IO,MOTOR,SENSOR

    dbc_mia_info_t mia_info;
} SYSTEM_CMD_t;


/// Message: BLE_CHCK_PT from 'BLE', DLC: 4 byte(s), MID: 311
typedef struct {
    uint16_t BLE_CHCK_PT_lat;                 ///< B15:0   Destination: GEO
    uint16_t BLE_CHCK_PT_long;                ///< B31:16   Destination: GEO

    dbc_mia_info_t mia_info;
} BLE_CHCK_PT_t;


/// Message: GEO_DIRECTION from 'GEO', DLC: 1 byte(s), MID: 411
typedef struct {
    uint8_t GEO_DIRECTION_data;               ///< B7:0   Destination: MASTER

    // No dbc_mia_info_t for a message that we will send
} GEO_DIRECTION_t;


/// Message: GEO_ACCELEROMETER from 'GEO', DLC: 1 byte(s), MID: 412
typedef struct {
    uint8_t GEO_ACCELEROMETER_tilt;           ///< B7:0   Destination: MASTER

    // No dbc_mia_info_t for a message that we will send
} GEO_ACCELEROMETER_t;


/// Message: GEO_HEARTBEAT from 'GEO', DLC: 4 byte(s), MID: 414
typedef struct {
    uint16_t GEO_HEARTBEAT_rx_bytes;          ///< B15:0   Destination: MASTER
    uint16_t GEO_HEARTBEAT_tx_bytes;          ///< B31:16   Destination: MASTER

    // No dbc_mia_info_t for a message that we will send
} GEO_HEARTBEAT_t;


/// Message: GEO_LOCATION from 'GEO', DLC: 5 byte(s), MID: 421
typedef struct {
    uint16_t GEO_LOCATION_lat;                ///< B15:0   Destination: BLE,IO
    uint16_t GEO_LOCATION_long;               ///< B31:16   Destination: BLE,IO
    uint8_t GEO_COMPASS_mag;                  ///< B39:32   Destination: BLE,IO

    // No dbc_mia_info_t for a message that we will send
} GEO_LOCATION_t;


/// @{ These 'externs' need to be defined in a source file of your project
extern const uint32_t                             SYSTEM_CMD__MIA_MS;
extern const SYSTEM_CMD_t                         SYSTEM_CMD__MIA_MSG;
extern const uint32_t                             BLE_CHCK_PT__MIA_MS;
extern const BLE_CHCK_PT_t                        BLE_CHCK_PT__MIA_MSG;
/// @}


/// Not generating code for dbc_encode_BLE_COMM_CMD() since the sender is BLE and we are GEO

/// Not generating code for dbc_encode_SYSTEM_CMD() since the sender is MASTER and we are GEO

/// Not generating code for dbc_encode_MASTER_HEARTBEAT() since the sender is MASTER and we are GEO

/// Not generating code for dbc_encode_MOTOR_CMD() since the sender is MASTER and we are GEO

/// Not generating code for dbc_encode_SYSTEM_STATUS() since the sender is MASTER and we are GEO

/// Not generating code for dbc_encode_SENSOR_ULTRASONIC() since the sender is SENSOR and we are GEO

/// Not generating code for dbc_encode_SENSOR_SPEED() since the sender is SENSOR and we are GEO

/// Not generating code for dbc_encode_SENSOR_BATT() since the sender is SENSOR and we are GEO

/// Not generating code for dbc_encode_SENSOR_HEARTBEAT() since the sender is SENSOR and we are GEO

/// Not generating code for dbc_encode_BLE_CHCK_PT() since the sender is BLE and we are GEO

/// Not generating code for dbc_encode_BLE_DEST_RCHD() since the sender is BLE and we are GEO

/// Not generating code for dbc_encode_BLE_HEARTBEAT() since the sender is BLE and we are GEO

/// Not generating code for dbc_encode_BLE_MAP_DATA() since the sender is BLE and we are GEO

/// Encode GEO's 'GEO_DIRECTION' message
/// @returns the message header of this message
static inline dbc_msg_hdr_t dbc_encode_GEO_DIRECTION(uint8_t bytes[8], GEO_DIRECTION_t *from)
{
    uint32_t raw;
    bytes[0]=bytes[1]=bytes[2]=bytes[3]=bytes[4]=bytes[5]=bytes[6]=bytes[7]=0;

    raw = ((uint32_t)(((from->GEO_DIRECTION_data)))) & 0xff;
    bytes[0] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B0

    return GEO_DIRECTION_HDR;
}

/// Encode and send for dbc_encode_GEO_DIRECTION() message
static inline bool dbc_encode_and_send_GEO_DIRECTION(GEO_DIRECTION_t *from)
{
    uint8_t bytes[8];
    const dbc_msg_hdr_t hdr = dbc_encode_GEO_DIRECTION(bytes, from);
    return dbc_app_send_can_msg(hdr.mid, hdr.dlc, bytes);
}



/// Encode GEO's 'GEO_ACCELEROMETER' message
/// @returns the message header of this message
static inline dbc_msg_hdr_t dbc_encode_GEO_ACCELEROMETER(uint8_t bytes[8], GEO_ACCELEROMETER_t *from)
{
    uint32_t raw;
    bytes[0]=bytes[1]=bytes[2]=bytes[3]=bytes[4]=bytes[5]=bytes[6]=bytes[7]=0;

    raw = ((uint32_t)(((from->GEO_ACCELEROMETER_tilt)))) & 0xff;
    bytes[0] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B0

    return GEO_ACCELEROMETER_HDR;
}

/// Encode and send for dbc_encode_GEO_ACCELEROMETER() message
static inline bool dbc_encode_and_send_GEO_ACCELEROMETER(GEO_ACCELEROMETER_t *from)
{
    uint8_t bytes[8];
    const dbc_msg_hdr_t hdr = dbc_encode_GEO_ACCELEROMETER(bytes, from);
    return dbc_app_send_can_msg(hdr.mid, hdr.dlc, bytes);
}



/// Encode GEO's 'GEO_HEARTBEAT' message
/// @returns the message header of this message
static inline dbc_msg_hdr_t dbc_encode_GEO_HEARTBEAT(uint8_t bytes[8], GEO_HEARTBEAT_t *from)
{
    uint32_t raw;
    bytes[0]=bytes[1]=bytes[2]=bytes[3]=bytes[4]=bytes[5]=bytes[6]=bytes[7]=0;

    raw = ((uint32_t)(((from->GEO_HEARTBEAT_rx_bytes)))) & 0xffff;
    bytes[0] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B0
    bytes[1] |= (((uint8_t)(raw >> 8) & 0xff)); ///< 8 bit(s) starting from B8

    raw = ((uint32_t)(((from->GEO_HEARTBEAT_tx_bytes)))) & 0xffff;
    bytes[2] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B16
    bytes[3] |= (((uint8_t)(raw >> 8) & 0xff)); ///< 8 bit(s) starting from B24

    return GEO_HEARTBEAT_HDR;
}

/// Encode and send for dbc_encode_GEO_HEARTBEAT() message
static inline bool dbc_encode_and_send_GEO_HEARTBEAT(GEO_HEARTBEAT_t *from)
{
    uint8_t bytes[8];
    const dbc_msg_hdr_t hdr = dbc_encode_GEO_HEARTBEAT(bytes, from);
    return dbc_app_send_can_msg(hdr.mid, hdr.dlc, bytes);
}



/// Encode GEO's 'GEO_LOCATION' message
/// @returns the message header of this message
static inline dbc_msg_hdr_t dbc_encode_GEO_LOCATION(uint8_t bytes[8], GEO_LOCATION_t *from)
{
    uint32_t raw;
    bytes[0]=bytes[1]=bytes[2]=bytes[3]=bytes[4]=bytes[5]=bytes[6]=bytes[7]=0;

    raw = ((uint32_t)(((from->GEO_LOCATION_lat)))) & 0xffff;
    bytes[0] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B0
    bytes[1] |= (((uint8_t)(raw >> 8) & 0xff)); ///< 8 bit(s) starting from B8

    raw = ((uint32_t)(((from->GEO_LOCATION_long)))) & 0xffff;
    bytes[2] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B16
    bytes[3] |= (((uint8_t)(raw >> 8) & 0xff)); ///< 8 bit(s) starting from B24

    raw = ((uint32_t)(((from->GEO_COMPASS_mag)))) & 0xff;
    bytes[4] |= (((uint8_t)(raw) & 0xff)); ///< 8 bit(s) starting from B32

    return GEO_LOCATION_HDR;
}

/// Encode and send for dbc_encode_GEO_LOCATION() message
static inline bool dbc_encode_and_send_GEO_LOCATION(GEO_LOCATION_t *from)
{
    uint8_t bytes[8];
    const dbc_msg_hdr_t hdr = dbc_encode_GEO_LOCATION(bytes, from);
    return dbc_app_send_can_msg(hdr.mid, hdr.dlc, bytes);
}



/// Not generating code for dbc_encode_MOTOR_HEARTBEAT() since the sender is MOTOR and we are GEO

/// Not generating code for dbc_encode_IO_HEARTBEAT() since the sender is IO and we are GEO

/// Not generating code for dbc_decode_BLE_COMM_CMD() since 'GEO' is not the recipient of any of the signals

/// Decode MASTER's 'SYSTEM_CMD' message
/// @param hdr  The header of the message to validate its DLC and MID; this can be NULL to skip this check
static inline bool dbc_decode_SYSTEM_CMD(SYSTEM_CMD_t *to, const uint8_t bytes[8], const dbc_msg_hdr_t *hdr)
{
    const bool success = true;
    // If msg header is provided, check if the DLC and the MID match
    if (NULL != hdr && (hdr->dlc != SYSTEM_CMD_HDR.dlc || hdr->mid != SYSTEM_CMD_HDR.mid)) {
        return !success;
    }

    uint32_t raw;
    raw  = ((uint32_t)((bytes[0]))); ///< 8 bit(s) from B0
    to->SYSTEM_CMD_enum = (SYSTEM_CMD_enum_E)((raw));

    to->mia_info.mia_counter_ms = 0; ///< Reset the MIA counter

    return success;
}


/// Not generating code for dbc_decode_MASTER_HEARTBEAT() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_MOTOR_CMD() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_SYSTEM_STATUS() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_SENSOR_ULTRASONIC() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_SENSOR_SPEED() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_SENSOR_BATT() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_SENSOR_HEARTBEAT() since 'GEO' is not the recipient of any of the signals

/// Decode BLE's 'BLE_CHCK_PT' message
/// @param hdr  The header of the message to validate its DLC and MID; this can be NULL to skip this check
static inline bool dbc_decode_BLE_CHCK_PT(BLE_CHCK_PT_t *to, const uint8_t bytes[8], const dbc_msg_hdr_t *hdr)
{
    const bool success = true;
    // If msg header is provided, check if the DLC and the MID match
    if (NULL != hdr && (hdr->dlc != BLE_CHCK_PT_HDR.dlc || hdr->mid != BLE_CHCK_PT_HDR.mid)) {
        return !success;
    }

    uint32_t raw;
    raw  = ((uint32_t)((bytes[0]))); ///< 8 bit(s) from B0
    raw |= ((uint32_t)((bytes[1]))) << 8; ///< 8 bit(s) from B8
    to->BLE_CHCK_PT_lat = ((raw));
    raw  = ((uint32_t)((bytes[2]))); ///< 8 bit(s) from B16
    raw |= ((uint32_t)((bytes[3]))) << 8; ///< 8 bit(s) from B24
    to->BLE_CHCK_PT_long = ((raw));

    to->mia_info.mia_counter_ms = 0; ///< Reset the MIA counter

    return success;
}


/// Not generating code for dbc_decode_BLE_DEST_RCHD() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_BLE_HEARTBEAT() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_BLE_MAP_DATA() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_GEO_DIRECTION() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_GEO_ACCELEROMETER() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_GEO_HEARTBEAT() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_GEO_LOCATION() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_MOTOR_HEARTBEAT() since 'GEO' is not the recipient of any of the signals

/// Not generating code for dbc_decode_IO_HEARTBEAT() since 'GEO' is not the recipient of any of the signals

/// Handle the MIA for MASTER's SYSTEM_CMD message
/// @param   time_incr_ms  The time to increment the MIA counter with
/// @returns true if the MIA just occurred
/// @post    If the MIA counter reaches the MIA threshold, MIA struct will be copied to *msg
static inline bool dbc_handle_mia_SYSTEM_CMD(SYSTEM_CMD_t *msg, uint32_t time_incr_ms)
{
    bool mia_occurred = false;
    const dbc_mia_info_t old_mia = msg->mia_info;
    msg->mia_info.is_mia = (msg->mia_info.mia_counter_ms >= SYSTEM_CMD__MIA_MS);

    if (!msg->mia_info.is_mia) { // Not MIA yet, so keep incrementing the MIA counter
        msg->mia_info.mia_counter_ms += time_incr_ms;
    }
    else if(!old_mia.is_mia)   { // Previously not MIA, but it is MIA now
        // Copy MIA struct, then re-write the MIA counter and is_mia that is overwriten
        *msg = SYSTEM_CMD__MIA_MSG;
        msg->mia_info.mia_counter_ms = SYSTEM_CMD__MIA_MS;
        msg->mia_info.is_mia = true;
        mia_occurred = true;
    }

    return mia_occurred;
}

/// Handle the MIA for BLE's BLE_CHCK_PT message
/// @param   time_incr_ms  The time to increment the MIA counter with
/// @returns true if the MIA just occurred
/// @post    If the MIA counter reaches the MIA threshold, MIA struct will be copied to *msg
static inline bool dbc_handle_mia_BLE_CHCK_PT(BLE_CHCK_PT_t *msg, uint32_t time_incr_ms)
{
    bool mia_occurred = false;
    const dbc_mia_info_t old_mia = msg->mia_info;
    msg->mia_info.is_mia = (msg->mia_info.mia_counter_ms >= BLE_CHCK_PT__MIA_MS);

    if (!msg->mia_info.is_mia) { // Not MIA yet, so keep incrementing the MIA counter
        msg->mia_info.mia_counter_ms += time_incr_ms;
    }
    else if(!old_mia.is_mia)   { // Previously not MIA, but it is MIA now
        // Copy MIA struct, then re-write the MIA counter and is_mia that is overwriten
        *msg = BLE_CHCK_PT__MIA_MSG;
        msg->mia_info.mia_counter_ms = BLE_CHCK_PT__MIA_MS;
        msg->mia_info.is_mia = true;
        mia_occurred = true;
    }

    return mia_occurred;
}

#endif
