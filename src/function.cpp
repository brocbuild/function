/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file ub.cpp
 * @author liruihao(com@baidu.com)
 * @date 2015/12/15 14:39:16
 * @brief 
 *  
 **/

#include "brocbuild/function/src/function.h"

function::function()
{
    myconfigure.set_configure_name("thread_num");
    myconfigure.set_configure_value("4");
}

function::~function()
{
}

bool function::is_function()
{
    return true;
}
