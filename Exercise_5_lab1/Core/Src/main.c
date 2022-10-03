/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEG(int time)
{
	if(time==0)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 1);
	}
	else if(time==1)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 1);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 1);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 1);
	}
	else if(time==2)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 1);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
	else if(time==3)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
	else if(time==4)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 1);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 1);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
	else if(time==5)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 1);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
	else if(time==6)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 1);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
	else if(time==7)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 1);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 1);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 1);
	}
	else if(time==8)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 0);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
	else if(time==9)
	{
		HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		HAL_GPIO_WritePin(LED1_3_GPIO_Port, LED1_3_Pin, 0);
		HAL_GPIO_WritePin(LED1_4_GPIO_Port, LED1_4_Pin, 0);
		HAL_GPIO_WritePin(LED1_5_GPIO_Port, LED1_5_Pin, 1);
		HAL_GPIO_WritePin(LED1_6_GPIO_Port, LED1_6_Pin, 0);
		HAL_GPIO_WritePin(LED1_7_GPIO_Port, LED1_7_Pin, 0);
	}
}
void display7SEGforled2(int time)
{
	if(time==0)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 1);
		}
		else if(time==1)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 1);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 1);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 1);
		}
		else if(time==2)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 1);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
		else if(time==3)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
		else if(time==4)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 1);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 1);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
		else if(time==5)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 1);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
		else if(time==6)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 1);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
		else if(time==7)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 1);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 1);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 1);
		}
		else if(time==8)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 0);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
		else if(time==9)
		{
			HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
			HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			HAL_GPIO_WritePin(LED2_3_GPIO_Port, LED2_3_Pin, 0);
			HAL_GPIO_WritePin(LED2_4_GPIO_Port, LED2_4_Pin, 0);
			HAL_GPIO_WritePin(LED2_5_GPIO_Port, LED2_5_Pin, 1);
			HAL_GPIO_WritePin(LED2_6_GPIO_Port, LED2_6_Pin, 0);
			HAL_GPIO_WritePin(LED2_7_GPIO_Port, LED2_7_Pin, 0);
		}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);


  int red_on=9;
  int yellow_on=1;
  int green_on=3;
  int red1_on=9;
  int green1_on=3;
  int yellow1_on=1;
  int total = red_on+ yellow_on + green_on;
  int total1 = red1_on+ yellow1_on + green1_on;
  //ban dau den 0 xanh vang
  //den 1 do
  int timer= total;
  int timer1= total1;
  int led_on= green_on;
  int led_on1=red1_on;
  while (1)
  {
	  //den 0 xanh vang do
	  if(timer>(total-green_on)&&timer<=total)
	  	 {
		  //sang xanh 0
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  	 }
	  if(timer==total-green_on) led_on=yellow_on;
	  if(timer<=total-green_on&&timer>total-green_on-yellow_on)
	  	 {
	  		 //tat xanh sang vang
	  		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	  		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  	 }
	  if(timer<=total-green_on-yellow_on&&timer>total-green_on-yellow_on- red_on)
	  	 {
	  		 //tat vang sang do
		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  	 }
	  if(timer==total-green_on-yellow_on) led_on= red_on;
	  if(timer==0)
	  	 {
		  //tat do sang xanh
		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  	  timer=total;
	  	  led_on= green_on;
	  	 }
	  //den 2 do xanh vang
	  if(timer1>total1-red1_on && timer1<=total1)
	  	{
	  		  //sang do 1
	  		  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	  	  	 }
	  if(timer1==total1-red1_on) {led_on1= green1_on;}

	  	  if(timer1<=total1-red1_on&&timer>total-green1_on-red1_on)
	  	  	 {
	  	  		 //tat do 1 sang xanh 1
	  	  		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
	  	  		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	  	  	 }
	  	if(timer1==total1-red1_on-green1_on) led_on1= yellow1_on;
	  	  if(timer1<=total1-red1_on-green1_on&&timer>total1-green1_on-yellow1_on- red1_on)
	  	  	 {
	  	  		 //tat xanh 1 sang vang 1
	  		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
	  		  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	  	  	 }
	  	  if(timer1==0)
	  	  	 {
	  		  //tat vang 1 sang do 1
	  		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
	  		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	  	  	  timer1=total1;
	  	  	  led_on1=red1_on;
	  	  	 }



	 display7SEG(led_on);
	 display7SEGforled2(led_on1);
	 led_on--;
	 led_on1--;
	 timer--;
	 timer1--;
	 HAL_Delay(1000);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED_1_Pin
                          |LED_YELLOW_1_Pin|LED_GREEN_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED1_1_Pin|LED1_2_Pin|LED1_3_Pin|LED2_4_Pin
                          |LED2_5_Pin|LED2_6_Pin|LED2_7_Pin|LED1_4_Pin
                          |LED1_5_Pin|LED1_6_Pin|LED1_7_Pin|LED2_1_Pin
                          |LED2_2_Pin|LED2_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin LED_RED_1_Pin
                           LED_YELLOW_1_Pin LED_GREEN_1_Pin */
  GPIO_InitStruct.Pin = LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|LED_RED_1_Pin
                          |LED_YELLOW_1_Pin|LED_GREEN_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_1_Pin LED1_2_Pin LED1_3_Pin LED2_4_Pin
                           LED2_5_Pin LED2_6_Pin LED2_7_Pin LED1_4_Pin
                           LED1_5_Pin LED1_6_Pin LED1_7_Pin LED2_1_Pin
                           LED2_2_Pin LED2_3_Pin */
  GPIO_InitStruct.Pin = LED1_1_Pin|LED1_2_Pin|LED1_3_Pin|LED2_4_Pin
                          |LED2_5_Pin|LED2_6_Pin|LED2_7_Pin|LED1_4_Pin
                          |LED1_5_Pin|LED1_6_Pin|LED1_7_Pin|LED2_1_Pin
                          |LED2_2_Pin|LED2_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
