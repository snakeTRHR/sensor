// Generated by gencpp from file dozap_second/Main.msg
// DO NOT EDIT!


#ifndef DOZAP_SECOND_MESSAGE_MAIN_H
#define DOZAP_SECOND_MESSAGE_MAIN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dozap_second
{
template <class ContainerAllocator>
struct Main_
{
  typedef Main_<ContainerAllocator> Type;

  Main_()
    : motor_right(0.0)
    , motor_left(0.0)
    , rotation_a_right(0)
    , rotation_a_left(0)
    , rotation_b_right(0)
    , rotation_b_left(0)  {
    }
  Main_(const ContainerAllocator& _alloc)
    : motor_right(0.0)
    , motor_left(0.0)
    , rotation_a_right(0)
    , rotation_a_left(0)
    , rotation_b_right(0)
    , rotation_b_left(0)  {
  (void)_alloc;
    }



   typedef double _motor_right_type;
  _motor_right_type motor_right;

   typedef double _motor_left_type;
  _motor_left_type motor_left;

   typedef int32_t _rotation_a_right_type;
  _rotation_a_right_type rotation_a_right;

   typedef int32_t _rotation_a_left_type;
  _rotation_a_left_type rotation_a_left;

   typedef int32_t _rotation_b_right_type;
  _rotation_b_right_type rotation_b_right;

   typedef int32_t _rotation_b_left_type;
  _rotation_b_left_type rotation_b_left;





  typedef boost::shared_ptr< ::dozap_second::Main_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dozap_second::Main_<ContainerAllocator> const> ConstPtr;

}; // struct Main_

typedef ::dozap_second::Main_<std::allocator<void> > Main;

typedef boost::shared_ptr< ::dozap_second::Main > MainPtr;
typedef boost::shared_ptr< ::dozap_second::Main const> MainConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dozap_second::Main_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dozap_second::Main_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dozap_second

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'dozap_second': ['/home/ubuntu/catkin_ws/src/dozap/dozap_second/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dozap_second::Main_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dozap_second::Main_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dozap_second::Main_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dozap_second::Main_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dozap_second::Main_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dozap_second::Main_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dozap_second::Main_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf323843762cfb3e8a894aa82e16c9f6";
  }

  static const char* value(const ::dozap_second::Main_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf323843762cfb3eULL;
  static const uint64_t static_value2 = 0x8a894aa82e16c9f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::dozap_second::Main_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dozap_second/Main";
  }

  static const char* value(const ::dozap_second::Main_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dozap_second::Main_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 motor_right\n\
float64 motor_left\n\
int32 rotation_a_right\n\
int32 rotation_a_left\n\
int32 rotation_b_right\n\
int32 rotation_b_left\n\
";
  }

  static const char* value(const ::dozap_second::Main_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dozap_second::Main_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motor_right);
      stream.next(m.motor_left);
      stream.next(m.rotation_a_right);
      stream.next(m.rotation_a_left);
      stream.next(m.rotation_b_right);
      stream.next(m.rotation_b_left);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Main_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dozap_second::Main_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dozap_second::Main_<ContainerAllocator>& v)
  {
    s << indent << "motor_right: ";
    Printer<double>::stream(s, indent + "  ", v.motor_right);
    s << indent << "motor_left: ";
    Printer<double>::stream(s, indent + "  ", v.motor_left);
    s << indent << "rotation_a_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rotation_a_right);
    s << indent << "rotation_a_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rotation_a_left);
    s << indent << "rotation_b_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rotation_b_right);
    s << indent << "rotation_b_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rotation_b_left);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOZAP_SECOND_MESSAGE_MAIN_H
