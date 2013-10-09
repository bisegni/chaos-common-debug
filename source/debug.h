/*	
 *	debug.h
 *	!CHAOS
 *	Created by automatically 
 *	
 *    	Copyright 2012 INFN, National Institute of Nuclear Physics
 *
 *    	Licensed under the Apache License, Version 2.0 (the "License");
 *    	you may not use this file except in compliance with the License.
 *    	You may obtain a copy of the License at
 *
 *    	http://www.apache.org/licenses/LICENSE-2.0
 *
 *    	Unless required by applicable law or agreed to in writing, software
 *    	distributed under the License is distributed on an "AS IS" BASIS,
 *    	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    	See the License for the specific language governing permissions and
 *    	limitations under the License.
 */
#ifndef __common_debug_h__
#define __common_debug_h__
#include <stdio.h>
#include <stdint.h>
#include <pthread.h>
#ifdef DEBUG
#define DPRINT(str,ARGS...) printf("[%.12llu,x%lx] \033[38;5;148m%s\033[39m :" str,common::debug::getUsTime(),(unsigned long)pthread_self(), __FUNCTION__, ##ARGS)
#define DERR(str,ARGS...) printf("# [%.12llu,x%lx] \033[38;5;148m%s\033[39m :" str,common::debug::getUsTime(),(unsigned long)pthread_self(),__FUNCTION__,##ARGS)
#else
#define DPRINT(str,ARGS...) 
#define DERR(str,ARGS...) 
#endif
#define PRINT(str,ARGS...) printf("*" str,##ARGS)
#define ERR(str,ARGS...) printf("# \"%s\":" str,__FUNCTION__,##ARGS)

// include your class/functions headers here

namespace common {
  namespace debug {
    // put your code here
    uint64_t getUsTime();
  };
};

#endif
