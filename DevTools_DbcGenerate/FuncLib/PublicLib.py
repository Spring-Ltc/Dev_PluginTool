# coding=utf-8




def to_hex_with_prefix(s):
    return f"0x{int(s):03x}"



def hex_to_decimal_str(hex_str):
    """
    将十六进制字符串（如 '0x023'）转换为十进制字符串（如 '35'）。
    支持大小写 '0x' 前缀，若没有前缀也可处理。
    """
    # 去除可选的 '0x' 或 '0X' 前缀
    if hex_str.startswith(('0x', '0X')):
        hex_str = hex_str[2:]
    # 将十六进制字符串转换为整数
    decimal_value = int(hex_str, 16)
    # 返回十进制数字的字符串
    return str(decimal_value)




