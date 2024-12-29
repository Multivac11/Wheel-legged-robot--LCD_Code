//
// Created by w1445 on 2024/12/23.
//

#include "USART_TO.h"
#include "usart.h"

extern DMA_HandleTypeDef hdma_usart1_rx;
uint8_t Face_recv_Date[128] = {0};

void USART1_Init(void)
{
    HAL_UARTEx_ReceiveToIdle_DMA(&huart1, Face_recv_Date, 128); // 启用空闲中断接收
    __HAL_DMA_DISABLE_IT(&hdma_usart1_rx, DMA_IT_HT);
}

void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size)
{
    if(huart->Instance == USART1)
    {

    }
}

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)
{
    if (huart == &huart1)
    {
        HAL_UARTEx_ReceiveToIdle_DMA(&huart1, Face_recv_Date, 128); // 启用空闲中断接收
        __HAL_DMA_DISABLE_IT(&hdma_usart1_rx, DMA_IT_HT);
    }
}