---
title: RTOS I
sidebar_position: 2
sidebar_class_name: autoestudo
---

# Introdução ao RTOS

## 1. O que é o RTOS

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/F321087yYy4" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

:::tip Exercício 22.01

Reproduza o exemplo do vídeo (um blink utilizando um *task* de *RTOS* com um
delay não bloqueante).

:::

## 2. Primeiros passos com o FreeRTOS

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/JIr7Xm_riRs" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

:::tip Exercício 22.02

Crie um programa usando o ESP32 que tem dois tasks diferentes controlando o
mesmo LED, cada um com um vTaskDelay diferente. Observe o resultado obtido. O
que está acontecendo?

:::

## 3. Task scheduling

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/95yUbClyf3E" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

:::tip Exercício 22.03

Crie um programa usando o ESP32 com dois tasks distintos; um deles deve se
ocupar de piscar um LED periodicamente (blink) com um vTaskDelay. O outro deve
ler a entrada da porta serial e verificar o valor digitado pelo usuário. O
valor digitado deve, então, atualizar o valor do vTaskDelay da primeira tarefa,
efetivamente controlando a taxa com a qual o LED pisca. Sendo assim, o sistema
tem duas tarefas:

1. Uma tarefa de blink para o LED com uma taxa de atualização;
2. Uma tarefa para ler a entrada da serial e atualizar a taxa de atualização da
   tarefa 1.

:::

## 4. Memory management

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/Qske3yZRW5I" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::


