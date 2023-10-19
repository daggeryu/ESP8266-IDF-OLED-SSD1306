#include <stdint.h>

/**
  * @brief  OLED initialization / OLED初始化
  * @param  nothing / 无
  * @retval nothing / 无
  */
void OLED_Init(void);

/**
  * @brief  OLED Clear screen / OLED清屏
  * @param  nothing / 无
  * @retval nothing / 无
  */
void OLED_Clear(void);

/**
  * @brief  OLED displays one char / OLED显示一个字符
  * @param  Line Row position, range: 1-4 / 行位置，范围：1~4
  * @param  Column Column position, range: 1-16 / 列位置，范围：1~16
  * @param  Char A char to display, range: ASCII visible characters / 要显示的一个字符，范围：ASCII可见字符
  * @retval nothing / 无
  */
void OLED_ShowChar(uint8_t Line, uint8_t Column, char Char);

/**
  * @brief  OLED display string / OLED显示字符串
  * @param  Line Row position, range: 1-4 / 行位置，范围：1~4
  * @param  Column Column position, range: 1-16 / 列位置，范围：1~16
  * @param  Char A char to display, range: ASCII visible characters / 要显示的一个字符，范围：ASCII可见字符
  * @retval nothing / 无
  */
void OLED_ShowString(uint8_t Line, uint8_t Column, char *String);

/**
  * @brief  OLED display digits (decimal, positive) / OLED显示数字（十进制，正数）
  * @param  Line Row position, range: 1-4 / 行位置，范围：1~4
  * @param  Column Column position, range: 1-16 / 列位置，范围：1~16
  * @param  Number Number to display, range: 0~4294967295 / 要显示的数字，范围：0~4294967295
  * @param  Length To display the length of a number, range: 1-10 / 要显示数字的长度，范围：1~10
  * @retval nothing / 无
  */
void OLED_ShowNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);

/**
  * @brief  OLED display number (decimal, signed number) / OLED显示数字（十进制，带符号数）
  * @param  Line Row position, range: 1-4 / 行位置，范围：1~4
  * @param  Column Column position, range: 1-16 / 列位置，范围：1~16
  * @param  Number Number to display, range: -2147483648~2147483647 / 要显示的数字，范围：-2147483648~2147483647
  * @param  Length To display the length of a number, range: 1-10 / 要显示数字的长度，范围：1~10
  * @retval nothing / 无
  */
void OLED_ShowSignedNum(uint8_t Line, uint8_t Column, int32_t Number, uint8_t Length);

/**
  * @brief  OLED display digits (hexadecimal, positive) / OLED显示数字（十六进制，正数）
  * @param  Line Row position, range: 1-4 / 行位置，范围：1~4
  * @param  Column Column position, range: 1-16 / 列位置，范围：1~16
  * @param  Number Number to display, range: 0~0 x FFFFFFFF / 要显示的数字，范围：0~0xFFFFFFFF
  * @param  Length To display the length of a number, range: 1-8 / 要显示数字的长度，范围：1~8
  * @retval nothing / 无
  */
void OLED_ShowHexNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);

/**
  * @brief  OLED display of numbers (binary, positive) / OLED显示数字（二进制，正数）
  * @param  Line Row position, range: 1-4 / 行位置，范围：1~4
  * @param  Column Column position, range: 1-16 / 列位置，范围：1~16
  * @param  Number Number to display, range: 0~1111 1111 1111 1111 / 要显示的数字，范围：0~1111 1111 1111 1111
  * @param  Length To display the length of a number, range: 1-16 / 要显示数字的长度，范围：1~16
  * @retval nothing / 无
  */
void OLED_ShowBinNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);


