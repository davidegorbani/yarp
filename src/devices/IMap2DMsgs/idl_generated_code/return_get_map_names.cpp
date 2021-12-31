/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <return_get_map_names.h>

// Constructor with field values
return_get_map_names::return_get_map_names(const bool retval,
                                           const std::vector<std::string>& map_names) :
        WirePortable(),
        retval(retval),
        map_names(map_names)
{
}

// Read structure on a Wire
bool return_get_map_names::read(yarp::os::idl::WireReader& reader)
{
    if (!read_retval(reader)) {
        return false;
    }
    if (!read_map_names(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool return_get_map_names::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool return_get_map_names::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_retval(writer)) {
        return false;
    }
    if (!write_map_names(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool return_get_map_names::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string return_get_map_names::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// read retval field
bool return_get_map_names::read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write retval field
bool return_get_map_names::write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read (nested) retval field
bool return_get_map_names::nested_read_retval(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(retval)) {
        retval = false;
    }
    return true;
}

// write (nested) retval field
bool return_get_map_names::nested_write_retval(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(retval)) {
        return false;
    }
    return true;
}

// read map_names field
bool return_get_map_names::read_map_names(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    map_names.clear();
    uint32_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    map_names.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readString(map_names[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write map_names field
bool return_get_map_names::write_map_names(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_STRING, static_cast<uint32_t>(map_names.size()))) {
        return false;
    }
    for (const auto& _item : map_names) {
        if (!writer.writeString(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) map_names field
bool return_get_map_names::nested_read_map_names(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    map_names.clear();
    uint32_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    map_names.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readString(map_names[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) map_names field
bool return_get_map_names::nested_write_map_names(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_STRING, static_cast<uint32_t>(map_names.size()))) {
        return false;
    }
    for (const auto& _item : map_names) {
        if (!writer.writeString(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}