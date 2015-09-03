/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/zhen/Documents/ros_zhen/src/table_object/srv/palm_reflex.srv
 *
 */


#ifndef TABLE_OBJECT_MESSAGE_PALM_REFLEXRESPONSE_H
#define TABLE_OBJECT_MESSAGE_PALM_REFLEXRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace table_object
{
template <class ContainerAllocator>
struct palm_reflexResponse_
{
  typedef palm_reflexResponse_<ContainerAllocator> Type;

  palm_reflexResponse_()
    : trigger(false)  {
    }
  palm_reflexResponse_(const ContainerAllocator& _alloc)
    : trigger(false)  {
    }



   typedef uint8_t _trigger_type;
  _trigger_type trigger;




  typedef boost::shared_ptr< ::table_object::palm_reflexResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::table_object::palm_reflexResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct palm_reflexResponse_

typedef ::table_object::palm_reflexResponse_<std::allocator<void> > palm_reflexResponse;

typedef boost::shared_ptr< ::table_object::palm_reflexResponse > palm_reflexResponsePtr;
typedef boost::shared_ptr< ::table_object::palm_reflexResponse const> palm_reflexResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::table_object::palm_reflexResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::table_object::palm_reflexResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace table_object

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'household_objects_database_msgs': ['/opt/ros/groovy/share/household_objects_database_msgs/cmake/../msg'], 'shape_msgs': ['/opt/ros/groovy/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/groovy/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/groovy/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/groovy/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/groovy/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/groovy/share/octomap_msgs/cmake/../msg'], 'manipulation_msgs': ['/opt/ros/groovy/share/manipulation_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/cmake/../msg'], 'table_object': ['/home/zhen/Documents/ros_zhen/src/table_object/msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::table_object::palm_reflexResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::table_object::palm_reflexResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_object::palm_reflexResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_object::palm_reflexResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_object::palm_reflexResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_object::palm_reflexResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::table_object::palm_reflexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6d1152a533bdef9ec687318c8e489b0";
  }

  static const char* value(const ::table_object::palm_reflexResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6d1152a533bdef9ULL;
  static const uint64_t static_value2 = 0xec687318c8e489b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::table_object::palm_reflexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "table_object/palm_reflexResponse";
  }

  static const char* value(const ::table_object::palm_reflexResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::table_object::palm_reflexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool trigger\n\
\n\
";
  }

  static const char* value(const ::table_object::palm_reflexResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::table_object::palm_reflexResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trigger);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct palm_reflexResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::table_object::palm_reflexResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::table_object::palm_reflexResponse_<ContainerAllocator>& v)
  {
    s << indent << "trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.trigger);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TABLE_OBJECT_MESSAGE_PALM_REFLEXRESPONSE_H