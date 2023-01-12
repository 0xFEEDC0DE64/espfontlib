// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Orbitron_Light_24Bitmaps[] = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0xFF,0xFF,0x03,0xC0, // '!'
	0xCF,0x3C,0xC0, // '"'
	0x01,0x81,0x80,0xC0,0xC0,0x30,0x30,0x0C,0x0C,0x7F,0xFF,0xDF,0xFF,0xF0,0x60,0x60,0x30,0x30,0x0C,0x0C,0x03,0x03,0x01,0x81,0x83,0xFF,0xFE,0xFF,0xFF,0x8C,0x04,0x03,0x03,0x00,0xC0,0xC0,0x20,0x30,0x00, // '#'
	0x00,0xC0,0x00,0x30,0x00,0x0C,0x01,0xFF,0xFE,0xFF,0xFF,0xF0,0x30,0x3C,0x0C,0x03,0x03,0x00,0xC0,0xC0,0x30,0x30,0x0F,0xFF,0xF9,0xFF,0xFF,0x00,0xC0,0xC0,0x30,0x30,0x0C,0x0C,0x03,0x03,0xC0,0xC0,0xF0,0x30,0x3F,0xFF,0xFD,0xFF,0xFE,0x00,0xC0,0x00,0x30,0x00,0x0C,0x00, // '$'
	0x00,0x00,0x03,0xF0,0x00,0xBF,0xC0,0x0D,0x86,0x00,0xEC,0x30,0x1E,0x61,0x81,0xE3,0x0C,0x1C,0x1F,0xE1,0xC0,0x7E,0x3C,0x00,0x03,0xC0,0x00,0x3C,0xFC,0x03,0x8F,0xF0,0x38,0x60,0x87,0x83,0x04,0x78,0x18,0x23,0x80,0xC1,0x10,0x07,0xF8,0x00,0x1F,0x80, // '%'
	0x3F,0xFF,0x03,0xFF,0xFC,0x18,0x00,0x60,0xC0,0x03,0x06,0x00,0x00,0x30,0x00,0x01,0xC0,0x00,0x07,0x80,0x00,0xCE,0x00,0x06,0x1C,0x0C,0x30,0x38,0x61,0x80,0x73,0x0C,0x00,0xF8,0x60,0x01,0xE3,0x00,0x07,0xDF,0xFF,0xF7,0x7F,0xFF,0x08, // '&'
	0xFC, // '''
	0x7F,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCF,0x70, // '('
	0xEF,0x33,0x33,0x33,0x33,0x33,0x33,0x3F,0xE0, // ')'
	0x06,0x00,0x60,0x06,0x07,0x6E,0x7F,0xE0,0xF0,0x0F,0x01,0x98,0x39,0xC1,0x08, // '*'
	0x0C,0x06,0x03,0x1F,0xFF,0xF8,0x60,0x30,0x18,0x0C,0x00, // '+'
	0xFF,0x80, // ','
	0xFF,0xFF,0xC0, // '-'
	0xF0, // '.'
	0x00,0x00,0x01,0x00,0x30,0x03,0x00,0x60,0x0C,0x01,0x80,0x38,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x03,0x00,0x60,0x0C,0x00,0x80,0x00,0x00, // '/'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0xF8,0x00,0xFC,0x00,0xFE,0x00,0xEF,0x01,0xC7,0x81,0xC3,0xC1,0xC1,0xE1,0xC0,0xF1,0xC0,0x7B,0x80,0x3F,0x80,0x1F,0x80,0x0F,0x80,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // '0'
	0x07,0x0F,0x1F,0x3B,0x73,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03, // '1'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x7F,0xFF,0xFF,0xFF,0xB0,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x80, // '2'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x3F,0xFF,0x1F,0xFF,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // '3'
	0x00,0x1C,0x00,0x1E,0x00,0x1F,0x00,0x1F,0x80,0x1C,0xC0,0x1C,0x60,0x1C,0x30,0x1C,0x18,0x3C,0x0C,0x38,0x06,0x38,0x03,0x1F,0xFF,0xFF,0xFF,0xF8,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00, // '4'
	0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0xFF,0xFE,0xFF,0xFF,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // '5'
	0x7F,0xFC,0x7F,0xFE,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0xFF,0xFE,0xFF,0xFF,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // '6'
	0xFF,0xFD,0xFF,0xFC,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x00,0x06, // '7'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // '8'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xFF,0xFF,0xBF,0xFF,0xC0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // '9'
	0xF0,0x00,0x00,0xF0, // ':'
	0xF0,0x00,0x00,0xFF,0x80, // ';'
	0x00,0x40,0x70,0x78,0x3C,0x3C,0x3C,0x0E,0x03,0x80,0x78,0x07,0x00,0xF0,0x0F,0x00,0xC0,0x10, // '<'
	0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF0, // '='
	0x80,0x30,0x0F,0x00,0xF0,0x1E,0x01,0xE0,0x1C,0x07,0x07,0x87,0x87,0x83,0xC0,0xC0,0x00,0x00, // '>'
	0xFF,0xFD,0xFF,0xFC,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0x80,0x03,0x0F,0xFE,0x3F,0xF8,0x60,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x18,0x00, // '?'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x3E,0x1E,0x3F,0x8F,0x30,0x67,0x98,0x33,0xCC,0x19,0xE6,0x0C,0xF3,0x06,0x79,0xFF,0xFC,0x7F,0xFE,0x00,0x03,0x00,0x01,0xFF,0xFF,0x7F,0xFF,0x80, // '@'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0x80, // 'A'
	0xFF,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0x00, // 'B'
	0x7F,0xFF,0xFF,0xFF,0xF0,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0xFF,0xFF,0x7F,0xFF,0x80, // 'C'
	0xFF,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0x00, // 'D'
	0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xFF,0xF8,0xFF,0xF8,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xFF,0xFF,0xFF,0xFF, // 'E'
	0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xFF,0xF8,0xFF,0xF8,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00, // 'F'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x1F,0xE0,0x0F,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // 'G'
	0xC0,0x00,0xF0,0x00,0x3C,0x00,0x0F,0x00,0x03,0xC0,0x00,0xF0,0x00,0x3C,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x3C,0x00,0x0F,0x00,0x03,0xC0,0x00,0xF0,0x00,0x3C,0x00,0x0F,0x00,0x03,0xC0,0x00,0xC0, // 'H'
	0xFF,0xFF,0xFF,0xFF,0xC0, // 'I'
	0x00,0x01,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // 'J'
	0xC0,0x03,0x60,0x03,0x30,0x03,0x18,0x03,0x0C,0x03,0x06,0x03,0x83,0x03,0x81,0xFF,0x80,0xFF,0xC0,0x60,0x60,0x30,0x18,0x18,0x06,0x0C,0x03,0x86,0x00,0xE3,0x00,0x31,0x80,0x0C,0xC0,0x03,0x00, // 'K'
	0xC0,0x00,0x30,0x00,0x0C,0x00,0x03,0x00,0x00,0xC0,0x00,0x30,0x00,0x0C,0x00,0x03,0x00,0x00,0xC0,0x00,0x30,0x00,0x0C,0x00,0x03,0x00,0x00,0xC0,0x00,0x30,0x00,0x0C,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xC0, // 'L'
	0xE0,0x00,0x7F,0x00,0x0F,0xF8,0x01,0xFD,0xC0,0x3B,0xCE,0x07,0x3C,0x60,0xE3,0xC3,0x0C,0x3C,0x19,0x83,0xC1,0xF8,0x3C,0x0F,0x03,0xC0,0x60,0x3C,0x00,0x03,0xC0,0x00,0x3C,0x00,0x03,0xC0,0x00,0x3C,0x00,0x03,0xC0,0x00,0x30, // 'M'
	0xE0,0x01,0xF8,0x00,0xFE,0x00,0x7B,0x80,0x3C,0xC0,0x1E,0x30,0x0F,0x0C,0x07,0x87,0x03,0xC1,0xC1,0xE0,0x70,0xF0,0x18,0x78,0x06,0x3C,0x01,0x9E,0x00,0xEF,0x00,0x3F,0x80,0x0F,0xC0,0x03,0x80, // 'N'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // 'O'
	0xFF,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xD8,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x00,0x00, // 'P'
	0x7F,0xFF,0x0F,0xFF,0xF8,0xC0,0x01,0x8C,0x00,0x18,0xC0,0x01,0x8C,0x00,0x18,0xC0,0x01,0x8C,0x00,0x18,0xC0,0x01,0x8C,0x00,0x18,0xC0,0x01,0x8C,0x00,0x18,0xC0,0x01,0x8C,0x00,0x18,0xC0,0x01,0x8F,0xFF,0xFF,0x7F,0xFF,0xF0, // 'Q'
	0xFF,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xD8,0x06,0x0C,0x03,0x86,0x00,0xE3,0x00,0x39,0x80,0x0E,0xC0,0x03,0x00, // 'R'
	0x7F,0xFF,0x7F,0xFF,0xF0,0x00,0x78,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0xFF,0xFE,0x7F,0xFF,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // 'S'
	0xFF,0xFF,0xFF,0xFF,0xC0,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x00, // 'T'
	0xC0,0x01,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0xC0,0x01,0xE0,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1E,0x00,0x0F,0x00,0x07,0xFF,0xFF,0x7F,0xFF,0x00, // 'U'
	0x60,0x00,0x0E,0x30,0x00,0x0C,0x38,0x00,0x1C,0x18,0x00,0x18,0x1C,0x00,0x30,0x0C,0x00,0x30,0x06,0x00,0x60,0x07,0x00,0xE0,0x03,0x00,0xC0,0x03,0x81,0xC0,0x01,0x81,0x80,0x00,0xC3,0x00,0x00,0xC7,0x00,0x00,0x66,0x00,0x00,0x7E,0x00,0x00,0x3C,0x00,0x00,0x18,0x00, // 'V'
	0x60,0x07,0x00,0x66,0x00,0xF0,0x06,0x30,0x0F,0x00,0xE3,0x00,0xD8,0x0C,0x18,0x19,0x80,0xC1,0x81,0x98,0x1C,0x18,0x18,0xC1,0x80,0xC3,0x0C,0x18,0x0C,0x30,0xE3,0x00,0xC7,0x06,0x30,0x06,0x60,0x63,0x00,0x66,0x03,0x60,0x07,0xE0,0x36,0x00,0x3C,0x03,0xE0,0x03,0xC0,0x1C,0x00,0x18,0x01,0xC0,0x01,0x80,0x18,0x00, // 'W'
	0x60,0x03,0x9C,0x01,0xC3,0x80,0xE0,0x70,0x30,0x0C,0x18,0x01,0x8C,0x00,0x37,0x00,0x07,0x80,0x01,0xC0,0x00,0xF8,0x00,0x37,0x00,0x18,0xC0,0x0C,0x18,0x07,0x03,0x03,0x80,0xE1,0xC0,0x1C,0x60,0x03,0x80, // 'X'
	0xE0,0x01,0xD8,0x00,0xE3,0x00,0x30,0x60,0x18,0x1C,0x0E,0x03,0x87,0x00,0x73,0x80,0x0C,0xC0,0x03,0xF0,0x00,0x78,0x00,0x0C,0x00,0x03,0x00,0x00,0xC0,0x00,0x30,0x00,0x0C,0x00,0x03,0x00,0x00,0xC0,0x00, // 'Y'
	0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0x80, // 'Z'
	0xFF,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCF,0xF0, // '['
	0x00,0x08,0x00,0xC0,0x0C,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x0C,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x0C,0x00,0x60,0x03,0x00,0x10,0x00, // '\'
	0xFF,0x33,0x33,0x33,0x33,0x33,0x33,0x3F,0xF0, // ']'
	0x00, // '^'
	0xFF,0xFF,0xFF,0xFF,0xC0, // '_'
	0x66,0x60, // '`'
	0xFF,0xFB,0xFF,0xF0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x3F,0xFF,0xFF,0xFF,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xF0, // 'a'
	0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0xFF,0xEF,0xFF,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0xFF,0xFF,0xFF,0x80, // 'b'
	0x7F,0xFF,0xFF,0xFC,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xFF,0xFD,0xFF,0xF0, // 'c'
	0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0D,0xFF,0xFF,0xFF,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0xFF,0xF7,0xFF,0xC0, // 'd'
	0x7F,0xFB,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3F,0xFF,0xFF,0xFF,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xFF,0xFD,0xFF,0xF0, // 'e'
	0x7F,0xFF,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0, // 'f'
	0x7F,0xFB,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xF0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x31,0xFF,0xC7,0xFE, // 'g'
	0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0xFF,0xEF,0xFF,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xC0, // 'h'
	0xF0,0x3F,0xFF,0xFF,0xFC, // 'i'
	0x01,0x80,0xC0,0x00,0x00,0x00,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x18,0x0C,0x07,0xFF,0xFF,0x00, // 'j'
	0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x6C,0x03,0xB0,0x1C,0xC0,0xE3,0x07,0x0C,0x38,0x3F,0xC0,0xFF,0x03,0x0E,0x0C,0x1C,0x30,0x38,0xC0,0x73,0x00,0xEC,0x01,0x80, // 'k'
	0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0xF7,0xC0, // 'l'
	0xFF,0xFF,0xFB,0xFF,0xFF,0xFC,0x03,0x00,0xF0,0x0C,0x03,0xC0,0x30,0x0F,0x00,0xC0,0x3C,0x03,0x00,0xF0,0x0C,0x03,0xC0,0x30,0x0F,0x00,0xC0,0x3C,0x03,0x00,0xF0,0x0C,0x03,0xC0,0x30,0x0F,0x00,0xC0,0x30, // 'm'
	0xFF,0xFB,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x30, // 'n'
	0x7F,0xFB,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 'o'
	0xFF,0xFB,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFF,0xFF,0xEC,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00, // 'p'
	0x7F,0xFF,0xFF,0xFC,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xF0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03, // 'q'
	0x7F,0xFF,0xFF,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x00, // 'r'
	0x7F,0xFB,0xFF,0xFC,0x00,0xF0,0x00,0xC0,0x03,0x00,0x0F,0xFF,0x9F,0xFF,0x00,0x0C,0x00,0x30,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 's'
	0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0x7F, // 't'
	0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xE0, // 'u'
	0x60,0x00,0xCE,0x00,0x30,0xC0,0x0E,0x1C,0x01,0x81,0x80,0x70,0x18,0x0C,0x03,0x03,0x80,0x30,0x60,0x06,0x1C,0x00,0x63,0x00,0x0C,0xC0,0x00,0xD8,0x00,0x1E,0x00,0x01,0xC0,0x00, // 'v'
	0x60,0x1C,0x01,0x9C,0x07,0x80,0xE3,0x01,0xE0,0x30,0xC0,0xFC,0x0C,0x18,0x33,0x06,0x06,0x1C,0xE1,0x81,0xC6,0x18,0xE0,0x33,0x87,0x30,0x0C,0xC0,0xCC,0x01,0xB0,0x3F,0x00,0x7C,0x07,0x80,0x1E,0x01,0xE0,0x03,0x80,0x70,0x00,0xC0,0x0C,0x00, // 'w'
	0x60,0x1C,0xE0,0x70,0xE0,0xC0,0xE3,0x00,0xEE,0x00,0xF8,0x00,0xE0,0x03,0xC0,0x07,0xC0,0x19,0xC0,0x71,0x81,0xC1,0x87,0x01,0x8C,0x03,0x80, // 'x'
	0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xFF,0xFD,0xFF,0xF0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x31,0xFF,0xC7,0xFE, // 'y'
	0xFF,0xFF,0xFF,0xF0,0x01,0xC0,0x0E,0x00,0x70,0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0xE0,0x07,0x00,0x38,0x00,0xFF,0xFF,0xFF,0xF0, // 'z'
	0x3B,0xD8,0xC6,0x31,0x98,0x86,0x18,0xC6,0x31,0x8F,0x38, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFC, // '|'
	0xE7,0x8C,0x63,0x18,0xC3,0x08,0xCC,0x63,0x18,0xDE,0xE0 // '}'
};
const GFXglyph Orbitron_Light_24Glyphs[] = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   8,    0,    0 }, // ' '
	  {     1,   2,  17,   6,    1,  -17 }, // '!'
	  {     6,   6,   3,  10,    1,  -17 }, // '"'
	  {     9,  18,  17,  21,    1,  -17 }, // '#'
	  {    48,  18,  23,  21,    1,  -20 }, // '$'
	  {   100,  21,  18,  24,    1,  -18 }, // '%'
	  {   148,  21,  17,  23,    1,  -17 }, // '&'
	  {   193,   2,   3,   6,    1,  -17 }, // '''
	  {   194,   4,  17,   7,    1,  -17 }, // '('
	  {   203,   4,  17,   8,    1,  -17 }, // ')'
	  {   212,  12,  10,  13,    0,  -17 }, // '*'
	  {   227,   9,   9,  12,    1,  -11 }, // '+'
	  {   238,   2,   6,   5,    1,   -2 }, // ','
	  {   240,   9,   2,  13,    1,   -8 }, // '-'
	  {   243,   2,   2,   6,    1,   -2 }, // '.'
	  {   244,  12,  18,  15,    1,  -18 }, // '/'
	  {   271,  17,  17,  20,    1,  -17 }, // '0'
	  {   308,   8,  17,  10,   -1,  -17 }, // '1'
	  {   325,  17,  17,  20,    1,  -17 }, // '2'
	  {   362,  17,  17,  20,    1,  -17 }, // '3'
	  {   399,  17,  17,  20,    1,  -17 }, // '4'
	  {   436,  17,  17,  20,    1,  -17 }, // '5'
	  {   473,  17,  17,  20,    1,  -17 }, // '6'
	  {   510,  15,  17,  17,    0,  -17 }, // '7'
	  {   542,  17,  17,  20,    1,  -17 }, // '8'
	  {   579,  17,  17,  20,    1,  -17 }, // '9'
	  {   616,   2,  14,   6,    1,  -14 }, // ':'
	  {   620,   2,  18,   5,    1,  -14 }, // ';'
	  {   625,  10,  14,  13,    1,  -14 }, // '<'
	  {   643,  12,   7,  15,    1,  -11 }, // '='
	  {   654,  10,  14,  12,    1,  -14 }, // '>'
	  {   672,  15,  17,  18,    1,  -17 }, // '?'
	  {   704,  17,  17,  20,    1,  -17 }, // '@'
	  {   741,  17,  17,  20,    1,  -17 }, // 'A'
	  {   778,  17,  17,  20,    1,  -17 }, // 'B'
	  {   815,  17,  17,  20,    1,  -17 }, // 'C'
	  {   852,  17,  17,  20,    1,  -17 }, // 'D'
	  {   889,  16,  17,  19,    1,  -17 }, // 'E'
	  {   923,  16,  17,  19,    1,  -17 }, // 'F'
	  {   957,  17,  17,  20,    1,  -17 }, // 'G'
	  {   994,  18,  17,  21,    1,  -17 }, // 'H'
	  {  1033,   2,  17,   6,    1,  -17 }, // 'I'
	  {  1038,  17,  17,  20,    1,  -17 }, // 'J'
	  {  1075,  17,  17,  20,    1,  -17 }, // 'K'
	  {  1112,  18,  17,  20,    1,  -17 }, // 'L'
	  {  1151,  20,  17,  23,    1,  -17 }, // 'M'
	  {  1194,  17,  17,  20,    1,  -17 }, // 'N'
	  {  1231,  17,  17,  20,    1,  -17 }, // 'O'
	  {  1268,  17,  17,  20,    1,  -17 }, // 'P'
	  {  1305,  20,  17,  22,    1,  -17 }, // 'Q'
	  {  1348,  17,  17,  20,    1,  -17 }, // 'R'
	  {  1385,  17,  17,  20,    1,  -17 }, // 'S'
	  {  1422,  17,  17,  20,    1,  -17 }, // 'T'
	  {  1459,  17,  17,  20,    1,  -17 }, // 'U'
	  {  1496,  24,  17,  25,    0,  -17 }, // 'V'
	  {  1547,  28,  17,  29,    0,  -17 }, // 'W'
	  {  1607,  18,  17,  20,    1,  -17 }, // 'X'
	  {  1646,  18,  17,  20,    0,  -17 }, // 'Y'
	  {  1685,  17,  17,  20,    1,  -17 }, // 'Z'
	  {  1722,   4,  17,   7,    1,  -17 }, // '['
	  {  1731,  12,  18,  15,    1,  -18 }, // '\'
	  {  1758,   4,  17,   8,    1,  -17 }, // ']'
	  {  1767,   1,   1,   1,    0,    0 }, // '^'
	  {  1768,  17,   2,  20,    1,    0 }, // '_'
	  {  1773,   4,   3,   6,    0,  -24 }, // '`'
	  {  1775,  14,  14,  17,    1,  -14 }, // 'a'
	  {  1800,  14,  19,  17,    1,  -19 }, // 'b'
	  {  1834,  14,  14,  17,    1,  -14 }, // 'c'
	  {  1859,  14,  19,  17,    1,  -19 }, // 'd'
	  {  1893,  14,  14,  17,    1,  -14 }, // 'e'
	  {  1918,   8,  19,  11,    1,  -19 }, // 'f'
	  {  1937,  14,  20,  17,    1,  -14 }, // 'g'
	  {  1972,  14,  19,  17,    1,  -19 }, // 'h'
	  {  2006,   2,  19,   6,    1,  -19 }, // 'i'
	  {  2011,   9,  25,   7,   -4,  -19 }, // 'j'
	  {  2040,  14,  19,  16,    1,  -19 }, // 'k'
	  {  2074,   6,  19,   8,    1,  -19 }, // 'l'
	  {  2089,  22,  14,  25,    1,  -14 }, // 'm'
	  {  2128,  14,  14,  17,    1,  -14 }, // 'n'
	  {  2153,  14,  14,  17,    1,  -14 }, // 'o'
	  {  2178,  14,  20,  17,    1,  -14 }, // 'p'
	  {  2213,  14,  20,  17,    1,  -14 }, // 'q'
	  {  2248,  11,  14,  13,    1,  -14 }, // 'r'
	  {  2268,  14,  14,  17,    1,  -14 }, // 's'
	  {  2293,   8,  19,  11,    1,  -19 }, // 't'
	  {  2312,  14,  14,  17,    1,  -14 }, // 'u'
	  {  2337,  19,  14,  20,    0,  -14 }, // 'v'
	  {  2371,  26,  14,  27,    0,  -14 }, // 'w'
	  {  2417,  15,  14,  18,    1,  -14 }, // 'x'
	  {  2444,  14,  20,  17,    1,  -14 }, // 'y'
	  {  2479,  14,  14,  17,    1,  -14 }, // 'z'
	  {  2504,   5,  17,   8,    1,  -17 }, // '{'
	  {  2515,   2,  23,   6,    1,  -20 }, // '|'
	  {  2521,   5,  17,   8,    1,  -17 } // '}'
};
const GFXfont Orbitron_Light_24 = {
(uint8_t  *)Orbitron_Light_24Bitmaps,(GFXglyph *)Orbitron_Light_24Glyphs,0x20, 0x7D, 24};