/*
The MIT License (MIT)

Copyright (c) 2019 Techno Road Inc.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef SPI_H_
#define SPI_H_

void SPI_enable_nss();
void SPI_disable_nss();
void SPI_write_byte(uint8_t pdata);
void SPI_write_word(uint16_t pdata);
void SPI_write_bytes(uint8_t * pdata,uint16_t length);
void SPI_write_words(uint16_t * pdata,uint16_t length);
void SPI_read_bytes(uint8_t *pdata, uint16_t length);
void SPI_read_words(uint16_t *pdata, uint16_t length);
void SPI_Bloking_wr_word(uint16_t wb,uint16_t *rb);
void SPI_NonBloking_wr_word(uint16_t wb,uint16_t *rb);
void SPI_NonBloking_wr_array(uint8_t *tx, uint8_t *rx, uint16_t size);

#endif /* SPI_H_ */
