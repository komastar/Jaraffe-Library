//
//  File: JFGraphicsDevice.cpp
//  Author: Seungmin Choi (ccm1333@naver.com)
//
//  Copyright (c) 2022 Seungmin Choi. All rights reserved.
//

#include "JFGraphicsDevice.h"
#include "Private/GraphicsAPI.h"

using namespace JFL;

JFGraphicsDevice* JFGraphicsDevice::CreateGraphicsDevice()
{
    return JFL::Private::CreateGraphicsDevice();
}