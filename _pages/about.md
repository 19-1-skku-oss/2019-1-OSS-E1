---
layout: default
title: About
permalink: /about/
avatar: true
navigation: true
---
# 프로젝트 소개 및 기여 방식
 우리가 알고 있는 알고리즘과 자료구조를 C언어를 활용하여 기존 저장소 [algorithms-and-data-struct](https://github.com/VentGrey/algorithms-and-data-struct.git){:target="_blank"} 에 없던 것을 추가하는 방식으로 작은 도움을 드렸습니다. 이를 통해 저희 또한 복습을 할 수 있어 좋은 배움의 기회가 되었습니다.

---

# 추가한 알고리즘 및 자료구조 소개

## 기본 정렬 알고리즘
### - Bubble Sort
 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘으로 인접한 2개의 레코드를 비교하여 크기가 순서대로 되어 있지 않으면 서로 교환한다. 선택 정렬과 기본 개념이 유사하다.

<img src="https://media1.giphy.com/media/sJqcl6rWaEEXS/giphy.gif">


### - Cocktail Sort
 Bubble sort의 최종 개선판으로 Bubble Sort의 양방향으로 이동을 하면서, 현재 위치에 있는 노드와 옆에 있는 노드를 비교하여 자리를 바꾸는 것이다.
 Cocktail Sort는 양 방향으로 처리하기 때문에 Bubble Sort보다 속도가 빠르다.

 ![cocktail_sort](https://upload.wikimedia.org/wikipedia/commons/e/ef/Sorting_shaker_sort_anim.gif)


### - Selection Sort
Selection sort는 제자리 정렬 알고리즘의 하나로, 다음과 같은 순서로 이루어진다. 주어진 리스트 중에 최소값을 찾는다.그 값을 맨 앞에 위치한 값과 교체한다(패스(pass)). 맨 처음 위치를 뺀 나머지 리스트를 같은 방법으로 교체한다. Selection sort는 알고리즘이 단순하며 사용할 수 있는 메모리가 제한적인 경우에 사용시 성능 상의 이점이 있다.

![selecion_sort](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)


### - Insertion Sort
Insertion sort은 자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교하여, 자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘이다. 배열이 길어질수록 효율이 떨어지지만, 구현이 간단하다는 장점이 있다. 선택 정렬이나 거품 정렬과 같은 같은 알고리즘에 비교하여 빠르며, 안정 정렬이고 in-place 알고리즘이다.

![insertion_sort](https://thumbs.gfycat.com/CornyThickGordonsetter-size_restricted.gif)


### - Radix Sort
  한국어로 기수정렬이라고 하며 낮은 자리수부터 비교하여 정렬해 간다는 것을 기본 개념으로 하는 정렬 알고리즘이다. 기수정렬을 비료 연산을 하지 않으며 정렬 속도가 빠르지만 데이터 전체 크기에 기수 테이블의 크기만한 메모리가 더 필요하다.

![radix_sort](https://thumbs.gfycat.com/PopularHorribleGarpike-size_restricted.gif)


### - Merge Sort
Merge sort은 O(n log n) 비교 기반 정렬 알고리즘이다. 일반적인 방법으로 구현했을 때 이 정렬은 안정 정렬에 속하며, 분할 정복 알고리즘의 하나이다. 존 폰 노이만이 1945년에 개발했다. 하나의 리스트를 두 개의 균등한 크기로 분할하고 분할된 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를 합하여 전체가 정렬된 리스트가 되게 하는 방법이다.


![merge_sort](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)


### - Quick Sort
‘찰스 앤터니 리처드 호어(Charles Antony Richard Hoare)’가 개발한 정렬 알고리즘이다. Quick sort는 불안정 정렬에 속하며, 다른 원소와의 비교만으로 정렬을 수행하는 비교 정렬에 속한다. 분할 정복 알고리즘의 하나로, 평균적으로 매우 빠른 수행 속도를 자랑하는 정렬 방법이다. 하나의 리스트를 피벗(pivot)을 기준으로 두 개의 비균등한 크기로 분할하고 분할된 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를 합하여 전체가 정렬된 리스트가 되게 하는 방법이다.


![quick_sort](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif)


### - Heap Sort
Heap sort란 최대 힙 트리나 최소 힙 트리를 구성해 정렬을 하는 방법으로서, 내림차순 정렬을 위해서는 최대 힙을 구성하고 오름차순 정렬을 위해서는 최소 힙을 구성하면 된다.

![heap_sort](https://upload.wikimedia.org/wikipedia/commons/1/1b/Sorting_heapsort_anim.gif)


### - Shell Sort
Shell sort는 가장 오래된 정렬 알고리즘의 하나이다. 이름은 1959년 이 방법을 발표한 창안자 도널드 셸의 이름을 따서 붙여졌다. 셸 정렬은 개념을 이해하고 구현하기는 쉬우나 시간복잡도 분석은 조금 복잡하다. Shell sort는 주어진 자료 리스트를 특정 매개변수 값의 길이를 갖는 부파일(subfile)로 쪼개서, 각 부파일에서 정렬을 수행한다. 즉, 매개변수 값에 따라 부파일(Subfile)이 발생하며, 매개변수값을 줄이며 이 과정을 반복하고 결국 매개변수 값이 1이면 정렬은 완성된다.

![shell_sort](https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif)


## 탐색 알고리즘
### - DFS
깊이 우선 탐색(Depth-First Search)로 루트 노드(혹은 다른 임의의 노드)에서 시작해서 다음 분기(branch)로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 방법이다. 자기 자신을 호출하는 순환 알고리즘의 형태를 가지고 있다. 전위 순회(Pre-Order Traversals)를 포함한 다른 형태의 트리 순회는 모두 DFS의 한 종류이다.이 알고리즘을 구현할 때 가장 큰 차이점은, 그래프 탐색의 경우 어떤 노드를 방문했었는지 여부를 반드시 검사 해야 한다는 것이다. 이를 검사하지 않을 경우 무한루프에 빠질 위험이 있다.

### - BFS
넓이 우선 탐색(Breadth-First Search)로 루트 노드(혹은 다른 임의의 노드)에서 시작해서 인접한 노드를 먼저 탐색하는 방법이다. 시작 정점으로부터 가까운 정점을 먼저 방문하고 멀리 떨어져 있는 정점을 나중에 방문하는 순회 방법이다. 즉, 깊게(deep) 탐색하기 전에 넓게(wide) 탐색하는 것이다.  두 노드 사이의 최단 경로 혹은 임의의 경로를 찾고 싶을 때 이 방법을 선택한다. DFS보다 조금 더 복잡하다.

### Brute-Force
문제를 해결하기 위해서, 가능한 모든 경우에 대해 모두 직접 해 보는 방법이다. 이해하기 쉬우나 숫자 단위가 커지면 사용하기 힘들다. 주로 암호학에서 많이 쓰인다.

---

## 자료구조
### - Queue
큐(queue)는 컴퓨터의 기본적인 자료 구조의 한가지로, 먼저 집어 넣은 데이터가 먼저 나오는 FIFO(First In First Out)구조로 저장하는 형식을 말한다.

### - Stack
스택(stack)은 제한적으로 접근할 수 있는 나열 구조이다. 그 접근 방법은 언제나 목록의 끝에서만 일어난다. 끝먼저내기 목록(Pushdown list)이라고도 한다. 스택은 한 쪽 끝에서만 자료를 넣거나 뺄 수 있는 선형 구조(LIFO - Last In First Out)으로 되어 있다. 자료를 넣는 것을 '밀어넣는다' 하여 푸시(push)라고 하고 반대로 넣어둔 자료를 꺼내는 것을 팝(pop)이라고 하는데, 이때 꺼내지는 자료는 가장 최근에 보관한 자료부터 나오게 된다. 이처럼 나중에 넣은 값이 먼저 나오는 것을 LIFO 구조라고 한다.

![stack](https://camo.githubusercontent.com/ed8db1baa4b62e314c66cdbbdcd8debf75edbf1c/68747470733a2f2f7777772e7475746f7269616c73706f696e742e636f6d2f646174615f737472756374757265735f616c676f726974686d732f696d616765732f737461636b5f726570726573656e746174696f6e2e6a7067)


### - Binary Search Tree
이진탐색트리란 이진탐색(binary search)과 연결리스트(linked list)를 결합한 자료구조의 일종이다. 이진탐색의 효율적인 탐색 능력을 유지하면서도, 빈번한 자료 입력과 삭제를 가능하게끔 고안됐다. 예컨대 이진탐색의 경우 탐색에 소요되는 계산복잡성은 O(logn)O(log⁡n)으로 빠르지만 자료 입력, 삭제가 불가능하다. 연결리스트의 경우 자료 입력, 삭제에 필요한 계산복잡성은 O(1)O(1)로 효율적이지만 탐색하는 데에는 O(n)O(n)의 계산복잡성이 발생한다. 이 두 마리 토끼를 잡아보자는 것이 이진탐색트리의 목적이다.

### - linked List
Linked list는 각 노드가 데이터와 포인터를 가지고 한 줄로 연결되어 있는 방식으로 데이터를 저장하는 자료 구조이다. 이름에서 말하듯이 데이터를 담고 있는 노드들이 연결되어 있는데, 노드의 포인터가 다음이나 이전의 노드와의 연결을 담당하게 된다. Linked list의 종류로는 단일 연결 리스트, 이중 연결 리스트 등이 있다.

### - Array List
ArrayList는 내부적으로 데이터를 배열에서 관리하며 데이터의 추가, 삭제를 위해 임시 배열을 생성해 데이터를 복사 하는 방법을 사용 하고 있다. 대량의 자료를 추가/삭제 하는 경우에는 그만큼 데이터의 복사가 많이 일어나게 되어 성능 저하를 일으킬 수 있다. 반면 각 데이터는 인덱스를 가지고 있기 때문에 한번에 참조가 가능해 데이터의 검색에는 유리한 구현체이다.

### - Hashing
해시함수(hash function)란 데이터의 효율적 관리를 목적으로 임의의 길이의 데이터를 고정된 길이의 데이터로 매핑하는 함수이다. 이 때 매핑 전 원래 데이터의 값을 키(key), 매핑 후 데이터의 값을 해시값(hash value), 매핑하는 과정 자체를 해싱(hashing)라고 한다.
