/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_area.h>

// Constructor with field values
return_get_area::return_get_area(const bool retval,
                                 const yarp::dev::Nav2D::Map2DArea& area) :
        WirePortable(),
        retval(retval),
        area(area)
{
}

// Read structure on a Wire
bool return_get_area::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retval(reader)) {
        return false;
    }
    if (!nested_read_area(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_area::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_area::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retval(writer)) {
        return false;
    }
    if (!nested_write_area(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_area::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_area::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read retval field
bool return_get_area::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write retval field
bool return_get_area::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_get_area::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write (nested) retval field
bool return_get_area::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read area field
bool return_get_area::read_area(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.read(area)) {
        reader.fail();
        return false;
    }
    return true;
}

// write area field
bool return_get_area::write_area(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(area)) {
        return false;
    }
    return true;
}

// read (nested) area field
bool return_get_area::nested_read_area(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readNested(area)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) area field
bool return_get_area::nested_write_area(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(area)) {
        return false;
    }
    return true;
}