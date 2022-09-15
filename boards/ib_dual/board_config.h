#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Interplan Co., LTD."
#define PRODUCT_NAME "IB_DUAL"
#define VOLUME_LABEL "IBM4BOOT"
#define INDEX_URL "https://www.interplan.co.jp/"
#define BOARD_ID "SAMD51G19A-IBDUAL-v0"

#define USB_VID 0x358D
#define USB_PID 0x0100

#define LED_PIN PIN_PA15

//#define BOARD_RGBLED_CLOCK_PIN            PIN_PB02
//#define BOARD_RGBLED_DATA_PIN             PIN_PB03

#define BOOT_USART_MODULE                 SERCOM3
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM3_GCLK_ID_SLOW

#endif
