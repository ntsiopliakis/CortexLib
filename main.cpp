//#include <cstdint>            //for int types such as uint32_t
#include "gpioabitsfield.hpp" //for Gpioa Registers enums
#include "gpioaregisters.hpp" //for Gpioa
//#include "dioregisters.hpp"
//#include "timera0registers.hpp"


using namespace std ;

int main()
{
//  auto test = DIO::PAIN::Get() ;
//  auto res = DIO::P1IV::P1IVField::P1IV_2::IsSet() ;
 
//  res = DIO::P1IVPack<
//          DIO::P1IV::P1IVField::P1IV_2,
//          DIO::P1IV::P1IVField::P1IV_4
//          >::IsSet() ;
//  TIMER_A0::TAxCTL::ID::ID_0::Set() ;
  
//  TIMER_A0::TAxCCR1::TAxR::Set(10U) ;
//  auto res = Dio::P2Iv::P2IvField::P2Iv0::IsSet() ;
//  res = Dio::P2IvPack<
//          Dio::P2Iv::P2IvField::P2Iv0,
//          Dio::P2Iv::P2IvField::P2Iv10
//          >::IsSet() ;
//  TimerA0::Taxctl::Id::Id0::Set();
  
  GPIOA::MODER::MODER15::Output ::Set() ;
  auto result = GPIOA::MODER::MODER15::Output::IsSet() ;
  GPIOA::MODER::Write(2U) ;
  auto test = GPIOA::MODER::Get() ;

  GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::Set() ;

  result = GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::IsSet() ; ;

  GPIOA::MODER::MODER15::Set(2U) ;
  test = GPIOA::MODER::MODER15::Get() ;
  
  auto i = GPIOA::IDR::Get() ;
  
  GPIOA::BSRRPack<GPIOA::BSRR::BR0::Reset,
              GPIOA::BSRR::BR4::Reset
              >::Set() ;
  return 0 ;
}

