---
title: Protocolos de embarcados
sidebar_position: 2
sidebar_class_name: autoestudo
---

# Interagindo com periféricos de microcontroladores

Esta seção é para você treinar um pouco! =)

## 1. ADC

:::tip Exercício 21.01

Utilizando o TinkerCAD e a plataforma Arduino, interaja com um dispositivo que
envie um sinal analógico para o microcontrolador e, usando seu **ADC**,
converta esse sinal para digital e exiba-o utilizando a porta serial.

:::

:::tip Exercício 21.02

Repita o exercício anterior, dessa vez utilizando o ESP32 *sem usar a
plataforma Arduino*. Para gerar o sinal analógico, você pode procurar no
laboratório o sensor **MQ135**, que é um sensor de gáses voláteis.

:::

## 2. I2C

:::tip Exercício 21.03

Utilizando o TinkerCAD e a plataforma Arduino, interaja com um dispositivo que
utiliza o protocolo I2C (O display-matrix está disponível no simulador).

:::

:::tip Exercício 21.04

Utilizando o ESP32 *sem utilizar a plataforma Arduino*, interaja com um sensor
que utilize o I2C e exiba o valor lido na porta serial. Você pode procurar pelo
sensor de temperatura **AHT10** no laboratório.

:::

## 3. UART

:::tip Exercício 21.05

Utilizando o TinkerCAD e a plataforma Arduino, crie um circuito que utiliza
**dois microcontroladores**. Um deles está ligado a um *push button* e o outro
está ligado a um LED. Utilizando o protocolo UART, faça a comunicação entre os
dois microcontroladores. O objetivo é que um microcontrolador receba o sinal do
botão e envie para o outro microcontrolador o estado que o led deve assumir
(aceso ou apagado).

:::

:::tip Exercício 21.06

Repita o exercício 21.05, porém utilizando dois ESP32 e sem utilizar a
plataforma Arduino.

:::
