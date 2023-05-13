/**
** 4x7 font
*
*
* Author Rob Jennings
*/
const uint8_t Font4x7FixedBitmaps[] PROGMEM = {
  0xFA, 0xFA, 0xB4, 0x55, 0xF5, 0xF5, 0x50, 0x5F, 0x77, 0xD0, 0x00, 0x94,
  0xA9, 0x48, 0x00, 0x4A, 0xA5, 0xAB, 0x60, 0xD8, 0x00, 0x6A, 0xA4, 0x00,
  0x95, 0x58, 0x00, 0xAA, 0x80, 0x5D, 0x00, 0xD0, 0xE0, 0xF0, 0x25, 0x25,
  0x20, 0x00, 0xF6, 0xDB, 0x78, 0x00, 0x59, 0x24, 0xB8, 0x00, 0xE4, 0xF9,
  0x38, 0x00, 0xE4, 0xB2, 0x78, 0x00, 0xB6, 0xF2, 0x48, 0x00, 0xF2, 0x72,
  0x78, 0x00, 0xF2, 0x7B, 0x78, 0x00, 0xE4, 0xA9, 0x20, 0x00, 0xF6, 0xFB,
  0x78, 0x00, 0xF6, 0xF2, 0x78, 0x00, 0xD8, 0x00, 0xDC, 0x00, 0x2A, 0x22,
  0x00, 0xE3, 0x80, 0x88, 0xA8, 0x00, 0x54, 0xA4, 0x10, 0x00, 0x69, 0x9B,
  0xB8, 0x70, 0x56, 0xFB, 0x68, 0x00, 0xD6, 0xFB, 0x70, 0x00, 0x56, 0x49,
  0x50, 0x00, 0xD6, 0xDB, 0x70, 0x00, 0xF2, 0x69, 0x38, 0x00, 0xF2, 0x69,
  0x20, 0x00, 0x69, 0x8B, 0x99, 0x60, 0xB6, 0xFB, 0x68, 0x00, 0xE9, 0x24,
  0xB8, 0x00, 0x24, 0x93, 0x78, 0x00, 0xB6, 0xEB, 0x68, 0x00, 0x92, 0x49,
  0x38, 0x00, 0x9F, 0xF9, 0x99, 0x90, 0x99, 0xDF, 0xB9, 0x90, 0x56, 0xDB,
  0x50, 0x00, 0xD6, 0xE9, 0x20, 0x00, 0x56, 0xDB, 0xD8, 0x00, 0xD6, 0xED,
  0x68, 0x00, 0x72, 0x22, 0x70, 0x00, 0xE9, 0x24, 0x90, 0x00, 0xB6, 0xDB,
  0x78, 0x00, 0xB6, 0xDB, 0x50, 0x00, 0x99, 0x99, 0xFF, 0x90, 0xB6, 0xAB,
  0x68, 0x00, 0xB6, 0xA4, 0x90, 0x00, 0xE4, 0xA9, 0x38, 0x00, 0xF2, 0x49,
  0x38, 0x00, 0x91, 0x24, 0x48, 0x00, 0xE4, 0x92, 0x78, 0x00, 0x54, 0x00,
  0xE0, 0x90, 0x65, 0xD6, 0x00, 0x93, 0x5B, 0x70, 0x00, 0x72, 0x46, 0x00,
  0x25, 0xDB, 0x58, 0x00, 0x57, 0xC6, 0x00, 0x69, 0x74, 0x90, 0x00, 0x75,
  0x9E, 0x00, 0x93, 0x5B, 0x68, 0x00, 0xBE, 0x45, 0x5C, 0x00, 0x92, 0xDD,
  0x68, 0x00, 0xFE, 0x00, 0xFF, 0x99, 0x90, 0xD6, 0xDA, 0x00, 0x56, 0xD4,
  0x00, 0xD7, 0x48, 0x00, 0x75, 0x92, 0x00, 0xD6, 0x48, 0x00, 0x71, 0x1C,
  0x00, 0x4B, 0xA4, 0x98, 0x00, 0xB6, 0xDE, 0x00, 0xB6, 0xD4, 0x00, 0x99,
  0x9F, 0x90, 0xB5, 0x5A, 0x00, 0xB5, 0x9C, 0x00, 0xE5, 0x4E, 0x00, 0x29,
  0x44, 0x88, 0x00, 0xFE, 0x00, 0x89, 0x14, 0xA0, 0x00, 0xCC, 0x00
};

const GFXglyph Font4x7FixedGlyphs[] PROGMEM = {
  { 0, 0, 1, 2, 0, 0 },     // 0x20 ' '
  { 1, 1, 7, 2, 0, -7 },    // 0x21 '!'
  { 2, 3, 2, 4, 0, -7 },    // 0x22 '"'
  { 3, 4, 7, 5, 0, -7 },    // 0x23 '#'
  { 7, 3, 7, 4, 0, -7 },    // 0x24 '$'
  { 11, 3, 7, 4, 0, -7 },   // 0x25 '%'
  { 15, 4, 7, 5, 0, -7 },   // 0x26 '&'
  { 19, 2, 3, 3, 0, -7 },   // 0x27 '''
  { 21, 2, 7, 3, 0, -7 },   // 0x28 '('
  { 24, 2, 7, 3, 0, -7 },   // 0x29 ')'
  { 27, 3, 3, 4, 0, -5 },   // 0x2A '*'
  { 29, 3, 3, 4, 0, -5 },   // 0x2B '+'
  { 31, 2, 2, 3, 0, -2 },   // 0x2C ','
  { 32, 3, 1, 4, 0, -4 },   // 0x2D '-'
  { 33, 2, 2, 3, 0, -2 },   // 0x2E '.'
  { 34, 3, 7, 4, 0, -7 },   // 0x2F '/'
  { 38, 3, 7, 4, 0, -7 },   // 0x30 '0'
  { 42, 3, 7, 4, 0, -7 },   // 0x31 '1'
  { 46, 3, 7, 4, 0, -7 },   // 0x32 '2'
  { 50, 3, 7, 4, 0, -7 },   // 0x33 '3'
  { 54, 3, 7, 4, 0, -7 },   // 0x34 '4'
  { 58, 3, 7, 4, 0, -7 },   // 0x35 '5'
  { 62, 3, 7, 4, 0, -7 },   // 0x36 '6'
  { 66, 3, 7, 4, 0, -7 },   // 0x37 '7'
  { 70, 3, 7, 4, 0, -7 },   // 0x38 '8'
  { 74, 3, 7, 4, 0, -7 },   // 0x39 '9'
  { 78, 1, 5, 2, 0, -6 },   // 0x3A ':'
  { 80, 1, 6, 2, 0, -6 },   // 0x3B ';'
  { 82, 3, 5, 4, 0, -6 },   // 0x3C '<'
  { 85, 3, 3, 4, 0, -5 },   // 0x3D '='
  { 87, 3, 5, 4, 0, -6 },   // 0x3E '>'
  { 90, 3, 7, 4, 0, -7 },   // 0x3F '?'
  { 94, 4, 7, 5, 0, -7 },   // 0x40 '@'
  { 98, 3, 7, 4, 0, -7 },   // 0x41 'A'
  { 102, 3, 7, 4, 0, -7 },  // 0x42 'B'
  { 106, 3, 7, 4, 0, -7 },  // 0x43 'C'
  { 110, 3, 7, 4, 0, -7 },  // 0x44 'D'
  { 114, 3, 7, 4, 0, -7 },  // 0x45 'E'
  { 118, 3, 7, 4, 0, -7 },  // 0x46 'F'
  { 122, 4, 7, 5, 0, -7 },  // 0x47 'G'
  { 126, 3, 7, 4, 0, -7 },  // 0x48 'H'
  { 130, 3, 7, 4, 0, -7 },  // 0x49 'I'
  { 134, 3, 7, 4, 0, -7 },  // 0x4A 'J'
  { 138, 3, 7, 4, 0, -7 },  // 0x4B 'K'
  { 142, 3, 7, 4, 0, -7 },  // 0x4C 'L'
  { 146, 4, 7, 5, 0, -7 },  // 0x4D 'M'
  { 150, 4, 7, 5, 0, -7 },  // 0x4E 'N'
  { 154, 3, 7, 6, 0, -7 },  // 0x4F 'O'
  { 158, 3, 7, 4, 0, -7 },  // 0x50 'P'
  { 162, 3, 7, 4, 0, -7 },  // 0x51 'Q'
  { 166, 3, 7, 4, 0, -7 },  // 0x52 'R'
  { 170, 3, 7, 4, 0, -7 },  // 0x53 'S'
  { 174, 3, 7, 4, 0, -7 },  // 0x54 'T'
  { 178, 3, 7, 4, 0, -7 },  // 0x55 'U'
  { 182, 3, 7, 4, 0, -7 },  // 0x56 'V'
  { 186, 4, 7, 5, 0, -7 },  // 0x57 'W'
  { 190, 3, 7, 4, 0, -7 },  // 0x58 'X'
  { 194, 3, 7, 4, 0, -7 },  // 0x59 'Y'
  { 198, 3, 7, 4, 0, -7 },  // 0x5A 'Z'
  { 202, 3, 7, 4, 0, -7 },  // 0x5B '['
  { 206, 3, 7, 4, 0, -7 },  // 0x5C '\'
  { 210, 3, 7, 4, 0, -7 },  // 0x5D ']'
  { 214, 3, 3, 4, 0, -7 },  // 0x5E '^'
  { 216, 3, 1, 4, 0, -1 },  // 0x5F '_'
  { 217, 2, 2, 3, 0, -7 },  // 0x60 '`'
  { 218, 3, 5, 4, 0, -5 },  // 0x61 'a'
  { 221, 3, 7, 4, 0, -7 },  // 0x62 'b'
  { 225, 3, 5, 4, 0, -5 },  // 0x63 'c'
  { 228, 3, 7, 4, 0, -7 },  // 0x64 'd'
  { 232, 3, 5, 4, 0, -5 },  // 0x65 'e'
  { 235, 3, 7, 4, 0, -7 },  // 0x66 'f'
  { 239, 3, 5, 4, 0, -5 },  // 0x67 'g'
  { 242, 3, 7, 4, 0, -7 },  // 0x68 'h'
  { 246, 1, 7, 2, 0, -7 },  // 0x69 'i'
  { 247, 2, 7, 3, 0, -7 },  // 0x6A 'j'
  { 250, 3, 7, 4, 0, -7 },  // 0x6B 'k'
  { 254, 1, 7, 2, 0, -7 },  // 0x6C 'l'
  { 256, 4, 5, 5, 0, -5 },  // 0x6D 'm'
  { 259, 3, 5, 4, 0, -5 },  // 0x6E 'n'
  { 262, 3, 5, 4, 0, -5 },  // 0x6F 'o'
  { 265, 3, 5, 4, 0, -5 },  // 0x70 'p'
  { 268, 3, 5, 4, 0, -5 },  // 0x71 'q'
  { 271, 3, 5, 4, 0, -5 },  // 0x72 'r'
  { 274, 3, 5, 4, 0, -5 },  // 0x73 's'
  { 277, 3, 7, 4, 0, -7 },  // 0x74 't'
  { 281, 3, 5, 4, 0, -5 },  // 0x75 'u'
  { 284, 3, 5, 4, 0, -5 },  // 0x76 'v'
  { 287, 4, 5, 5, 0, -5 },  // 0x77 'w'
  { 290, 3, 5, 4, 0, -5 },  // 0x78 'x'
  { 293, 3, 5, 4, 0, -5 },  // 0x79 'y'
  { 296, 3, 5, 4, 0, -5 },  // 0x7A 'z'
  { 299, 3, 7, 4, 0, -7 },  // 0x7B '{'
  { 303, 1, 7, 2, 0, -7 },  // 0x7C '|'
  { 305, 3, 7, 4, 0, -7 },  // 0x7D '}'
  { 309, 3, 2, 4, 0, -4 }   // 0x7E '~'
};

const GFXfont Font4x7Fixed PROGMEM = {
  (uint8_t *)Font4x7FixedBitmaps,
  (GFXglyph *)Font4x7FixedGlyphs, 0x20, 0x7E, 7
};