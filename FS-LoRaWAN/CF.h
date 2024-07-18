/*
 * ======================================================================================================================
 *  CF.h - Configuration File - CONFIG.TXT
 * ======================================================================================================================
 */

/* 
 * ======================================================================================================================
 #
 # CONFIG.TXT
 #
 # Line Length is limited to 60 characters
 #123456789012345678901234567890123456789012345678901234567890

 # Connect mode to LoRaWAN via (0=OTAA, 1=ABP)
 lw_mode=0

 ############################################
 # LoRaWAN OTAA (Over The Air Authentication)
 ############################################
 # Input must be hex and match the length below
 # Next two convert to little endian format for TTN            
 lw_appeui=EFCDAB8967452301
 lw_deveui=EFCDAB8967452301
 # This key is in big endian format
 lw_appkey=0123456789ABCDEF01234567890ABCDE

 #################################################
 # LoRaWAN ABP (Authentication By Personalisation)
 #################################################
 # Input must be hex and match the length below
 lw_devaddr=12345678
 lw_nwkskey=0123456789ABCDEF01234567890ABCDE
 lw_appskey=0123456789ABCDEF01234567890ABCDE

 # 1 minute observation period is the default

 # 5 minute observation periods. Overrides 15m & 1m options
 # Options 0,1   
 5m_enable=0
 
 # 15 minute observation periods. Overrides 1m 
 # Options 0,1
 15m_enable=0

 # Rain Gauge rg1 pin A3
 # Options 0,1
 rg1_enable=0

 # Rain Gauge rg2 pin A4
 # Options 0,1
 rg2_enable=0

 # Distance Sensor for Snow, Surge, Stream on pin A5
 # Options 0 = No sensor, 5 = 5M sendor, 10 = 10m sensor
 ds_enable=0

 # Number of hours between daily reboots
 # A value of 0 disables this feature
 daily_reboot=22

 * ======================================================================================================================
 */



/*
 * ======================================================================================================================
 *  Define Global Configuration File Variables
 * ======================================================================================================================
 */
int cf_lw_mode=0; // 0=OTAA, 1=ABP
// OTAA
char *cf_lw_appeui;
char *cf_lw_deveui;
char *cf_lw_appkey;
// ABP
char *cf_lw_devaddr;
char *cf_lw_nwkskey;
char *cf_lw_appskey;

int cf_rg1_enable=0;
int cf_rg2_enable=0;
int cf_5m_enable=0;
int cf_15m_enable=0;
int cf_ds_enable=0;
int cf_daily_reboot=0;
