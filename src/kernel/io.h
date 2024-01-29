#pragma once

void x86_outb(uint16_t port, uint8_t data);
void x86_outl(uint16_t port, uint32_t data);
uint8_t x86_inb(uint16_t port);
uint16_t x86_inw(uint16_t port);
uint16_t x86_insw(void* bffer, uint16_t port, uint32_t size);
uint32_t x86_inl(uint16_t port);
void panic();
