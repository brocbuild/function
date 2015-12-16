/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file function.h
 * @author liruihao(com@baidu.com)
 * @date 2015/12/15 14:41:44
 * @brief 
 *  
 **/




#ifndef  BROCBUILD_FUNCTION_SRC_FUNCTION_H
#define  BROCBUILD_FUNCTION_SRC_FUNCTION_H

#include "brocbuild/configure/configure.pb.h"
#include "brocbuild/data/data.h"

class function {
    public:
        function();
        ~function();
        bool is_function();
    private:
        Configure myconfigure;
        datastruct mydata;
};


#endif  //BROCBUILD_FUNCTION_SRC_FUNCTION_H
