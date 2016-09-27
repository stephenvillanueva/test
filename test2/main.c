//
//  main.c
//  test2
//
//  Created by Stephen Villanueva on 16/01/1733 ERA1.
//  Copyright © 1733 ERA1 Stephen Villanueva. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//**************** Initialising variables *********************


//Others
char name[20];
char current_main_state[20];
int loop_counter = 1;
char variable[20] = "    ";

//Letters
char letter_w[2] = "w";
char letter_a[2] = "a";
char letter_s[2] = "s";
char letter_d[2] = "d";
char letter_k[2] = "k";
char letter_l[2] = "l";

//Results
int result_w;
int result_a;
int result_s;
int result_d;
int result_k;
int result_l;

//Strings
            //Mode Strings
char factory_mode[14] ="factory mode";
char manual_mode[12] = "manual mode";
char auto_mode[12] = "auto mode";
            //Factory mode strings
char PID_gains[10] = "PID gains";
char speed_max[10] = "speed max";
char yaw_rate_max[13] = "yaw rate max";
char IR_samples_est[15] = "IR samples est";
char IR_samples_rate[16] = "IR samples rate";
char RF_samples_est[15] = "RF samples est";
            //Manual mode strings
char motors_on[10] = "motors on";
char motors_off[11] = "motors off";
char speed_max_man[10] = "speed max";
            //Auto mode strings
char find_parrot[12] = "find parrot";


//flags
int main_state_flag = 2;
int factory_mode_flag;
int user_manual_flag;
int user_auto_flag;
int flag = 1;
int mode_location = 1;
int variable_location = 0;
int current_location;
int factory_state = 1;
int manual_state = 1;
int auto_state = 1;
int variable_select;
int state_entered;


//*************************************************************



int main()
{
    
    
    strcpy(current_main_state,manual_mode);
    current_location = mode_location;

    
    
    // The purpose of the location flags is to know where in the menu we are.
    // For example"
    // - If we are in the mode state the only things we can navigate through are:
    //      > Factory Mode
    //      > Manual Mode
    //      > Auto Mode
    // - If we are INSIDE the mode, then all the other options will be available,
    //   such as set PID gains, set speed max, etc...
    
    
    while(flag == 1)
    {
        
        printf("Mode: %s  \n", current_main_state);
        printf("State: %s \n", variable);
        
        printf("Please enter a character:\n");

        
        scanf("%s", name);
        
        printf("\n");
        
        result_w = strcmp(name,letter_w);
        result_a = strcmp(name,letter_a);
        result_s = strcmp(name,letter_s);
        result_d = strcmp(name,letter_d);
        result_k = strcmp(name,letter_k);
        result_l = strcmp(name,letter_l);
        
        
        if( result_w == 0)
        {
            
            
            if (current_location == mode_location)
            {
            
                if (main_state_flag == 2)
                {
                    strcpy(current_main_state,factory_mode);
                    main_state_flag = 1;
                }
                else if (main_state_flag == 3)
                {
                    strcpy(current_main_state,manual_mode);
                    main_state_flag = 2;
                }
                else if (main_state_flag == 1)
                {
                    strcpy(current_main_state,auto_mode);
                    main_state_flag = 3;
                }
            
            }
            else if( current_location == variable_location )
            {
                
                if(state_entered == factory_state)
                {
                    
                    
                }
                else if (state_entered == manual_state)
                {
                    
                }
                else if (state_entered == auto_state)
                {
                    
                }
                    
                
            }
           

            
            
            
        }
        else if ( result_a == 0)
        {
            
        }
        else if ( result_s == 0)
        {
            
            
        if (current_location == mode_location)
        {
            if (main_state_flag == 3)
            {
                strcpy(current_main_state,factory_mode);
                main_state_flag = 1;
            }
            else if (main_state_flag == 1)
            {
                strcpy(current_main_state,manual_mode);
                main_state_flag = 2;
            }
            else if (main_state_flag == 2)
            {
                strcpy(current_main_state,auto_mode);
                main_state_flag = 3;
            }
        }
            
            
            
        }
        else if ( result_d == 0)
        {
            
        }
        else if ( result_k == 0)
        {
            
        }
        else if ( result_l == 0)
        {
         
            current_location = variable_location;
            
            if (main_state_flag == 1)
            {

                state_entered = factory_state;
                strcpy(variable, PID_gains);
                
            }
            else if (main_state_flag == 2)
            {
                state_entered = manual_state;
                strcpy(variable, motors_on);
                
            }
            else if (main_state_flag == 3)
            {

                state_entered = auto_state;
                strcpy(variable, find_parrot);
                
            }
            
            
            
        }
        
        
        result_w = 0;
        result_a = 0;
        result_s = 0;
        result_d = 0;
        result_k = 0;
        result_l = 0;
        
        
    }
    
    
}
