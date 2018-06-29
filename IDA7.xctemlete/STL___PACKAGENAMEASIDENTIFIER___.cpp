//
//  idatest.cpp
//  idatest
//
//  Created by charles on 2018/6/29.
//  Copyright © 2018 charles. All rights reserved.
//
#define __MAC__
#define __X64__

#ifdef IDA64
#define __EA64__
#endif

#include <iostream>
#include <ida.hpp>
#include <idp.hpp>
#include <loader.hpp>
#include <kernwin.hpp>


int idaapi init(void)
{
    return PLUGIN_OK;
}

bool idaapi run(size_t)
{
    warning("Hello, world!");
    return true;
}

plugin_t PLUGIN =
{
    IDP_INTERFACE_VERSION,
    PLUGIN_UNL,           // plugin flags
    init,                 // initialize
    NULL,                 // terminate. this pointer may be NULL.
    run,                  // invoke plugin
    NULL,                 // long comment about the plugin
    NULL,                 // multiline help about the plugin
    "Hello, world",       // the preferred short name of the plugin
    NULL                  // the preferred hotkey to run the plugin
};
