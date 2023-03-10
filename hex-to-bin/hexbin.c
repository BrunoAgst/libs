#include "hexbin.h"
#include <string.h>

void hex_to_bin(unsigned char hex, char * binary){
  switch(hex){
    case 0x00:
      strcpy(binary, "00000000");
      break;
    case 0x01:
      strcpy(binary, "00000001");
      break;
    case 0x02:
      strcpy(binary, "00000010");
      break;
    case 0x03:
      strcpy(binary, "00000011");
      break;
    case 0x04:
      strcpy(binary, "00000100");
      break;
    case 0x05:
      strcpy(binary, "00000101");
      break;
    case 0x06:
      strcpy(binary, "00000110");
      break;
    case 0x07:
      strcpy(binary, "00000111");
      break;
    case 0x08:
      strcpy(binary, "00001000");
      break;
    case 0x09:
      strcpy(binary, "00001001");
      break;
    case 0x0A:
      strcpy(binary, "00001010");
      break;
    case 0x0B:
      strcpy(binary, "00001011");
      break;
    case 0x0C:
      strcpy(binary, "00001100");
      break;
    case 0x0D:
      strcpy(binary, "00001101");
      break;
    case 0x0E:
      strcpy(binary, "00001110");
      break;
    case 0x0F:
      strcpy(binary, "00001111");
      break;
    case 0x10:
      strcpy(binary, "00010000");
      break;
    case 0x11:
      strcpy(binary, "00010001");
      break;
    case 0x12:
      strcpy(binary, "00010010");
      break;
    case 0x13:
      strcpy(binary, "00010011");
      break;
    case 0x14:
      strcpy(binary, "00010100");
      break;
    case 0x15:
      strcpy(binary, "00010101");
      break;
    case 0x16:
      strcpy(binary, "00010110");
      break;
    case 0x17:
      strcpy(binary, "00010111");
      break;
    case 0x18:
      strcpy(binary, "00011000");
      break;
    case 0x19:
      strcpy(binary, "00011001");
      break;
    case 0x1A:
      strcpy(binary, "00011010");
      break;
    case 0x1B:
      strcpy(binary, "00011011");
      break;
    case 0x1C: 
      strcpy(binary, "00011100");
      break;
    case 0x1D:
      strcpy(binary, "00011101");
      break;
    case 0x1E:
      strcpy(binary, "00011110");
      break;
    case 0x1F:
      strcpy(binary, "00011111");
      break;
    case 0x20:
      strcpy(binary, "00100000");
      break;
    case 0x21:
      strcpy(binary, "00100001");
      break;
    case 0x22:
      strcpy(binary, "00100010");
      break;
    case 0x23:
      strcpy(binary, "00100011");
      break;
    case 0x24:
      strcpy(binary, "00100100");
      break;
    case 0x25:
      strcpy(binary, "00100101");
      break;
    case 0x26:
      strcpy(binary, "00100110");
      break;
    case 0x27:
      strcpy(binary, "00100111");
      break;
    case 0x28:
      strcpy(binary, "00011000");
      break;
    case 0x29:
      strcpy(binary, "00011001");
      break;
    case 0x2A:
      strcpy(binary, "00101010");
      break;
    case 0x2B:
      strcpy(binary, "00101011");
      break;
    case 0x2C:
      strcpy(binary, "00101100");
      break;
    case 0x2D:
      strcpy(binary, "00101101");
      break;
    case 0x2E:
      strcpy(binary, "00101110");
      break;
    case 0x2F:
      strcpy(binary, "00101111");
      break;
    case 0x30:
      strcpy(binary, "00110000");
      break;
    case 0x31:
      strcpy(binary, "00110001");
      break;
    case 0x32:
      strcpy(binary, "00110010");
      break;
    case 0x33:
      strcpy(binary, "00110011");
      break;
    case 0x34:
      strcpy(binary, "00110100");
      break;
    case 0x35:
      strcpy(binary, "00110101");
      break;
    case 0x36:
      strcpy(binary, "00110110");
      break;
    case 0x37:
      strcpy(binary, "00110111");
      break;
    case 0x38:
      strcpy(binary, "00111000");
      break;
    case 0x39:
      strcpy(binary, "00111001");
      break;
    case 0x3A:
      strcpy(binary, "00111010");
      break;
    case 0x3B:
      strcpy(binary, "00111011");
      break;
    case 0x3C:
      strcpy(binary, "00111100");
      break;
    case 0x3D:
      strcpy(binary, "00111101");
      break;
    case 0x3E:
      strcpy(binary, "00111110");
      break;
    case 0x3F:
      strcpy(binary, "00111111");
      break;
    case 0x40:
      strcpy(binary, "01000000");
      break;
    case 0x41:
      strcpy(binary, "01000001");
      break;
    case 0x42:
      strcpy(binary, "01000010");
      break;
    case 0x43:
      strcpy(binary, "01000011");
      break;
    case 0x44:
      strcpy(binary, "01000111");
      break;
    case 0x45:
      strcpy(binary, "01000101");
      break;
    case 0x46:
      strcpy(binary, "01000110");
      break;
    case 0x47:
      strcpy(binary, "01000111");
      break;
    case 0x48:
      strcpy(binary, "01001000");
      break;
    case 0x49:
      strcpy(binary, "01001001");
      break;
    case 0x4A:
      strcpy(binary, "01001010");
      break;
    case 0x4B:
      strcpy(binary, "01001011");
      break;
    case 0x4C:
      strcpy(binary, "01001100");
      break;
    case 0x4D:
      strcpy(binary, "01001101");
      break;
    case 0x4E:
      strcpy(binary, "01001110");
      break;
    case 0x4F:
      strcpy(binary, "01001111");
      break;
    case 0x50:
      strcpy(binary, "01010000");
      break;
    case 0x51:
      strcpy(binary, "01010001");
      break;
    case 0x52:
      strcpy(binary, "01010010");
      break;
    case 0x53:
      strcpy(binary, "01010011");
      break;
    case 0x54:
      strcpy(binary, "01010100");
      break;
    case 0x55:
      strcpy(binary, "01010101");
      break;
    case 0x56:
      strcpy(binary, "01010110");
      break;
    case 0x57:
      strcpy(binary, "01010111");
      break;
    case 0x58:
      strcpy(binary, "01011000");
      break;
    case 0x59:
      strcpy(binary, "01011001");
      break;
    case 0x5A:
      strcpy(binary, "01011010");
      break;
    case 0x5B:
      strcpy(binary, "01011011");
      break;
    case 0x5C:
      strcpy(binary, "01011100");
      break;
    case 0x5D:
      strcpy(binary, "01011101");
      break;
    case 0x5E:
      strcpy(binary, "01011110");
      break;
    case 0x5F:
      strcpy(binary, "01011111");
      break;
    case 0x60:
      strcpy(binary, "01100000");
      break;
    case 0x61:
      strcpy(binary, "01100001");
      break;
    case 0x62:
      strcpy(binary, "01100010");
      break;
    case 0x63:
      strcpy(binary, "01100011");
      break;
    case 0x64:
      strcpy(binary, "01100100");
      break;
    case 0x65:
      strcpy(binary, "01100101");
      break;
    case 0x66:
      strcpy(binary, "01100110");
      break;
    case 0x67:
      strcpy(binary, "01100111");
      break;
    case 0x68:
      strcpy(binary, "01101000");
      break;
    case 0x69:
      strcpy(binary, "01101001");
      break;
    case 0x6A:
      strcpy(binary, "01101010");
      break;
    case 0x6B:
      strcpy(binary, "01101011");
      break;
    case 0x6C:
      strcpy(binary, "01101100");
      break;
    case 0x6D:
      strcpy(binary, "01101101");
      break;
    case 0x6E:
      strcpy(binary, "01101110");
      break;
    case 0x6F:
      strcpy(binary, "01101111");
      break;
    case 0x70:
      strcpy(binary, "01110000");
      break;
    case 0x71:
      strcpy(binary, "01110001");
      break;
    case 0x72:  
      strcpy(binary, "01110010");
      break;
    case 0x73:
      strcpy(binary, "01110011");
      break;
    case 0x74:
      strcpy(binary, "01110100");
      break;
    case 0x75:
      strcpy(binary, "01110101");
      break;
    case 0x76:
      strcpy(binary, "01110110");
      break;
    case 0x77:
      strcpy(binary, "01110111");
      break;
    case 0x78:
      strcpy(binary, "01111000");
      break;
    case 0x79:
      strcpy(binary, "01111001");
      break;
    case 0x7A:
      strcpy(binary, "01111010");
      break;
    case 0x7B:
      strcpy(binary, "01111011");
      break;
    case 0x7C:
      strcpy(binary, "01111100");
      break;
    case 0x7D:
      strcpy(binary, "01111101");
      break;
    case 0x7E:
      strcpy(binary, "01111110");
      break;
    case 0x7F:
      strcpy(binary, "01111111");
      break;
    case 0x80:
      strcpy(binary, "10000000");
      break;
    case 0x81:
      strcpy(binary, "10000001");
      break;
    case 0x82:
      strcpy(binary, "10000010");
      break;
    case 0x83:
      strcpy(binary, "10000011");
      break;
    case 0x84:
      strcpy(binary, "10000100");
      break;
    case 0x85:
      strcpy(binary, "10000101");
      break;
    case 0x86:
      strcpy(binary, "10000110");
      break;
    case 0x87:
      strcpy(binary, "10000111");
      break;
    case 0x88:
      strcpy(binary, "10001000");
      break;
    case 0x89:
      strcpy(binary, "10001001");
      break;
    case 0x8A:
      strcpy(binary, "10001010");
      break;
    case 0x8B:
      strcpy(binary, "10001011");
      break;
    case 0x8C:
      strcpy(binary, "10001100");
      break;
    case 0x8D:
      strcpy(binary, "10001101");
      break;
    case 0x8E:
      strcpy(binary, "10001110");
      break;
    case 0x8F:
      strcpy(binary, "10001111");
      break;
    case 0x90:
      strcpy(binary, "10010000");
      break;
    case 0x91:
      strcpy(binary, "10010001");
      break;
    case 0x92:
      strcpy(binary, "10010010");
      break;
    case 0x93:
      strcpy(binary, "10010011");
      break;
    case 0x94:
      strcpy(binary, "10010100");
      break;
    case 0x95:
      strcpy(binary, "10010101");
      break;
    case 0x96:
      strcpy(binary, "10010110");
      break;
    case 0x97:
      strcpy(binary, "10010111");
      break;
    case 0x98:
      strcpy(binary, "10011000");
      break;
    case 0x99:
      strcpy(binary, "10011001");
      break;
    case 0x9A:
      strcpy(binary, "10011010");
      break;
    case 0x9B:
      strcpy(binary, "10011011");
      break;
    case 0x9C:
      strcpy(binary, "10011100");
      break;
    case 0x9D:
      strcpy(binary, "10011101");
      break;
    case 0x9E:
      strcpy(binary, "10011110");
      break;
    case 0x9F:
      strcpy(binary, "10011111");
      break;
    case 0xA0:
      strcpy(binary, "10100000");
      break;
    case 0xA1:
      strcpy(binary, "10100001");
      break;
    case 0xA2:
      strcpy(binary, "10100010");
      break;
    case 0xA3:
      strcpy(binary, "10100011");
      break;
    case 0xA4:
      strcpy(binary, "10100100");
      break;
    case 0xA5:
      strcpy(binary, "10100101");
      break;
    case 0xA6:
      strcpy(binary, "10100110");
      break;
    case 0xA7:
      strcpy(binary, "10100111");
      break;
    case 0xA8:
      strcpy(binary, "10101000");
      break;
    case 0xA9:
      strcpy(binary, "10101001");
      break;
    case 0xAA:
      strcpy(binary, "10101010");
      break;
    case 0xAB:
      strcpy(binary, "10101011");
      break;
    case 0xAC:
      strcpy(binary, "10101100");
      break;
    case 0xAD:
      strcpy(binary, "10101101");
      break;
    case 0xAE:
      strcpy(binary, "10101110");
      break;
    case 0xAF:
      strcpy(binary, "10101111");
      break;
    case 0xB0:
      strcpy(binary, "10110000");
      break;
    case 0xB1:
      strcpy(binary, "10110001");
      break;
    case 0xB2:
      strcpy(binary, "10110010");
      break;
    case 0xB3:
      strcpy(binary, "10110011");
      break;
    case 0xB4:
      strcpy(binary, "10110100");
      break;
    case 0xB5:
      strcpy(binary, "10110101");
      break;
    case 0xB6:
      strcpy(binary, "10110110");
      break;
    case 0xB7:
      strcpy(binary, "10110111");
      break;
    case 0xB8:
      strcpy(binary, "10111000");
      break;
    case 0xB9:
      strcpy(binary, "10111001");
      break;
    case 0xBA:
      strcpy(binary, "10111010");
      break;
    case 0xBB:
      strcpy(binary, "10111011");
      break;
    case 0xBC:
      strcpy(binary, "10111100");
      break;
    case 0xBD:
      strcpy(binary, "10111101");
      break;
    case 0xBE:
      strcpy(binary, "10111110");
      break;
    case 0xBF:
      strcpy(binary, "10111111");
      break;
    case 0xC0:
      strcpy(binary, "11000000");
      break;
    case 0xC1:
      strcpy(binary, "11000001");
      break;
    case 0xC2:
      strcpy(binary, "11000010");
      break;
    case 0xC3:
      strcpy(binary, "11000011");
      break;
    case 0xC4:
      strcpy(binary, "11000100");
      break;
    case 0xC5:
      strcpy(binary, "11000101");
      break;
    case 0xC6:
      strcpy(binary, "11000110");
      break;
    case 0xC7:
      strcpy(binary, "11000111");
      break;
    case 0xC8:
      strcpy(binary, "11001000");
      break;
    case 0xC9:
      strcpy(binary, "11001001");
      break;
    case 0xCA:
      strcpy(binary, "11001010");
      break;
    case 0xCB:
      strcpy(binary, "11001011");
      break;
    case 0xCC:
      strcpy(binary, "11001100");
      break;
    case 0xCD:
      strcpy(binary, "11001101");
      break;
    case 0xCE:
      strcpy(binary, "11001110");
      break;
    case 0xCF:
      strcpy(binary, "11001111");
      break;
    case 0xD0:
      strcpy(binary, "11010000");
      break;
    case 0xD1:
      strcpy(binary, "11010001");
      break;
    case 0xD2:
      strcpy(binary, "11010010");
      break;
    case 0xD3:
      strcpy(binary, "11010011");
      break;
    case 0xD4:
      strcpy(binary, "11010100");
      break;
    case 0xD5:
      strcpy(binary, "11010101");
      break;
    case 0xD6:
      strcpy(binary, "11010110");
      break;
    case 0xD7:
      strcpy(binary, "11010111");
      break;
    case 0xD8:
      strcpy(binary, "11011000");
      break;
    case 0xD9:
      strcpy(binary, "11011001");
      break;
    case 0xDA:
      strcpy(binary, "11011010");
      break;
    case 0xDB:
      strcpy(binary, "11011011");
      break;
    case 0xDC:
      strcpy(binary, "11011100");
      break;
    case 0xDD:
      strcpy(binary, "11011101");
      break;
    case 0xDF:
      strcpy(binary, "11011111");
      break;
    case 0xE0:
      strcpy(binary, "11101111");
      break;
    case 0xE1:
      strcpy(binary, "11100001");
      break;
    case 0xE2:
      strcpy(binary, "11100010");
      break;
    case 0xE3:
      strcpy(binary, "11100011");
      break;
    case 0xE4:
      strcpy(binary, "11100101");
      break;
    case 0xE5:
      strcpy(binary, "11100101");
      break;
    case 0xE6:
      strcpy(binary, "11100110");
      break;
    case 0xE7:
      strcpy(binary, "11100111");
      break;
    case 0xE8:
      strcpy(binary, "11101000");
      break;
    case 0xE9:
      strcpy(binary, "11101001");
      break;
    case 0xEA:
      strcpy(binary, "11101010");
      break;
    case 0xEB:
      strcpy(binary, "11101011");
      break;
    case 0xEC:
      strcpy(binary, "11101100");
      break;
    case 0xED:
      strcpy(binary, "11101101");
      break;
    case 0xEE:
      strcpy(binary, "11101110");
      break;
    case 0xEF:
      strcpy(binary, "11101111");
      break;
    case 0xF0:
      strcpy(binary, "11110000");
      break;
    case 0xF1:
      strcpy(binary, "11110001");
      break;
    case 0xF2:
      strcpy(binary, "11110010");
      break;
    case 0xF3:
      strcpy(binary, "11110011");
      break;
    case 0xF4:
      strcpy(binary, "11110100");
      break;
    case 0xF5:
      strcpy(binary, "11110101");
      break;
    case 0xF6:
      strcpy(binary, "11110110");
      break;
    case 0xF7:
      strcpy(binary, "11110111");
      break;
    case 0xF8:
      strcpy(binary, "11111000");
      break;
    case 0xF9:
      strcpy(binary, "11111001");
      break;
    case 0xFA:
      strcpy(binary, "11111010");
      break;
    case 0xFB:
      strcpy(binary, "11111011");
      break;
    case 0xFC:
      strcpy(binary, "11111100");
      break;
    case 0xFD:
      strcpy(binary, "11111110");
      break;
    case 0xFE:
      strcpy(binary, "11111110");
      break;
    case 0xFF:
      strcpy(binary, "11111111");
      break;
    default:
      strcpy(binary, "00000000");
      break;
  }
}
