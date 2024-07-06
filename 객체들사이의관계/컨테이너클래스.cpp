//컨테이너 클래스(Container Class)
//컨테이너 클래스는 다른 객체들을 담기 위해 설계된 클래스입니다.즉, 컨테이너 클래스는 하나 이상의 객체를 저장하고 관리하는 데 사용됩니다.이러한 클래스는 보통 배열, 리스트, 맵, 스택, 큐 등과 같은 데이터 구조를 구현합니다.
//
//컨테이너 클래스는 C++ 표준 라이브러리에서 제공되는 STL(Standard Template Library)의 중요한 부분입니다.STL에는 다양한 컨테이너 클래스가 포함되어 있으며, 이들은 각각 고유한 특성과 용도를 가지고 있습니다.
//
//컨테이너 클래스의 종류
//Sequence Containers(시퀀스 컨테이너) : 요소들이 특정 순서대로 저장됩니다.
//
//std::vector : 동적 배열로, 크기가 가변적입니다.
//std::deque : 양쪽 끝에서 삽입과 삭제가 가능한 배열입니다.
//std::list : 이중 연결 리스트로, 임의의 위치에서 삽입과 삭제가 효율적입니다.
//Associative Containers(연관 컨테이너) : 요소들이 키를 기준으로 정렬되어 저장됩니다.
//
//std::set : 중복되지 않는 요소들이 정렬된 상태로 저장됩니다.
//std::map : 키 - 값 쌍을 저장하며, 키는 중복되지 않고 정렬된 상태로 저장됩니다.
//std::multiset : 중복을 허용하는 요소들이 정렬된 상태로 저장됩니다.
//std::multimap : 중복을 허용하는 키 - 값 쌍을 저장합니다.
//Unordered Containers(비정렬 컨테이너) : 요소들이 해시 테이블을 기반으로 저장됩니다.
//
//std::unordered_set : 중복되지 않는 요소들이 해시 테이블에 저장됩니다.
//std::unordered_map : 키 - 값 쌍이 해시 테이블에 저장됩니다.
//std::unordered_multiset : 중복을 허용하는 요소들이 해시 테이블에 저장됩니다.
//std::unordered_multimap : 중복을 허용하는 키 - 값 쌍이 해시 테이블에 저장됩니다.
//Container Adapters(컨테이너 어댑터) : 기본 컨테이너에 기능을 추가하여 새로운 인터페이스를 제공합니다.
//
//std::stack : LIFO(Last In First Out) 원칙에 따라 요소를 저장합니다.
//std::queue : FIFO(First In First Out) 원칙에 따라 요소를 저장합니다.
//std::priority_queue : 우선순위에 따라 요소를 저장합니다.