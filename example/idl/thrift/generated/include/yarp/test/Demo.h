/*
 * Copyright (C) 2006-2019 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_DEMO_H
#define YARP_THRIFT_GENERATOR_SERVICE_DEMO_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <yarp/test/demo_common.h>
#include <yarp/test/PointD.h>

namespace yarp {
namespace test {

class Demo :
        public yarp::os::Wire
{
public:
    // Constructor
    Demo();

    virtual std::int32_t get_answer();

    virtual std::int32_t add_one(const std::int32_t x = 0);

    virtual std::int32_t double_down(const std::int32_t x);

    virtual yarp::test::PointD add_point(const yarp::test::PointD& x, const yarp::test::PointD& y);

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

} // namespace yarp
} // namespace test

#endif // YARP_THRIFT_GENERATOR_SERVICE_DEMO_H