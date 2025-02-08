#pragma once

#include <stdint.h>

// Często używane rejestry ekspandera MCP23S08
#define MCP_IODIR   0x00 // Ustawienie kierunku działania pinów
#define MCP_GPPU    0x06 // Włączenie pull-up dla wejść
#define MCP_GPIO    0x09 // Odczytanie stanu wejść
#define MCP_OLAT    0x0A // Zmiana stanu wyjść

// Pozostałe rejestry ekspandera MCP23S08
#define MCP_IPOL      0x01
#define MCP_GPINTEN   0x02
#define MCP_DEFVAL    0x03
#define MCP_INTCON    0x04
#define MCP_IOCON     0x05
#define MCP_INTF      0x07
#define MCP_INTCAP    0x08

// Odczytanie wartości rejestru
// reg - rejestr, który ma zostać odczytany
// return - wartość odczytanego rejestru
uint8_t mcp_reg_read(uint8_t reg);

// Zapisywanie nowej wartości do rejestru
// reg - rejestr, do którego zapisujemy
// value - wartość, która ma zostać zapisana
// return - funkcja nie zwraca żadnej wartości
void mcp_reg_write(uint8_t reg, uint8_t value);
