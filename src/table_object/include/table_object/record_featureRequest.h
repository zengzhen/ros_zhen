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
 * Auto-generated by genmsg_cpp from file /home/zhen/Documents/ros_zhen/src/table_object/srv/record_feature.srv
 *
 */


#ifndef TABLE_OBJECT_MESSAGE_RECORD_FEATUREREQUEST_H
#define TABLE_OBJECT_MESSAGE_RECORD_FEATUREREQUEST_H


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
struct record_featureRequest_
{
  typedef record_featureRequest_<ContainerAllocator> Type;

  record_featureRequest_()
    : record_name()  {
    }
  record_featureRequest_(const ContainerAllocator& _alloc)
    : record_name(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _record_name_type;
  _record_name_type record_name;




  typedef boost::shared_ptr< ::table_object::record_featureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::table_object::record_featureRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct record_featureRequest_

typedef ::table_object::record_featureRequest_<std::allocator<void> > record_featureRequest;

typedef boost::shared_ptr< ::table_object::record_featureRequest > record_featureRequestPtr;
typedef boost::shared_ptr< ::table_object::record_featureRequest const> record_featureRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::table_object::record_featureRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::table_object::record_featureRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace table_object

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'household_objects_database_msgs': ['/opt/ros/groovy/share/household_objects_database_msgs/cmake/../msg'], 'shape_msgs': ['/opt/ros/groovy/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/groovy/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/groovy/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/groovy/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/groovy/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/groovy/share/octomap_msgs/cmake/../msg'], 'manipulation_msgs': ['/opt/ros/groovy/share/manipulation_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/cmake/../msg'], 'table_object': ['/home/zhen/Documents/ros_zhen/src/table_object/msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::table_object::record_featureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::table_object::record_featureRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_object::record_featureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::table_object::record_featureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_object::record_featureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::table_object::record_featureRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::table_object::record_featureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b7e9df2a27f3412771a38d6b61e5fb2b";
  }

  static const char* value(const ::table_object::record_featureRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb7e9df2a27f34127ULL;
  static const uint64_t static_value2 = 0x71a38d6b61e5fb2bULL;
};

template<class ContainerAllocator>
struct DataType< ::table_object::record_featureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "table_object/record_featureRequest";
  }

  static const char* value(const ::table_object::record_featureRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::table_object::record_featureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string record_name\n\
\n\
";
  }

  static const char* value(const ::table_object::record_featureRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::table_object::record_featureRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.record_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct record_featureRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::table_object::record_featureRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::table_object::record_featureRequest_<ContainerAllocator>& v)
  {
    s << indent << "record_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.record_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TABLE_OBJECT_MESSAGE_RECORD_FEATUREREQUEST_H
