
/*
 * seven_segment.h
 * Common Cathode (Ground)
 * Pins 0-6 + Ground
 */ 

#ifndef SEVEN SEGMENT_H_
#define SEVEN SEGMENT_H_
void seven_seg_vinit(unsigned char port_name);
void seven_seg_write(unsigned char portname, unsigned char number);
#endif /* SEVEN SEGMENT_H_ */